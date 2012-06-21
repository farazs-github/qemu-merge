/* MSA Opcodes */
enum {
    OPC_ADDV_df     = 0x78000010 | OPC_MSA,
    OPC_ADDVI_df    = 0x78000000 | OPC_MSA,
    OPC_ADD_A_df    = 0x78800010 | OPC_MSA,
    OPC_ADDI_A_df   = 0x78800000 | OPC_MSA,
    OPC_ADDS_A_df   = 0x79000010 | OPC_MSA,
    OPC_ADDSI_A_df  = 0x79000000 | OPC_MSA,
    OPC_ADDS_S_df   = 0x79800010 | OPC_MSA,
    OPC_ADDSI_S_df  = 0x79800000 | OPC_MSA,
    OPC_ADDS_U_df   = 0x7a000010 | OPC_MSA,
    OPC_ADDSI_U_df  = 0x7a000000 | OPC_MSA,
    OPC_SUBV_df     = 0x7a800010 | OPC_MSA,
    OPC_SUBVI_df    = 0x7a800000 | OPC_MSA,
    OPC_ASUB_S_df   = 0x7b000010 | OPC_MSA,
    OPC_ASUBI_S_df  = 0x7b000000 | OPC_MSA,
    OPC_ASUB_U_df   = 0x7b800010 | OPC_MSA,
    OPC_ASUBI_U_df  = 0x7b800000 | OPC_MSA,
    OPC_SUBS_S_df   = 0x78000011 | OPC_MSA,
    OPC_SUBSI_S_df  = 0x78000001 | OPC_MSA,
    OPC_SUBS_U_df   = 0x78800011 | OPC_MSA,
    OPC_SUBSI_U_df  = 0x78800001 | OPC_MSA,
    OPC_SUBSS_U_df  = 0x79000011 | OPC_MSA,
    OPC_SUBSSI_U_df = 0x79000001 | OPC_MSA,
    OPC_MAX_A_df    = 0x79800011 | OPC_MSA,
    OPC_MAXI_A_df   = 0x79800001 | OPC_MSA,
    OPC_MAX_S_df    = 0x7a000011 | OPC_MSA,
    OPC_MAXI_S_df   = 0x7a000001 | OPC_MSA,
    OPC_MAX_U_df    = 0x7a800011 | OPC_MSA,
    OPC_MAXI_U_df   = 0x7a800001 | OPC_MSA,
    OPC_MIN_A_df    = 0x7b000011 | OPC_MSA,
    OPC_MINI_A_df   = 0x7b000001 | OPC_MSA,
    OPC_MIN_S_df    = 0x7b800011 | OPC_MSA,
    OPC_MINI_S_df   = 0x7b800001 | OPC_MSA,
    OPC_MIN_U_df    = 0x78000012 | OPC_MSA,
    OPC_MINI_U_df   = 0x78000002 | OPC_MSA,
    OPC_AVE_S_df    = 0x78800012 | OPC_MSA,
    OPC_AVEI_S_df   = 0x78800002 | OPC_MSA,
    OPC_AVE_U_df    = 0x79000012 | OPC_MSA,
    OPC_AVEI_U_df   = 0x79000002 | OPC_MSA,
    OPC_SAT_S_df    = 0x7800001e | OPC_MSA,
    OPC_SAT_U_df    = 0x7880001e | OPC_MSA,
    OPC_MULV_df     = 0x79800012 | OPC_MSA,
    OPC_MULVI_df    = 0x79800002 | OPC_MSA,
    OPC_MADDV_df    = 0x7a000012 | OPC_MSA,
    OPC_MADDVI_df   = 0x7a000002 | OPC_MSA,
    OPC_MSUBV_df    = 0x7a800012 | OPC_MSA,
    OPC_MSUBVI_df   = 0x7a800002 | OPC_MSA,
    OPC_DOTP_S_df   = 0x7b000012 | OPC_MSA,
    OPC_DOTPI_S_df  = 0x7b000002 | OPC_MSA,
    OPC_DOTP_U_df   = 0x7b800012 | OPC_MSA,
    OPC_DOTPI_U_df  = 0x7b800002 | OPC_MSA,
    OPC_DPADD_S_df  = 0x78000013 | OPC_MSA,
    OPC_DPADDI_S_df = 0x78000003 | OPC_MSA,
    OPC_DPADD_U_df  = 0x78800013 | OPC_MSA,
    OPC_DPADDI_U_df = 0x78800003 | OPC_MSA,
    OPC_DPSUB_S_df  = 0x79000013 | OPC_MSA,
    OPC_DPSUBI_S_df = 0x79000003 | OPC_MSA,
    OPC_DPSUB_U_df  = 0x79800013 | OPC_MSA,
    OPC_DPSUBI_U_df = 0x79800003 | OPC_MSA,
    OPC_MUL_Q_df    = 0x7800001b | OPC_MSA,
    OPC_MULR_Q_df   = 0x7840001b | OPC_MSA,
    OPC_MADD_Q_df   = 0x7880001b | OPC_MSA,
    OPC_MADDR_Q_df  = 0x78c0001b | OPC_MSA,
    OPC_MSUB_Q_df   = 0x7900001b | OPC_MSA,
    OPC_MSUBR_Q_df  = 0x7940001b | OPC_MSA,
    OPC_AND_V       = 0x7800000f | OPC_MSA,
    OPC_ANDI_B      = 0x7800000a | OPC_MSA,
    OPC_OR_V        = 0x7820000f | OPC_MSA,
    OPC_ORI_B       = 0x7900000a | OPC_MSA,
    OPC_NOR_V       = 0x7840000f | OPC_MSA,
    OPC_NORI_B      = 0x7a00000a | OPC_MSA,
    OPC_XOR_V       = 0x7860000f | OPC_MSA,
    OPC_XORI_B      = 0x7b00000a | OPC_MSA,
    OPC_SHL_df      = 0x7a000013 | OPC_MSA,
    OPC_SHLI_df     = 0x7900001e | OPC_MSA,
    OPC_SRA_df      = 0x7a800013 | OPC_MSA,
    OPC_SRAI_df     = 0x7980001e | OPC_MSA,
    OPC_SRL_df      = 0x7b000013 | OPC_MSA,
    OPC_SRLI_df     = 0x7a00001e | OPC_MSA,
    OPC_PCNT_df     = 0x7b84000f | OPC_MSA,
    OPC_NLOC_df     = 0x7b88000f | OPC_MSA,
    OPC_NLZC_df     = 0x7b8c000f | OPC_MSA,
    OPC_BINSL_df    = 0x7b800013 | OPC_MSA,
    OPC_BINSLI_df   = 0x7a80001e | OPC_MSA,
    OPC_BINSR_df    = 0x78000014 | OPC_MSA,
    OPC_BINSRI_df   = 0x7b00001e | OPC_MSA,
    OPC_BCLR_df     = 0x78800014 | OPC_MSA,
    OPC_BCLRI_df    = 0x7b80001e | OPC_MSA,
    OPC_BSET_df     = 0x79000014 | OPC_MSA,
    OPC_BSETI_df    = 0x7800001f | OPC_MSA,
    OPC_BNEG_df     = 0x79800014 | OPC_MSA,
    OPC_BNEGI_df    = 0x7880001f | OPC_MSA,
    OPC_BMNZ_V      = 0x7880000f | OPC_MSA,
    OPC_BMNZI_B     = 0x7800000b | OPC_MSA,
    OPC_BMZ_V       = 0x78a0000f | OPC_MSA,
    OPC_BMZI_B      = 0x7900000b | OPC_MSA,
    OPC_BSEL_V      = 0x78c0000f | OPC_MSA,
    OPC_BSELI_B     = 0x7a00000b | OPC_MSA,
    OPC_CEQ_df      = 0x7a000014 | OPC_MSA,
    OPC_CEQI_df     = 0x7a000003 | OPC_MSA,
    OPC_CLT_S_df    = 0x7a800014 | OPC_MSA,
    OPC_CLTI_S_df   = 0x7a800003 | OPC_MSA,
    OPC_CLE_S_df    = 0x7b000014 | OPC_MSA,
    OPC_CLEI_S_df   = 0x7b000003 | OPC_MSA,
    OPC_CLT_U_df    = 0x7b800014 | OPC_MSA,
    OPC_CLTI_U_df   = 0x7b800003 | OPC_MSA,
    OPC_CLE_U_df    = 0x78000015 | OPC_MSA,
    OPC_CLEI_U_df   = 0x78000004 | OPC_MSA,
    OPC_BNZ_df      = 0x7800000e | OPC_MSA,
    OPC_BZ_df       = 0x7880000e | OPC_MSA,
    OPC_BNZ_V       = 0x78e0000f | OPC_MSA,
    OPC_BZ_V        = 0x7900000f | OPC_MSA,
    OPC_SLD_df      = 0x7800001a | OPC_MSA,
    OPC_SHF_B       = 0x7b00000b | OPC_MSA,
    OPC_SHF_H       = 0x7800000c | OPC_MSA,
    OPC_SHF_W       = 0x7900000c | OPC_MSA,
    OPC_SHF_D       = 0x7a00000c | OPC_MSA,
    OPC_VSHF_df     = 0x78800015 | OPC_MSA,
    OPC_PCKEV_df    = 0x79000015 | OPC_MSA,
    OPC_PCKOD_df    = 0x79800015 | OPC_MSA,
    OPC_ILVL_df     = 0x7a000015 | OPC_MSA,
    OPC_ILVR_df     = 0x7a800015 | OPC_MSA,
    OPC_ILVEV_df    = 0x7b000015 | OPC_MSA,
    OPC_ILVOD_df    = 0x7b800015 | OPC_MSA,
    OPC_MOVER_df    = 0x78000016 | OPC_MSA,
    OPC_MVTGR_S_df  = 0x78800016 | OPC_MSA,
    OPC_MVTGR_U_df  = 0x79000016 | OPC_MSA,
    OPC_SLDR_df     = 0x79800016 | OPC_MSA,
    OPC_MOVE_V      = 0x787e001a | OPC_MSA,
    OPC_MOVE_df     = 0x7840001a | OPC_MSA,
    OPC_CTCMSA      = 0x78be001a | OPC_MSA,
    OPC_MVTG_S_df   = 0x7880001a | OPC_MSA,
    OPC_CFCMSA      = 0x78fe001a | OPC_MSA,
    OPC_MVFG_df     = 0x7b80000f | OPC_MSA,
    OPC_MVTG_U_df   = 0x78c0001a | OPC_MSA,
    OPC_MVFGE_df    = 0x7900001a | OPC_MSA,
    OPC_MVFGER_df   = 0x7a000016 | OPC_MSA,
    OPC_LD_V        = 0x7960000f | OPC_MSA,
    OPC_LDI_df      = 0x7900000e | OPC_MSA,
    OPC_LDX_V       = 0x7980000f | OPC_MSA,
    OPC_ST_V        = 0x79a0000f | OPC_MSA,
    OPC_STX_V       = 0x79c0000f | OPC_MSA,
    OPC_FADD_df     = 0x7980001b | OPC_MSA,
    OPC_FSUB_df     = 0x79c0001b | OPC_MSA,
    OPC_FMUL_df     = 0x7a00001b | OPC_MSA,
    OPC_FDIV_df     = 0x7a40001b | OPC_MSA,
    OPC_FREM_df     = 0x7a80001b | OPC_MSA,
    OPC_FSQRT_df    = 0x7bc0000f | OPC_MSA,
    OPC_FMADD_df    = 0x7ac0001b | OPC_MSA,
    OPC_FMSUB_df    = 0x7b00001b | OPC_MSA,
    OPC_FRINT_df    = 0x7bc2000f | OPC_MSA,
    OPC_FLOG2_df    = 0x7bc4000f | OPC_MSA,
    OPC_FEXP2_df    = 0x7b40001b | OPC_MSA,
    OPC_FMAX_df     = 0x7b80001b | OPC_MSA,
    OPC_FMAX_A_df   = 0x7bc0001b | OPC_MSA,
    OPC_FMIN_df     = 0x7800001c | OPC_MSA,
    OPC_FMIN_A_df   = 0x7840001c | OPC_MSA,
    OPC_FCEQ_df     = 0x7880001c | OPC_MSA,
    OPC_FCLT_df     = 0x78c0001c | OPC_MSA,
    OPC_FCLE_df     = 0x7900001c | OPC_MSA,
    OPC_FCUN_df     = 0x7940001c | OPC_MSA,
    OPC_FCEQU_df    = 0x7980001c | OPC_MSA,
    OPC_FCLTU_df    = 0x79c0001c | OPC_MSA,
    OPC_FCLEU_df    = 0x7a00001c | OPC_MSA,
    OPC_FCLASS_df   = 0x7bc6000f | OPC_MSA,
    OPC_FTINT_S_df  = 0x7bc8000f | OPC_MSA,
    OPC_FFINT_S_df  = 0x7bca000f | OPC_MSA,
    OPC_FTINT_U_df  = 0x7bcc000f | OPC_MSA,
    OPC_FFINT_U_df  = 0x7bce000f | OPC_MSA,
    OPC_FTQ_df      = 0x7a40001c | OPC_MSA,
    OPC_FFQ_df      = 0x7a80001c | OPC_MSA,
    OPC_FEXDO_df    = 0x7ac0001c | OPC_MSA,
    OPC_FEXUP_df    = 0x7b00001c | OPC_MSA,
};
