r"""
 *  MIPS emulation helpers for qemu.
 *
 *
 *  Copyright (c) 2011 Reed Kotler/MIPS Technologies DSP ASE
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 """

from dspaseutil import *
from dspase import *
from dspasei import *
import dspase

# major_opcodes = [['1', '2', 'LX'], ['1', '4', 'INSV']]
import re


def to_int_from_octal_pair(n):
   return int(n[0])*8 + int(n[1])

def opcode_enum(name):
    return "OPC_" + name

major_opc_gen_f = open('mips_major_dsp_special3_opcodes_gen.h', 'w');
opc_gen_f = open('mips_dsp_special3_opcodes_gen.h', 'w');
num_opcodes=0;

"""
 first do the major opcode groups. with dsp, each major group has
  a set of instructions distinguished by a secondary opcode. these major
  opcodes are 'special3' opcodes to qemu. in the hardware manual they occupy
  two octal digits, or 6 bits and are specified as pair of octal digits in the
  hardware manual. we enter them as in the manual and them make a hex
  code from those.
"""

major_opc_f = open('mips_major_dsp_special3_opcodes.h', 'w');

for key in sorted(special3_opcodes.keys()):
    major_special3_opcodes[key] = to_int_from_octal_pair (major_special3_opcodes[key]);
    key_c_name = opcode_enum(make_legal_c(key)) + '_major';
    major_opc_f.write('   ' + key_c_name + ' = ' + hex(major_special3_opcodes[key]) + ' | OPC_SPECIAL3,\n')

major_opc_f.close();

"""
For each special3 opcode, we create a function and in there process the
instructions associated with it. In Qemu this means we need to create the
cases and for that and then call the function.
"""
major_opc_case_f = open('mips_major_dsp_special3_opcodes_case.h', 'w');
for key in sorted(special3_opcodes.keys()):
    if (key != 'ADDUH.QB'):
        key_c_name = make_legal_c(key) + '_major';
        major_opc_case_f.write('        case ' + opcode_enum(key_c_name) + ':\n');
        major_opc_case_f.write('            gen_' + key_c_name + '(env, ctx);\n')
        major_opc_case_f.write('            break;\n');

major_opc_case_f.close()

"""
create the enumeration literals for each of the actual opcodes of the dsp ase.
"""
opc_f = open('mips_dsp_special3_opcodes.h', 'w')
for key in sorted(special3_opcodes.keys()):
    opc_f.write('/* special3 opcodes for ' + key + '*/\n')
    opc_f.write('enum {')
    first = True
    for key2 in sorted(special3_opcodes[key].keys()):
        if first:
            first = False
        else:
            opc_f.write(',')
        opc_f.write('\n');
        key2_c_name = make_legal_c(key2);
        special3_opcodes[key][key2] = to_int_from_octal_pair (special3_opcodes[key][key2]);
        opc_f.write('    ' + opcode_enum(key2_c_name) + ' = ' );
        opc_f.write(hex((special3_opcodes[key][key2] << 6) | major_special3_opcodes[key]));

        opc_f.write(' | OPC_SPECIAL3');
    opc_f.write('\n};\n\n')

"""
create the functions for each major opcode which call all it's secondary
opcodes.

"""

for key in sorted(special3_opcodes.keys()):
    key_c_name = make_legal_c(key) + '_major';
    default_signature = '(CPUState *env, DisasContext *ctx)'
    major_opc_gen_f.write('static void gen_' + key_c_name + default_signature+ '\n{\n')
    lower_mask = "0xfc0007ff"; # "0b111111" + 15*'0' + '11111' + '111111';
    major_opc_gen_f.write('    int opc = ctx->opcode & ' + lower_mask + ';\n')
    major_opc_gen_f.write('    switch (opc) {\n');
    for key2 in sorted(special3_opcodes[key].keys()):
        key2_c_name = make_legal_c(key2);
        major_opc_gen_f.write('    case ' + opcode_enum(key2_c_name) + ':\n');
        major_opc_gen_f.write('        gen_' + key2_c_name + '(env, ctx);\n')
        major_opc_gen_f.write('        break;\n');
    major_opc_gen_f.write('    }\n');
    major_opc_gen_f.write('}\n\n');

