DEF_HELPER_5(msa_add_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_adds_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_adds_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_adds_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_addv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_addvi_df, void, env, i32, i32, i32, s64)
DEF_HELPER_4(msa_and_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_andi_b, void, env, i32, i32, i32)
DEF_HELPER_5(msa_asub_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_asub_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ave_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ave_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_aver_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_aver_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_bclr_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_bclri_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_binsl_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_binsli_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_binsr_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_binsri_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_bmnz_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_bmnzi_b, void, env, i32, i32, i32)
DEF_HELPER_4(msa_bmz_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_bmzi_b, void, env, i32, i32, i32)
DEF_HELPER_5(msa_bneg_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_bnegi_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_bsel_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_bseli_b, void, env, i32, i32, i32)
DEF_HELPER_5(msa_bset_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_bseti_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ceq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ceqi_df, void, env, i32, i32, i32, s64)
DEF_HELPER_2(cfcmsa, tl, env, i32)
DEF_HELPER_5(msa_cle_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_cle_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_clei_s_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_clei_u_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_clt_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_clt_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_clti_s_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_clti_u_df, void, env, i32, i32, i32, s64)
DEF_HELPER_3(ctcmsa, void, env, tl, i32)
DEF_HELPER_5(msa_div_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_div_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dotp_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dotp_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dpadd_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dpadd_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dpsub_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_dpsub_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fadd_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcaf_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fceq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_fclass_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_fcle_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fclt_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcne_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcor_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcueq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcule_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcult_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcun_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fcune_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fdiv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fexdo_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fexp2_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_fexupl_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_fexupr_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ffint_s_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ffint_u_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ffql_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ffqr_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_fill_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_flog2_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_fmadd_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmax_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmax_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmin_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmin_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmsub_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fmul_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_frcp_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_frint_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_frsqrt_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_fsaf_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fseq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsle_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fslt_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsne_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsor_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_fsqrt_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_fsub_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsueq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsule_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsult_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsun_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_fsune_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_ftint_s_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ftint_u_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_ftq_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_ftrunc_s_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ftrunc_u_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_hadd_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_hadd_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_hsub_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_hsub_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ilvev_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ilvl_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ilvod_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_ilvr_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_insert_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_insve_df, void, env, i32, i32, tl, i32)
DEF_HELPER_5(msa_ld_df, void, env, i32, i32, i32, s64)
DEF_HELPER_4(msa_ldi_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_madd_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_maddr_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_maddv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_max_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_max_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_max_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_maxi_s_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_maxi_u_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_min_a_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_min_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_min_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_mini_s_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_mini_u_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_mod_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_mod_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_3(msa_move_v, void, env, i32, i32)
DEF_HELPER_5(msa_msub_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_msubr_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_msubv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_mul_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_mulr_q_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_mulv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_nloc_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_nlzc_df, void, env, i32, i32, i32)
DEF_HELPER_4(msa_nor_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_nori_b, void, env, i32, i32, i32)
DEF_HELPER_4(msa_or_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_ori_b, void, env, i32, i32, i32)
DEF_HELPER_5(msa_pckev_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_pckod_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_pcnt_df, void, env, i32, i32, i32)
DEF_HELPER_5(msa_sat_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_sat_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_shf_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_sld_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_sldi_df, void, env, i32, i32, tl, i32)
DEF_HELPER_5(msa_sll_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_slli_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_splat_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_splati_df, void, env, i32, i32, tl, i32)
DEF_HELPER_5(msa_sra_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srai_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srar_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srari_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srl_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srli_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srlr_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_srlri_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_st_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_subs_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_subs_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_subsus_u_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_subsuu_s_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_subv_df, void, env, i32, i32, i32, i32)
DEF_HELPER_5(msa_subvi_df, void, env, i32, i32, i32, s64)
DEF_HELPER_5(msa_vshf_df, void, env, i32, i32, i32, i32)
DEF_HELPER_4(msa_xor_v, void, env, i32, i32, i32)
DEF_HELPER_4(msa_xori_b, void, env, i32, i32, i32)
