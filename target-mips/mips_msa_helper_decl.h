DEF_HELPER_3(add_a_df, s64, s64, s64, i32)
DEF_HELPER_3(adds_a_df, s64, s64, s64, i32)
DEF_HELPER_3(adds_s_df, s64, s64, s64, i32)
DEF_HELPER_3(adds_u_df, i64, i64, i64, i32)
DEF_HELPER_3(addv_df, s64, s64, s64, i32)
DEF_HELPER_4(and_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(andi_b, void, ptr, ptr, i32, i32)
DEF_HELPER_3(asub_s_df, s64, s64, s64, i32)
DEF_HELPER_3(asub_u_df, i64, i64, i64, i32)
DEF_HELPER_3(ave_s_df, s64, s64, s64, i32)
DEF_HELPER_3(ave_u_df, i64, i64, i64, i32)
DEF_HELPER_3(bclr_df, s64, s64, s64, i32)
DEF_HELPER_3(bclri_df, s64, s64, i32, i32)
DEF_HELPER_4(binsl_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(binsli_df, s64, s64, s64, i32, i32)
DEF_HELPER_4(binsr_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(binsri_df, s64, s64, s64, i32, i32)
DEF_HELPER_4(bmnz_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(bmnzi_b, void, ptr, ptr, i32, i32)
DEF_HELPER_4(bmz_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(bmzi_b, void, ptr, ptr, i32, i32)
DEF_HELPER_3(bnz_df, i32, ptr, i32, i32)
DEF_HELPER_2(bnz_v, i32, ptr, i32)
DEF_HELPER_4(bsel_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(bseli_b, void, ptr, ptr, i32, i32)
DEF_HELPER_3(bset_df, s64, s64, s64, i32)
DEF_HELPER_3(bseti_df, s64, s64, i32, i32)
DEF_HELPER_3(bz_df, i32, ptr, i32, i32)
DEF_HELPER_2(bz_v, i32, ptr, i32)
DEF_HELPER_3(ceq_df, s64, s64, s64, i32)
DEF_HELPER_1(cfcmsa, tl, i32)
DEF_HELPER_3(cle_s_df, s64, s64, s64, i32)
DEF_HELPER_3(cle_u_df, s64, s64, s64, i32)
DEF_HELPER_3(clt_s_df, s64, s64, s64, i32)
DEF_HELPER_3(clt_u_df, s64, s64, s64, i32)
DEF_HELPER_2(ctcmsa, void, tl, i32)
DEF_HELPER_3(dotp_s_df, s64, s64, s64, i32)
DEF_HELPER_3(dotp_u_df, s64, s64, s64, i32)
DEF_HELPER_3(dotpi_s_df, s64, s64, s64, i32)
DEF_HELPER_3(dotpi_u_df, s64, s64, s64, i32)
DEF_HELPER_4(dpadd_s_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpadd_u_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpaddi_s_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpaddi_u_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpsub_s_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpsub_u_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpsubi_s_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(dpsubi_u_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(fadd_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_3(fceq_df, s64, s64, s64, i32)
DEF_HELPER_3(fcequ_df, s64, s64, s64, i32)
DEF_HELPER_2(fclass_df, s64, s64, i32)
DEF_HELPER_3(fcle_df, s64, s64, s64, i32)
DEF_HELPER_3(fcleu_df, s64, s64, s64, i32)
DEF_HELPER_3(fclt_df, s64, s64, s64, i32)
DEF_HELPER_3(fcltu_df, s64, s64, s64, i32)
DEF_HELPER_3(fcun_df, s64, s64, s64, i32)
DEF_HELPER_4(fdiv_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(fexdo_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(fexp2_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(fexup_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_2(ffint_s_df, s64, s64, i32)
DEF_HELPER_2(ffint_u_df, s64, s64, i32)
DEF_HELPER_4(ffq_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_3(flog2_df, void, ptr, ptr, i32)
DEF_HELPER_4(fmadd_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_3(fmax_a_df, s64, s64, s64, i32)
DEF_HELPER_3(fmax_df, s64, s64, s64, i32)
DEF_HELPER_3(fmin_a_df, s64, s64, s64, i32)
DEF_HELPER_3(fmin_df, s64, s64, s64, i32)
DEF_HELPER_4(fmsub_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(fmul_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(frem_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_2(frint_df, s64, s64, i32)
DEF_HELPER_3(fsqrt_df, void, ptr, ptr, i32)
DEF_HELPER_4(fsub_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_2(ftint_s_df, s64, s64, i32)
DEF_HELPER_2(ftint_u_df, s64, s64, i32)
DEF_HELPER_4(ftq_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ilvev_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ilvl_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ilvod_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ilvr_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ld_v, void, ptr, i32, i32, i32)
DEF_HELPER_4(ldi_df, void, ptr, i32, i32, i32)
DEF_HELPER_4(ldx_v, void, ptr, tl, tl, i32)
DEF_HELPER_4(madd_q_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(maddr_q_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(maddv_df, s64, s64, s64, s64, i32)
DEF_HELPER_3(max_a_df, s64, s64, s64, i32)
DEF_HELPER_3(max_s_df, s64, s64, s64, i32)
DEF_HELPER_3(max_u_df, s64, s64, s64, i32)
DEF_HELPER_3(min_a_df, s64, s64, s64, i32)
DEF_HELPER_3(min_s_df, s64, s64, s64, i32)
DEF_HELPER_3(min_u_df, s64, s64, s64, i32)
DEF_HELPER_4(move_df, void, ptr, ptr, i32, i32)
DEF_HELPER_3(move_v, void, ptr, ptr, i32)
DEF_HELPER_4(msub_q_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(msubr_q_df, s64, s64, s64, s64, i32)
DEF_HELPER_4(msubv_df, s64, s64, s64, s64, i32)
DEF_HELPER_3(mul_q_df, s64, s64, s64, i32)
DEF_HELPER_3(mulr_q_df, s64, s64, s64, i32)
DEF_HELPER_3(mulv_df, s64, s64, s64, i32)
DEF_HELPER_2(nloc_df, s64, s64, i32)
DEF_HELPER_2(nlzc_df, s64, s64, i32)
DEF_HELPER_4(nor_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(nori_b, void, ptr, ptr, i32, i32)
DEF_HELPER_4(or_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(ori_b, void, ptr, ptr, i32, i32)
DEF_HELPER_4(pckev_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(pckev_q, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(pckod_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(pckod_q, void, ptr, ptr, ptr, i32)
DEF_HELPER_2(pcnt_df, s64, s64, i32)
DEF_HELPER_3(sat_s_df, s64, s64, i32, i32)
DEF_HELPER_3(sat_u_df, s64, s64, i32, i32)
DEF_HELPER_4(shf_b, void, ptr, ptr, i32, i32)
DEF_HELPER_4(shf_d, void, ptr, ptr, i32, i32)
DEF_HELPER_4(shf_h, void, ptr, ptr, i32, i32)
DEF_HELPER_4(shf_w, void, ptr, ptr, i32, i32)
DEF_HELPER_3(shl_df, s64, s64, s64, i32)
DEF_HELPER_3(shli_df, s64, s64, i32, i32)
DEF_HELPER_4(sld_df, void, ptr, ptr, i32, i32)
DEF_HELPER_3(sra_df, s64, s64, s64, i32)
DEF_HELPER_3(srai_df, s64, s64, i32, i32)
DEF_HELPER_3(srl_df, s64, s64, s64, i32)
DEF_HELPER_3(srli_df, s64, s64, i32, i32)
DEF_HELPER_4(st_v, void, ptr, i32, i32, i32)
DEF_HELPER_4(stx_v, void, ptr, tl, tl, i32)
DEF_HELPER_3(subs_s_df, s64, s64, s64, i32)
DEF_HELPER_3(subs_u_df, s64, s64, s64, i32)
DEF_HELPER_3(subss_u_df, s64, s64, s64, i32)
DEF_HELPER_3(subv_df, s64, s64, s64, i32)
DEF_HELPER_4(vshf_df, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(xor_v, void, ptr, ptr, ptr, i32)
DEF_HELPER_4(xori_b, void, ptr, ptr, i32, i32)