"""
create all the functions for each opcode.
"""

opc_gen_f.write(
"""static void gen_unary_rd_rt_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv), uint8_t rd, uint8_t rt)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rt);
    (*func)(t1, t0);
    gen_store_gpr(t1, rd);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
}

static void gen_binary_rs_rt_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv), uint8_t rs, uint8_t rt)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rs);
    gen_load_gpr(t1, rt);
    (*func)(t0, t1);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
}

static void gen_binary_rs_rd_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv), uint8_t rs, uint8_t rd)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t1, rs);
    (*func)(t0, t1);
    gen_store_gpr(t0, rd);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
}

static void gen_binary_immed_rd_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv_i32), uint16_t immediate, uint8_t rd)
{
    TCGv t0 = tcg_temp_new();
    TCGv_i32 t1 = tcg_const_i32(immediate);

    check_dsp(env, ctx, rev);

    (*func)(t0, t1);
    gen_store_gpr(t0, rd);

    tcg_temp_free(t0);
    tcg_temp_free_i32(t1);
}

static void gen_binary_rs_rt_ret_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv, TCGv), uint8_t rs, uint8_t rt)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rs);
    gen_load_gpr(t1, rt);
    (*func)(t2, t0, t1);
    gen_store_gpr(t2, rt);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
}

static void gen_binary_rs_rd_rt_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv, TCGv), uint8_t rs, uint8_t rd,
    uint8_t rt)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rs);
    gen_load_gpr(t1, rt);
    (*func)(t2, t0, t1);
    gen_store_gpr(t2, rd);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
}

static void gen_ternary_rs_rt_sa_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv, TCGv, TCGv_i32), uint8_t rs, uint8_t rt,
    uint8_t sa)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();
    TCGv_i32 t2 = tcg_const_i32(sa);
    TCGv t3 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rs);
    gen_load_gpr(t1, rt);
    (*func)(t3, t0, t1, t2);
    gen_store_gpr(t3, rt);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
    tcg_temp_free_i32(t2);
    tcg_temp_free(t3);
}

static void gen_binary_rt_rd_sa_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv, TCGv_i32), uint8_t rt, uint8_t rd,
    uint8_t sa)
{
    TCGv t0 = tcg_temp_new();
    TCGv_i32 t1 = tcg_const_i32(sa);
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rt);
    (*func)(t2, t0, t1);
    gen_store_gpr(t2, rd);

    tcg_temp_free(t0);
    tcg_temp_free_i32(t1);
    tcg_temp_free(t2);
}

static void gen_ternary_rs_rt_bp_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv, TCGv, TCGv, TCGv_i32), uint8_t rs, uint8_t rt,
    uint8_t bp)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();
    TCGv_i32 t2 = tcg_const_i32(bp);
    TCGv t3 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, rs);
    gen_load_gpr(t1, rt);
    (*func)(t3, t0, t1, t2);
    gen_store_gpr(t3, rt);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
    tcg_temp_free_i32(t2);
    tcg_temp_free(t3);
}

static void gen_ternary_rs_rt_ac_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv_i64, TCGv_i64, TCGv, TCGv), uint8_t rs,
    uint8_t rt, uint8_t ac)
{
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();
    TCGv_i64 t3 = tcg_temp_new_i64();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t1, rs);
    gen_load_gpr(t2, rt);
    gen_load_HI_LO(t0, ac);
    (*func)(t3, t0, t1, t2);
    gen_store_HI_LO(t3, ac);

    tcg_temp_free_i64(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
    tcg_temp_free_i64(t3);
}

static void gen_binary_rs_ac_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv_i64, TCGv_i64, TCGv), uint8_t rs, uint8_t ac)
{
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv t1 = tcg_temp_new();
    TCGv_i64 t2 = tcg_temp_new_i64();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t1, rs);
    gen_load_HI_LO(t0, ac);
    (*func)(t2, t0, t1);
    gen_store_HI_LO(t2, ac);

    tcg_temp_free_i64(t0);
    tcg_temp_free(t1);
    tcg_temp_free_i64(t2);
}

static void gen_ternary_rs_rt_ac2_wrapper(CPUState *env, DisasContext *ctx,
    int rev, void (*func)(TCGv_i64, TCGv_i32, TCGv_i64, TCGv, TCGv),
    uint8_t rs, uint8_t rt, uint8_t ac)
{
    TCGv_i32 t00 = tcg_const_i32(ac);
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();
    TCGv_i64 t3 = tcg_temp_new_i64();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t1, rs);
    gen_load_gpr(t2, rt);
    gen_load_HI_LO(t0, ac);
    (*func)(t3, t00, t0, t1, t2);
    gen_store_HI_LO(t3, ac);

    tcg_temp_free_i32(t00);
    tcg_temp_free_i64(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
    tcg_temp_free_i64(t3);
}

static void gen_extp_wrapper(CPUState *env, DisasContext *ctx, int rev,
    void (*func)(TCGv, TCGv_i64, TCGv_i32), uint8_t rt, uint8_t ac,
    uint8_t field)
{
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv_i32 t1 = tcg_const_i32(field);
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_HI_LO(t0, ac);
    (*func)(t2, t0, t1);
    gen_store_gpr(t2, rt);

    tcg_temp_free_i64(t0);
    tcg_temp_free_i32(t1);
    tcg_temp_free(t2);
}

static void gen_extpv_wrapper(CPUState *env, DisasContext *ctx, int rev,
    void (*func)(TCGv, TCGv_i64, TCGv), uint8_t rt, uint8_t ac, uint8_t rs)
{
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_HI_LO(t0, ac);
    gen_load_gpr(t1, rs);
    (*func)(t2, t0, t1);
    gen_store_gpr(t2, rt);

    tcg_temp_free_i64(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
}

static void gen_binary_lx_wrapper(CPUState *env, DisasContext *ctx, int rev,
    void (*func)(TCGv, TCGv, int), uint8_t rd, uint8_t index, uint8_t base,
    int mem_idx)
{
    TCGv t0 = tcg_temp_new();
    TCGv t1 = tcg_temp_new();
    TCGv t2 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_gpr(t0, base);
    gen_load_gpr(t1, index);
    tcg_gen_add_tl(t2, t0, t1);
    (*func)(t2, t2, mem_idx);
    gen_store_gpr(t2, rd);

    tcg_temp_free(t0);
    tcg_temp_free(t1);
    tcg_temp_free(t2);
}

static void gen_shilo_wrapper(CPUState *env, DisasContext *ctx, int rev,
    void (*func)(TCGv_i64, TCGv_i64, TCGv_i32), uint8_t ac, uint8_t shift)
{
    TCGv_i64 t0 = tcg_temp_new_i64();
    TCGv_i32 t1 = tcg_const_i32(shift);
    TCGv_i64 t2 = tcg_temp_new_i64();

    check_dsp(env, ctx, rev);

    gen_load_HI_LO(t0, ac);
    (*func)(t2, t0, t1);
    gen_store_HI_LO(t2, ac);

    tcg_temp_free_i64(t0);
    tcg_temp_free_i32(t1);
    tcg_temp_free_i64(t2);
}

static void gen_mthlip_wrapper(CPUState *env, DisasContext *ctx, int rev,
    uint8_t rs, uint8_t ac)
{
    TCGv t0 = tcg_temp_new();

    check_dsp(env, ctx, rev);

    gen_load_LO(t0, ac);
    gen_store_HI(t0, ac);
    gen_load_gpr(t0, rs);
    gen_store_LO(t0, ac);
    gen_helper_incPosBy32();

    tcg_temp_free(t0);
}

""")

for key in sorted(special3_opcodes.keys()):
    key_c_name = make_legal_c(key) + '_major';
    default_signature = '(CPUState *env, DisasContext *ctx)'
    for key2 in sorted(special3_opcodes[key].keys()):
        key2_c_name = make_legal_c(key2);
        opc_gen_f.write('static void gen_' + key2_c_name + default_signature +
               '\n{\n')
        opc_gen_f.write(find_unpack(key2));
        if key2 in instructions:
            opc_gen_f.write(instructions[key2])
        num_opcodes = num_opcodes + 1;
        opc_gen_f.write('}\n\n');

print "num opcodes = ", num_opcodes




