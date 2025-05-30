/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_addsi3_compareV_reg (TARGET_32BIT)
#define HAVE_subvsi3_intmin (TARGET_32BIT)
#define HAVE_addsi3_compareV_imm (TARGET_32BIT \
   && INTVAL (operands[2]) == ARM_SIGN_EXTEND (INTVAL (operands[2])))
#define HAVE_addsi3_compareV_imm_nosum (TARGET_32BIT \
   && INTVAL (operands[1]) == ARM_SIGN_EXTEND (INTVAL (operands[1])))
#define HAVE_addsi3_compare0 (TARGET_ARM)
#define HAVE_cmpsi2_addneg (TARGET_32BIT \
   && (INTVAL (operands[2]) \
       == trunc_int_for_mode (-INTVAL (operands[3]), SImode)))
#define HAVE_addsi3_compare_op1 (TARGET_32BIT)
#define HAVE_addsi3_carryin (TARGET_32BIT)
#define HAVE_add0si3_carryin (TARGET_32BIT)
#define HAVE_subsi3_compare1 (TARGET_32BIT)
#define HAVE_subvsi3 (TARGET_32BIT)
#define HAVE_subvsi3_imm1 (TARGET_32BIT)
#define HAVE_subsi3_carryin (TARGET_32BIT)
#define HAVE_rsbsi_carryin_reg (TARGET_ARM)
#define HAVE_add_not_shift_cin (TARGET_ARM)
#define HAVE_cmpsi3_carryin_CC_NVout (TARGET_32BIT)
#define HAVE_cmpsi3_carryin_CC_Bout (TARGET_32BIT)
#define HAVE_cmpsi3_imm_carryin_CC_NVout (TARGET_32BIT)
#define HAVE_cmpsi3_imm_carryin_CC_Bout (TARGET_32BIT)
#define HAVE_cmpsi3_0_carryin_CC_NVout (TARGET_32BIT)
#define HAVE_cmpsi3_0_carryin_CC_Bout (TARGET_32BIT)
#define HAVE_subsi3_compare0 (TARGET_32BIT)
#define HAVE_subsi3_compare (TARGET_32BIT)
#define HAVE_rsb_imm_compare (TARGET_32BIT && ~UINTVAL (operands[1]) == UINTVAL (operands[3]))
#define HAVE_rsb_imm_compare_scratch (TARGET_32BIT)
#define HAVE_rscsi3_CC_NVout_scratch (TARGET_ARM)
#define HAVE_rscsi3_CC_Bout_scratch (TARGET_ARM)
#define HAVE_usubvsi3_borrow (TARGET_32BIT)
#define HAVE_usubvsi3_borrow_imm (TARGET_32BIT \
   && (UINTVAL (operands[2]) & 0xffffffff) == UINTVAL (operands[3]))
#define HAVE_subvsi3_borrow (TARGET_32BIT)
#define HAVE_subvsi3_borrow_imm (TARGET_32BIT \
   && INTVAL (operands[2]) == ARM_SIGN_EXTEND (INTVAL (operands[2])))
#define HAVE_smull (TARGET_32BIT)
#define HAVE_umull (TARGET_32BIT)
#define HAVE_smlal (TARGET_32BIT)
#define HAVE_umlal (TARGET_32BIT)
#define HAVE_mulhisi3 (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlabb_setq (TARGET_DSP_MULTIPLY)
#define HAVE_maddhisi4tb (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_smlatb_setq (TARGET_DSP_MULTIPLY)
#define HAVE_maddhisi4tt (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_smlatt_setq (TARGET_DSP_MULTIPLY)
#define HAVE_maddhidi4 (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlawb_insn (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_smlawb_setq_insn (TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
#define HAVE_arm_smlawt_insn (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_smlawt_setq_insn (TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
#define HAVE_insv_zero (arm_arch_thumb2)
#define HAVE_insv_t2 (arm_arch_thumb2)
#define HAVE_andsi_notsi_si (TARGET_32BIT)
#define HAVE_andsi_not_shiftsi_si (TARGET_32BIT)
#define HAVE_andsi_not_shiftsi_si_scc_no_reuse (TARGET_32BIT)
#define HAVE_andsi_not_shiftsi_si_scc (TARGET_32BIT)
#define HAVE_arm_qadd_insn (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_qadd_setq_insn (TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
#define HAVE_arm_qsub_insn (TARGET_DSP_MULTIPLY && !ARM_Q_BIT_READ)
#define HAVE_arm_qsub_setq_insn (TARGET_DSP_MULTIPLY && ARM_Q_BIT_READ)
#define HAVE_arm_get_apsr (TARGET_ARM_QBIT)
#define HAVE_arm_set_apsr (TARGET_ARM_QBIT)
#define HAVE_satsi_smin (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ \
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
#define HAVE_satsi_smin_setq (TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ \
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
#define HAVE_satsi_smax (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ \
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
#define HAVE_satsi_smax_setq (TARGET_32BIT && arm_arch6 && ARM_Q_BIT_READ \
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
#define HAVE_arm_cx1si (TARGET_CDE)
#define HAVE_arm_cx1di (TARGET_CDE)
#define HAVE_arm_cx1asi (TARGET_CDE)
#define HAVE_arm_cx1adi (TARGET_CDE)
#define HAVE_arm_cx2si (TARGET_CDE)
#define HAVE_arm_cx2di (TARGET_CDE)
#define HAVE_arm_cx2asi (TARGET_CDE)
#define HAVE_arm_cx2adi (TARGET_CDE)
#define HAVE_arm_cx3si (TARGET_CDE)
#define HAVE_arm_cx3di (TARGET_CDE)
#define HAVE_arm_cx3asi (TARGET_CDE)
#define HAVE_arm_cx3adi (TARGET_CDE)
#define HAVE_unaligned_loaddi (TARGET_32BIT && TARGET_LDRD)
#define HAVE_unaligned_loadsi (unaligned_access)
#define HAVE_unaligned_loadhis (unaligned_access && TARGET_32BIT)
#define HAVE_unaligned_loadhiu (unaligned_access)
#define HAVE_unaligned_storedi (TARGET_32BIT && TARGET_LDRD)
#define HAVE_unaligned_storesi (unaligned_access)
#define HAVE_unaligned_storehi (unaligned_access)
#define HAVE_extzv_t2 (arm_arch_thumb2 \
   && IN_RANGE (INTVAL (operands[3]), 0, 31) \
   && IN_RANGE (INTVAL (operands[2]), 1, 32 - INTVAL (operands[3])))
#define HAVE_divsi3 (TARGET_IDIV)
#define HAVE_udivsi3 (TARGET_IDIV)
#define HAVE_negsi2_0compare (TARGET_32BIT)
#define HAVE_negsi2_carryin (TARGET_32BIT)
#define HAVE_arm_sxtb16 (TARGET_INT_SIMD)
#define HAVE_arm_uxtb16 (TARGET_INT_SIMD)
#define HAVE_arm_qadd8 (TARGET_INT_SIMD)
#define HAVE_arm_qsub8 (TARGET_INT_SIMD)
#define HAVE_arm_shadd8 (TARGET_INT_SIMD)
#define HAVE_arm_shsub8 (TARGET_INT_SIMD)
#define HAVE_arm_uhadd8 (TARGET_INT_SIMD)
#define HAVE_arm_uhsub8 (TARGET_INT_SIMD)
#define HAVE_arm_uqadd8 (TARGET_INT_SIMD)
#define HAVE_arm_uqsub8 (TARGET_INT_SIMD)
#define HAVE_arm_qadd16 (TARGET_INT_SIMD)
#define HAVE_arm_qasx (TARGET_INT_SIMD)
#define HAVE_arm_qsax (TARGET_INT_SIMD)
#define HAVE_arm_qsub16 (TARGET_INT_SIMD)
#define HAVE_arm_shadd16 (TARGET_INT_SIMD)
#define HAVE_arm_shasx (TARGET_INT_SIMD)
#define HAVE_arm_shsax (TARGET_INT_SIMD)
#define HAVE_arm_shsub16 (TARGET_INT_SIMD)
#define HAVE_arm_uhadd16 (TARGET_INT_SIMD)
#define HAVE_arm_uhasx (TARGET_INT_SIMD)
#define HAVE_arm_uhsax (TARGET_INT_SIMD)
#define HAVE_arm_uhsub16 (TARGET_INT_SIMD)
#define HAVE_arm_uqadd16 (TARGET_INT_SIMD)
#define HAVE_arm_uqasx (TARGET_INT_SIMD)
#define HAVE_arm_uqsax (TARGET_INT_SIMD)
#define HAVE_arm_uqsub16 (TARGET_INT_SIMD)
#define HAVE_arm_smusd (TARGET_INT_SIMD)
#define HAVE_arm_smusdx (TARGET_INT_SIMD)
#define HAVE_arm_sxtab16 (TARGET_INT_SIMD)
#define HAVE_arm_uxtab16 (TARGET_INT_SIMD)
#define HAVE_arm_usad8 (TARGET_INT_SIMD)
#define HAVE_arm_usada8 (TARGET_INT_SIMD)
#define HAVE_arm_smlald (TARGET_INT_SIMD)
#define HAVE_arm_smlaldx (TARGET_INT_SIMD)
#define HAVE_arm_smlsld (TARGET_INT_SIMD)
#define HAVE_arm_smlsldx (TARGET_INT_SIMD)
#define HAVE_arm_sadd8 (TARGET_INT_SIMD)
#define HAVE_arm_ssub8 (TARGET_INT_SIMD)
#define HAVE_arm_uadd8 (TARGET_INT_SIMD)
#define HAVE_arm_usub8 (TARGET_INT_SIMD)
#define HAVE_arm_sadd16 (TARGET_INT_SIMD)
#define HAVE_arm_sasx (TARGET_INT_SIMD)
#define HAVE_arm_ssax (TARGET_INT_SIMD)
#define HAVE_arm_ssub16 (TARGET_INT_SIMD)
#define HAVE_arm_uadd16 (TARGET_INT_SIMD)
#define HAVE_arm_uasx (TARGET_INT_SIMD)
#define HAVE_arm_usax (TARGET_INT_SIMD)
#define HAVE_arm_usub16 (TARGET_INT_SIMD)
#define HAVE_arm_smlad_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smlad_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_smladx_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smladx_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_smlsd_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smlsd_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_smlsdx_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smlsdx_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_smuad_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smuad_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_smuadx_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_smuadx_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_ssat16_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_ssat16_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_usat16_insn (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_arm_usat16_setq_insn (TARGET_INT_SIMD && ARM_Q_BIT_READ)
#define HAVE_arm_sel (TARGET_INT_SIMD)
#define HAVE_pic_load_addr_unified (flag_pic)
#define HAVE_pic_load_addr_32bit (TARGET_32BIT && flag_pic)
#define HAVE_pic_load_addr_thumb1 (TARGET_THUMB1 && flag_pic)
#define HAVE_pic_add_dot_plus_four (TARGET_THUMB)
#define HAVE_pic_add_dot_plus_eight (TARGET_ARM)
#define HAVE_tls_load_dot_plus_eight (TARGET_ARM)
#define HAVE_arm_cond_branch (TARGET_32BIT)
#define HAVE_restore_pic_register_after_call 1
#define HAVE_blockage 1
#define HAVE_probe_stack (TARGET_32BIT)
#define HAVE_probe_stack_range (TARGET_32BIT)
#define HAVE_arm_stack_protect_test_insn (TARGET_32BIT)
#define HAVE_stack_protect_set_tls 1
#define HAVE_stack_protect_test_tls 1
#define HAVE_nop 1
#define HAVE_trap 1
#define HAVE_movcond_addsi (TARGET_32BIT)
#define HAVE_movcond (TARGET_ARM)
#define HAVE_stack_tie 1
#define HAVE_align_4 1
#define HAVE_align_8 1
#define HAVE_consttable_end 1
#define HAVE_consttable_1 1
#define HAVE_consttable_2 1
#define HAVE_consttable_4 1
#define HAVE_consttable_8 1
#define HAVE_consttable_16 1
#define HAVE_clzsi2 (TARGET_32BIT && arm_arch5t)
#define HAVE_arm_rbit (TARGET_32BIT && arm_arch_thumb2)
#define HAVE_ctzsi2 (TARGET_32BIT && arm_arch_thumb2)
#define HAVE_prefetch (TARGET_32BIT && arm_arch5te)
#define HAVE_force_register_use 1
#define HAVE_arm_eh_return (TARGET_ARM)
#define HAVE_load_tp_hard (TARGET_HARD_TP)
#define HAVE_reload_tp_hard (TARGET_HARD_TP)
#define HAVE_load_tp_soft_fdpic (TARGET_SOFT_TP && TARGET_FDPIC)
#define HAVE_load_tp_soft (TARGET_SOFT_TP && !TARGET_FDPIC)
#define HAVE_tlscall (TARGET_GNU2_TLS)
#define HAVE_arm_rev16si2_alt1 (arm_arch6 \
   && aarch_rev16_shleft_mask_imm_p (operands[3], SImode) \
   && aarch_rev16_shright_mask_imm_p (operands[2], SImode))
#define HAVE_arm_rev16si2 (arm_arch6)
#define HAVE_arm_crc32b (TARGET_CRC32)
#define HAVE_arm_crc32h (TARGET_CRC32)
#define HAVE_arm_crc32w (TARGET_CRC32)
#define HAVE_arm_crc32cb (TARGET_CRC32)
#define HAVE_arm_crc32ch (TARGET_CRC32)
#define HAVE_arm_crc32cw (TARGET_CRC32)
#define HAVE_arm_cdp (arm_coproc_builtin_available (VUNSPEC_CDP))
#define HAVE_arm_cdp2 (arm_coproc_builtin_available (VUNSPEC_CDP2))
#define HAVE_arm_mcr (arm_coproc_builtin_available (VUNSPEC_MCR))
#define HAVE_arm_mcr2 (arm_coproc_builtin_available (VUNSPEC_MCR2))
#define HAVE_arm_mrc (arm_coproc_builtin_available (VUNSPEC_MRC))
#define HAVE_arm_mrc2 (arm_coproc_builtin_available (VUNSPEC_MRC2))
#define HAVE_arm_mcrr (arm_coproc_builtin_available (VUNSPEC_MCRR))
#define HAVE_arm_mcrr2 (arm_coproc_builtin_available (VUNSPEC_MCRR2))
#define HAVE_arm_mrrc (arm_coproc_builtin_available (VUNSPEC_MRRC))
#define HAVE_arm_mrrc2 (arm_coproc_builtin_available (VUNSPEC_MRRC2))
#define HAVE_pac_nop (arm_arch8m_main)
#define HAVE_pacbti_nop (arm_arch8m_main)
#define HAVE_aut_nop (arm_arch8m_main)
#define HAVE_bti_nop (arm_arch8m_main)
#define HAVE_mve_vshlq_sv8qi (ARM_HAVE_V8QI_ARITH)
#define HAVE_mve_vshlq_uv8qi (ARM_HAVE_V8QI_ARITH)
#define HAVE_mve_vshlq_sv16qi (ARM_HAVE_V16QI_ARITH)
#define HAVE_mve_vshlq_uv16qi (ARM_HAVE_V16QI_ARITH)
#define HAVE_mve_vshlq_sv4hi (ARM_HAVE_V4HI_ARITH)
#define HAVE_mve_vshlq_uv4hi (ARM_HAVE_V4HI_ARITH)
#define HAVE_mve_vshlq_sv8hi (ARM_HAVE_V8HI_ARITH)
#define HAVE_mve_vshlq_uv8hi (ARM_HAVE_V8HI_ARITH)
#define HAVE_mve_vshlq_sv2si (ARM_HAVE_V2SI_ARITH)
#define HAVE_mve_vshlq_uv2si (ARM_HAVE_V2SI_ARITH)
#define HAVE_mve_vshlq_sv4si (ARM_HAVE_V4SI_ARITH)
#define HAVE_mve_vshlq_uv4si (ARM_HAVE_V4SI_ARITH)
#define HAVE_abshf2 (TARGET_VFP_FP16INST)
#define HAVE_neghf2 (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndahf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndmhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndnhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndphf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndxhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrndihf (TARGET_VFP_FP16INST)
#define HAVE_addhf3 (TARGET_VFP_FP16INST)
#define HAVE_subhf3 (TARGET_VFP_FP16INST)
#define HAVE_divhf3 (TARGET_VFP_FP16INST)
#define HAVE_mulhf3 (TARGET_VFP_FP16INST)
#define HAVE_fmahf4 (TARGET_VFP_FP16INST)
#define HAVE_fmasf4 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA )
#define HAVE_fmadf4 ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_fmsubhf4_fp16 (TARGET_VFP_FP16INST)
#define HAVE_extendhfsf2 (TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
#define HAVE_truncsfhf2 (TARGET_32BIT && TARGET_HARD_FLOAT && (TARGET_FP16 || TARGET_VFP_FP16INST))
#define HAVE_fixuns_truncsfsi2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncdfsi2 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_floatunssisf2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_floatunssidf2 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_neon_vsqrthf (TARGET_VFP_FP16INST)
#define HAVE_neon_vrsqrtshf (TARGET_VFP_FP16INST)
#define HAVE_push_fpsysreg_insn (TARGET_HAVE_FPCXT_CMSE && use_cmse)
#define HAVE_pop_fpsysreg_insn (TARGET_HAVE_FPCXT_CMSE && use_cmse)
#define HAVE_lazy_store_multiple_insn (use_cmse && reload_completed)
#define HAVE_lazy_load_multiple_insn (use_cmse && reload_completed)
#define HAVE_neon_vcvthshf (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthuhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthssi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthusi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvths_nhf_unspec (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthu_nhf_unspec (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvths_nsi_unspec (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthu_nsi_unspec (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtahssi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtahusi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtmhssi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtmhusi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtnhssi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtnhusi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtphssi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvtphusi (TARGET_VFP_FP16INST)
#define HAVE_btruncsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_ceilsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_floorsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_nearbyintsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_rintsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_roundsf2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_btruncdf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_ceildf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_floordf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_nearbyintdf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_rintdf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_rounddf2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lceilsfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lfloorsfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lroundsfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lceilusfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lfloorusfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lroundusfsi2 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_lceildfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lfloordfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lrounddfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lceiludfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lfloorudfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_lroundudfsi2 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_smaxsf3 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_smaxdf3 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_sminsf3 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_smindf3 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_neon_vmaxnmhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vminnmhf (TARGET_VFP_FP16INST)
#define HAVE_fmaxsf3 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_fminsf3 (TARGET_HARD_FLOAT && TARGET_VFP5 )
#define HAVE_fmaxdf3 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_fmindf3 ((TARGET_HARD_FLOAT && TARGET_VFP5 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))
#define HAVE_set_fpscr (TARGET_VFP_BASE)
#define HAVE_get_fpscr (TARGET_VFP_BASE)
#define HAVE_no_literal_pool_df_immediate (arm_disable_literal_pool \
   && TARGET_VFP_BASE \
   && !arm_const_double_rtx (operands[1]) \
   && !(TARGET_VFP_DOUBLE && vfp3_const_double_rtx (operands[1])))
#define HAVE_no_literal_pool_sf_immediate (arm_disable_literal_pool \
   && TARGET_VFP_BASE \
   && !vfp3_const_double_rtx (operands[1]))
#define HAVE_arm_vcx1si (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx1di (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx1asi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx1adi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx2si (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx2di (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx2asi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx2adi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx3si (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx3di (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx3asi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_arm_vcx3adi (TARGET_CDE && (TARGET_ARM_FP || TARGET_HAVE_MVE))
#define HAVE_thumb1_subsi3_insn (TARGET_THUMB1)
#define HAVE_thumb1_bicsi3 (TARGET_THUMB1)
#define HAVE_thumb1_extendhisi2 (TARGET_THUMB1)
#define HAVE_thumb1_extendqisi2 (TARGET_THUMB1)
#define HAVE_cpymem12b (TARGET_THUMB1)
#define HAVE_cpymem8b (TARGET_THUMB1)
#define HAVE_thumb1_cbz (TARGET_THUMB1 && TARGET_HAVE_CBZ)
#define HAVE_cbranchsi4_insn (TARGET_THUMB1)
#define HAVE_cbranchsi4_scratch (TARGET_THUMB1)
#define HAVE_cstoresi_nltu_thumb1 (TARGET_THUMB1)
#define HAVE_cstoresi_ltu_thumb1 (TARGET_THUMB1)
#define HAVE_thumb1_addsi3_addgeu (TARGET_THUMB1)
#define HAVE_thumb1_casesi_dispatch (TARGET_THUMB1)
#define HAVE_prologue_thumb1_interwork (TARGET_THUMB1)
#define HAVE_thumb_eh_return (TARGET_THUMB1)
#define HAVE_thumb1_stack_protect_test_insn (TARGET_THUMB1)
#define HAVE_tls_load_dot_plus_four (TARGET_THUMB2)
#define HAVE_thumb2_zero_extendqisi2_v6 (TARGET_THUMB2 && arm_arch6)
#define HAVE_thumb2_eh_return (TARGET_THUMB2)
#define HAVE_thumb2_addsi3_compare0 (TARGET_THUMB2)
#define HAVE_thumb2_asrl (TARGET_HAVE_MVE)
#define HAVE_thumb2_lsll (TARGET_HAVE_MVE)
#define HAVE_thumb2_lsrl (TARGET_HAVE_MVE)
#define HAVE_dls_insn (TARGET_32BIT && TARGET_HAVE_LOB)
#define HAVE_unaligned_storev8qi (TARGET_NEON)
#define HAVE_vec_setv8qi_internal (TARGET_NEON)
#define HAVE_vec_setv4hi_internal (TARGET_NEON)
#define HAVE_vec_setv4hf_internal (TARGET_NEON)
#define HAVE_vec_setv4bf_internal (TARGET_NEON)
#define HAVE_vec_setv2si_internal (TARGET_NEON)
#define HAVE_vec_setv2sf_internal (TARGET_NEON)
#define HAVE_vec_setv16qi_internal (TARGET_NEON)
#define HAVE_vec_setv8hi_internal (TARGET_NEON)
#define HAVE_vec_setv8hf_internal (TARGET_NEON)
#define HAVE_vec_setv4si_internal (TARGET_NEON)
#define HAVE_vec_setv4sf_internal (TARGET_NEON)
#define HAVE_vec_setv2di_internal (TARGET_NEON)
#define HAVE_vec_extractv8qiqi (TARGET_NEON)
#define HAVE_vec_extractv4hihi (TARGET_NEON)
#define HAVE_vec_extractv4hfhf (TARGET_NEON)
#define HAVE_vec_extractv4bfbf (TARGET_NEON)
#define HAVE_vec_extractv2sisi (TARGET_NEON)
#define HAVE_vec_extractv2sfsf (TARGET_NEON)
#define HAVE_neon_vec_extractv16qiqi (TARGET_NEON)
#define HAVE_neon_vec_extractv8hihi (TARGET_NEON)
#define HAVE_neon_vec_extractv8hfhf (TARGET_NEON)
#define HAVE_neon_vec_extractv4sisi (TARGET_NEON)
#define HAVE_neon_vec_extractv4sfsf (TARGET_NEON)
#define HAVE_neon_vec_extractv2didi (TARGET_NEON)
#define HAVE_mulv8qi3addv8qi_neon (ARM_HAVE_NEON_V8QI_ARITH)
#define HAVE_mulv16qi3addv16qi_neon (ARM_HAVE_NEON_V16QI_ARITH)
#define HAVE_mulv4hi3addv4hi_neon (ARM_HAVE_NEON_V4HI_ARITH)
#define HAVE_mulv8hi3addv8hi_neon (ARM_HAVE_NEON_V8HI_ARITH)
#define HAVE_mulv2si3addv2si_neon (ARM_HAVE_NEON_V2SI_ARITH)
#define HAVE_mulv4si3addv4si_neon (ARM_HAVE_NEON_V4SI_ARITH)
#define HAVE_mulv2sf3addv2sf_neon (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_mulv4sf3addv4sf_neon (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_mulv8hf3addv8hf_neon (ARM_HAVE_NEON_V8HF_ARITH)
#define HAVE_mulv4hf3addv4hf_neon (ARM_HAVE_NEON_V4HF_ARITH)
#define HAVE_mulv8qi3negv8qiaddv8qi_neon (ARM_HAVE_NEON_V8QI_ARITH)
#define HAVE_mulv16qi3negv16qiaddv16qi_neon (ARM_HAVE_NEON_V16QI_ARITH)
#define HAVE_mulv4hi3negv4hiaddv4hi_neon (ARM_HAVE_NEON_V4HI_ARITH)
#define HAVE_mulv8hi3negv8hiaddv8hi_neon (ARM_HAVE_NEON_V8HI_ARITH)
#define HAVE_mulv2si3negv2siaddv2si_neon (ARM_HAVE_NEON_V2SI_ARITH)
#define HAVE_mulv4si3negv4siaddv4si_neon (ARM_HAVE_NEON_V4SI_ARITH)
#define HAVE_mulv2sf3negv2sfaddv2sf_neon (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_mulv4sf3negv4sfaddv4sf_neon (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_fmav2sf4 (ARM_HAVE_NEON_V2SF_ARITH && TARGET_FMA)
#define HAVE_fmav4sf4 (ARM_HAVE_NEON_V4SF_ARITH && TARGET_FMA)
#define HAVE_fmav2sf4_intrinsic (TARGET_NEON && TARGET_FMA)
#define HAVE_fmav4sf4_intrinsic (TARGET_NEON && TARGET_FMA)
#define HAVE_fmav8hf4 (ARM_HAVE_NEON_V8HF_ARITH)
#define HAVE_fmav4hf4 (ARM_HAVE_NEON_V4HF_ARITH)
#define HAVE_fmsubv2sf4_intrinsic (TARGET_NEON && TARGET_FMA)
#define HAVE_fmsubv4sf4_intrinsic (TARGET_NEON && TARGET_FMA)
#define HAVE_fmsubv8hf4_intrinsic (TARGET_NEON_FP16INST)
#define HAVE_fmsubv4hf4_intrinsic (TARGET_NEON_FP16INST)
#define HAVE_neon_vrintpv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintzv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintmv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintxv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintav2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintnv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintpv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintzv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintmv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintxv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintav4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vrintnv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtpv2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtmv2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtav2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtpuv2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtmuv2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtauv2sfv2si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtpv4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtmv4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtav4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtpuv4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtmuv4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vcvtauv4sfv4si (TARGET_NEON && TARGET_VFP5)
#define HAVE_iorv8qi3_neon (TARGET_NEON)
#define HAVE_iorv16qi3_neon (TARGET_NEON)
#define HAVE_iorv4hi3_neon (TARGET_NEON)
#define HAVE_iorv8hi3_neon (TARGET_NEON)
#define HAVE_iorv2si3_neon (TARGET_NEON)
#define HAVE_iorv4si3_neon (TARGET_NEON)
#define HAVE_iorv4hf3_neon (TARGET_NEON)
#define HAVE_iorv8hf3_neon (TARGET_NEON)
#define HAVE_iorv2sf3_neon (TARGET_NEON)
#define HAVE_iorv4sf3_neon (TARGET_NEON)
#define HAVE_iorv2di3_neon (TARGET_NEON)
#define HAVE_andv8qi3_neon (TARGET_NEON)
#define HAVE_andv16qi3_neon (TARGET_NEON)
#define HAVE_andv4hi3_neon (TARGET_NEON)
#define HAVE_andv8hi3_neon (TARGET_NEON)
#define HAVE_andv2si3_neon (TARGET_NEON)
#define HAVE_andv4si3_neon (TARGET_NEON)
#define HAVE_andv4hf3_neon (TARGET_NEON)
#define HAVE_andv8hf3_neon (TARGET_NEON)
#define HAVE_andv2sf3_neon (TARGET_NEON)
#define HAVE_andv4sf3_neon (TARGET_NEON)
#define HAVE_andv2di3_neon (TARGET_NEON)
#define HAVE_ornv8qi3_neon (TARGET_NEON)
#define HAVE_ornv16qi3_neon (TARGET_NEON)
#define HAVE_ornv4hi3_neon (TARGET_NEON)
#define HAVE_ornv8hi3_neon (TARGET_NEON)
#define HAVE_ornv2si3_neon (TARGET_NEON)
#define HAVE_ornv4si3_neon (TARGET_NEON)
#define HAVE_ornv4hf3_neon (TARGET_NEON)
#define HAVE_ornv8hf3_neon (TARGET_NEON)
#define HAVE_ornv2sf3_neon (TARGET_NEON)
#define HAVE_ornv4sf3_neon (TARGET_NEON)
#define HAVE_ornv2di3_neon (TARGET_NEON)
#define HAVE_bicv8qi3_neon (TARGET_NEON)
#define HAVE_bicv16qi3_neon (TARGET_NEON)
#define HAVE_bicv4hi3_neon (TARGET_NEON)
#define HAVE_bicv8hi3_neon (TARGET_NEON)
#define HAVE_bicv2si3_neon (TARGET_NEON)
#define HAVE_bicv4si3_neon (TARGET_NEON)
#define HAVE_bicv4hf3_neon (TARGET_NEON)
#define HAVE_bicv8hf3_neon (TARGET_NEON)
#define HAVE_bicv2sf3_neon (TARGET_NEON)
#define HAVE_bicv4sf3_neon (TARGET_NEON)
#define HAVE_bicv2di3_neon (TARGET_NEON)
#define HAVE_xorv8qi3_neon (TARGET_NEON)
#define HAVE_xorv16qi3_neon (TARGET_NEON)
#define HAVE_xorv4hi3_neon (TARGET_NEON)
#define HAVE_xorv8hi3_neon (TARGET_NEON)
#define HAVE_xorv2si3_neon (TARGET_NEON)
#define HAVE_xorv4si3_neon (TARGET_NEON)
#define HAVE_xorv4hf3_neon (TARGET_NEON)
#define HAVE_xorv8hf3_neon (TARGET_NEON)
#define HAVE_xorv2sf3_neon (TARGET_NEON)
#define HAVE_xorv4sf3_neon (TARGET_NEON)
#define HAVE_xorv2di3_neon (TARGET_NEON)
#define HAVE_one_cmplv8qi2_neon (TARGET_NEON)
#define HAVE_one_cmplv16qi2_neon (TARGET_NEON)
#define HAVE_one_cmplv4hi2_neon (TARGET_NEON)
#define HAVE_one_cmplv8hi2_neon (TARGET_NEON)
#define HAVE_one_cmplv2si2_neon (TARGET_NEON)
#define HAVE_one_cmplv4si2_neon (TARGET_NEON)
#define HAVE_one_cmplv4hf2_neon (TARGET_NEON)
#define HAVE_one_cmplv8hf2_neon (TARGET_NEON)
#define HAVE_one_cmplv2sf2_neon (TARGET_NEON)
#define HAVE_one_cmplv4sf2_neon (TARGET_NEON)
#define HAVE_one_cmplv2di2_neon (TARGET_NEON)
#define HAVE_neon_absv8qi2 (TARGET_NEON)
#define HAVE_neon_absv16qi2 (TARGET_NEON)
#define HAVE_neon_absv4hi2 (TARGET_NEON)
#define HAVE_neon_absv8hi2 (TARGET_NEON)
#define HAVE_neon_absv2si2 (TARGET_NEON)
#define HAVE_neon_absv4si2 (TARGET_NEON)
#define HAVE_neon_absv2sf2 (TARGET_NEON)
#define HAVE_neon_absv4sf2 (TARGET_NEON)
#define HAVE_neon_negv8qi2 (TARGET_NEON)
#define HAVE_neon_negv16qi2 (TARGET_NEON)
#define HAVE_neon_negv4hi2 (TARGET_NEON)
#define HAVE_neon_negv8hi2 (TARGET_NEON)
#define HAVE_neon_negv2si2 (TARGET_NEON)
#define HAVE_neon_negv4si2 (TARGET_NEON)
#define HAVE_neon_negv2sf2 (TARGET_NEON)
#define HAVE_neon_negv4sf2 (TARGET_NEON)
#define HAVE_neon_absv8hf2 (TARGET_NEON_FP16INST)
#define HAVE_neon_negv8hf2 (TARGET_NEON_FP16INST)
#define HAVE_neon_absv4hf2 (TARGET_NEON_FP16INST)
#define HAVE_neon_negv4hf2 (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndav8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndmv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndnv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndpv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndxv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndav4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndmv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndnv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndpv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrndxv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrsqrtev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrsqrtev4hf (TARGET_NEON_FP16INST)
#define HAVE_vashrv8qi3_imm (TARGET_NEON)
#define HAVE_vashrv16qi3_imm (TARGET_NEON)
#define HAVE_vashrv4hi3_imm (TARGET_NEON)
#define HAVE_vashrv8hi3_imm (TARGET_NEON)
#define HAVE_vashrv2si3_imm (TARGET_NEON)
#define HAVE_vashrv4si3_imm (TARGET_NEON)
#define HAVE_vlshrv8qi3_imm (TARGET_NEON)
#define HAVE_vlshrv16qi3_imm (TARGET_NEON)
#define HAVE_vlshrv4hi3_imm (TARGET_NEON)
#define HAVE_vlshrv8hi3_imm (TARGET_NEON)
#define HAVE_vlshrv2si3_imm (TARGET_NEON)
#define HAVE_vlshrv4si3_imm (TARGET_NEON)
#define HAVE_ashlv8qi3_signed (TARGET_NEON)
#define HAVE_ashlv16qi3_signed (TARGET_NEON)
#define HAVE_ashlv4hi3_signed (TARGET_NEON)
#define HAVE_ashlv8hi3_signed (TARGET_NEON)
#define HAVE_ashlv2si3_signed (TARGET_NEON)
#define HAVE_ashlv4si3_signed (TARGET_NEON)
#define HAVE_ashlv2di3_signed (TARGET_NEON)
#define HAVE_ashlv8qi3_unsigned (TARGET_NEON)
#define HAVE_ashlv16qi3_unsigned (TARGET_NEON)
#define HAVE_ashlv4hi3_unsigned (TARGET_NEON)
#define HAVE_ashlv8hi3_unsigned (TARGET_NEON)
#define HAVE_ashlv2si3_unsigned (TARGET_NEON)
#define HAVE_ashlv4si3_unsigned (TARGET_NEON)
#define HAVE_ashlv2di3_unsigned (TARGET_NEON)
#define HAVE_neon_load_count (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_lov16qiv8qi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_lov8hiv4hi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_lov4siv2si3 (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_hiv16qiv8qi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_hiv8hiv4hi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_ssum_hiv4siv2si3 (TARGET_NEON)
#define HAVE_widen_ssumv8qi3 (TARGET_NEON)
#define HAVE_widen_ssumv4hi3 (TARGET_NEON)
#define HAVE_widen_ssumv2si3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_lov16qiv8qi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_lov8hiv4hi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_lov4siv2si3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_hiv16qiv8qi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_hiv8hiv4hi3 (TARGET_NEON)
#define HAVE_vec_sel_widen_usum_hiv4siv2si3 (TARGET_NEON)
#define HAVE_widen_usumv8qi3 (TARGET_NEON)
#define HAVE_widen_usumv4hi3 (TARGET_NEON)
#define HAVE_widen_usumv2si3 (TARGET_NEON)
#define HAVE_quad_halves_plusv4si (TARGET_NEON)
#define HAVE_quad_halves_sminv4si (TARGET_NEON)
#define HAVE_quad_halves_smaxv4si (TARGET_NEON)
#define HAVE_quad_halves_uminv4si (TARGET_NEON)
#define HAVE_quad_halves_umaxv4si (TARGET_NEON)
#define HAVE_quad_halves_plusv4sf (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_quad_halves_sminv4sf (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_quad_halves_smaxv4sf (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_quad_halves_plusv8hi (TARGET_NEON)
#define HAVE_quad_halves_sminv8hi (TARGET_NEON)
#define HAVE_quad_halves_smaxv8hi (TARGET_NEON)
#define HAVE_quad_halves_uminv8hi (TARGET_NEON)
#define HAVE_quad_halves_umaxv8hi (TARGET_NEON)
#define HAVE_quad_halves_plusv16qi (TARGET_NEON)
#define HAVE_quad_halves_sminv16qi (TARGET_NEON)
#define HAVE_quad_halves_smaxv16qi (TARGET_NEON)
#define HAVE_quad_halves_uminv16qi (TARGET_NEON)
#define HAVE_quad_halves_umaxv16qi (TARGET_NEON)
#define HAVE_arm_reduc_plus_internal_v2di (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vpadd_internalv8qi (TARGET_NEON)
#define HAVE_neon_vpadd_internalv4hi (TARGET_NEON)
#define HAVE_neon_vpadd_internalv2si (TARGET_NEON)
#define HAVE_neon_vpadd_internalv2sf (TARGET_NEON)
#define HAVE_neon_vpaddv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vpsminv8qi (TARGET_NEON)
#define HAVE_neon_vpsminv4hi (TARGET_NEON)
#define HAVE_neon_vpsminv2si (TARGET_NEON)
#define HAVE_neon_vpsminv2sf (TARGET_NEON)
#define HAVE_neon_vpsmaxv8qi (TARGET_NEON)
#define HAVE_neon_vpsmaxv4hi (TARGET_NEON)
#define HAVE_neon_vpsmaxv2si (TARGET_NEON)
#define HAVE_neon_vpsmaxv2sf (TARGET_NEON)
#define HAVE_neon_vpuminv8qi (TARGET_NEON)
#define HAVE_neon_vpuminv4hi (TARGET_NEON)
#define HAVE_neon_vpuminv2si (TARGET_NEON)
#define HAVE_neon_vpumaxv8qi (TARGET_NEON)
#define HAVE_neon_vpumaxv4hi (TARGET_NEON)
#define HAVE_neon_vpumaxv2si (TARGET_NEON)
#define HAVE_neon_vaddv2sf_unspec (TARGET_NEON)
#define HAVE_neon_vaddv4sf_unspec (TARGET_NEON)
#define HAVE_neon_vaddlsv8qi (TARGET_NEON)
#define HAVE_neon_vaddluv8qi (TARGET_NEON)
#define HAVE_neon_vaddlsv4hi (TARGET_NEON)
#define HAVE_neon_vaddluv4hi (TARGET_NEON)
#define HAVE_neon_vaddlsv2si (TARGET_NEON)
#define HAVE_neon_vaddluv2si (TARGET_NEON)
#define HAVE_neon_vaddwsv8qi (TARGET_NEON)
#define HAVE_neon_vaddwuv8qi (TARGET_NEON)
#define HAVE_neon_vaddwsv4hi (TARGET_NEON)
#define HAVE_neon_vaddwuv4hi (TARGET_NEON)
#define HAVE_neon_vaddwsv2si (TARGET_NEON)
#define HAVE_neon_vaddwuv2si (TARGET_NEON)
#define HAVE_neon_vrhaddsv8qi (TARGET_NEON)
#define HAVE_neon_vrhadduv8qi (TARGET_NEON)
#define HAVE_neon_vhaddsv8qi (TARGET_NEON)
#define HAVE_neon_vhadduv8qi (TARGET_NEON)
#define HAVE_neon_vrhaddsv16qi (TARGET_NEON)
#define HAVE_neon_vrhadduv16qi (TARGET_NEON)
#define HAVE_neon_vhaddsv16qi (TARGET_NEON)
#define HAVE_neon_vhadduv16qi (TARGET_NEON)
#define HAVE_neon_vrhaddsv4hi (TARGET_NEON)
#define HAVE_neon_vrhadduv4hi (TARGET_NEON)
#define HAVE_neon_vhaddsv4hi (TARGET_NEON)
#define HAVE_neon_vhadduv4hi (TARGET_NEON)
#define HAVE_neon_vrhaddsv8hi (TARGET_NEON)
#define HAVE_neon_vrhadduv8hi (TARGET_NEON)
#define HAVE_neon_vhaddsv8hi (TARGET_NEON)
#define HAVE_neon_vhadduv8hi (TARGET_NEON)
#define HAVE_neon_vrhaddsv2si (TARGET_NEON)
#define HAVE_neon_vrhadduv2si (TARGET_NEON)
#define HAVE_neon_vhaddsv2si (TARGET_NEON)
#define HAVE_neon_vhadduv2si (TARGET_NEON)
#define HAVE_neon_vrhaddsv4si (TARGET_NEON)
#define HAVE_neon_vrhadduv4si (TARGET_NEON)
#define HAVE_neon_vhaddsv4si (TARGET_NEON)
#define HAVE_neon_vhadduv4si (TARGET_NEON)
#define HAVE_neon_vqaddsv8qi (TARGET_NEON)
#define HAVE_neon_vqadduv8qi (TARGET_NEON)
#define HAVE_neon_vqaddsv16qi (TARGET_NEON)
#define HAVE_neon_vqadduv16qi (TARGET_NEON)
#define HAVE_neon_vqaddsv4hi (TARGET_NEON)
#define HAVE_neon_vqadduv4hi (TARGET_NEON)
#define HAVE_neon_vqaddsv8hi (TARGET_NEON)
#define HAVE_neon_vqadduv8hi (TARGET_NEON)
#define HAVE_neon_vqaddsv2si (TARGET_NEON)
#define HAVE_neon_vqadduv2si (TARGET_NEON)
#define HAVE_neon_vqaddsv4si (TARGET_NEON)
#define HAVE_neon_vqadduv4si (TARGET_NEON)
#define HAVE_neon_vqaddsdi (TARGET_NEON)
#define HAVE_neon_vqaddudi (TARGET_NEON)
#define HAVE_neon_vqaddsv2di (TARGET_NEON)
#define HAVE_neon_vqadduv2di (TARGET_NEON)
#define HAVE_neon_vaddhnv8hi (TARGET_NEON)
#define HAVE_neon_vraddhnv8hi (TARGET_NEON)
#define HAVE_neon_vaddhnv4si (TARGET_NEON)
#define HAVE_neon_vraddhnv4si (TARGET_NEON)
#define HAVE_neon_vaddhnv2di (TARGET_NEON)
#define HAVE_neon_vraddhnv2di (TARGET_NEON)
#define HAVE_neon_vmulpv8qi (TARGET_NEON)
#define HAVE_neon_vmulpv16qi (TARGET_NEON)
#define HAVE_neon_vmulfv2sf (TARGET_NEON)
#define HAVE_neon_vmulfv4sf (TARGET_NEON)
#define HAVE_neon_vmulfv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmulfv4hf (TARGET_NEON_FP16INST)
#define HAVE_vfmal_lowv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lowv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_highv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_highv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_highv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_highv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lowv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lowv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_lowv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_lowv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_lowv8hfv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_lowv4hfv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_highv8hfv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_highv4hfv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_highv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmal_lane_highv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_lowv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_lowv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_lowv8hfv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_lowv4hfv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_highv8hfv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_highv4hfv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_highv2sf_intrinsic (TARGET_FP16FML)
#define HAVE_vfmsl_lane_highv4sf_intrinsic (TARGET_FP16FML)
#define HAVE_neon_vmlav8qi_unspec (TARGET_NEON)
#define HAVE_neon_vmlav16qi_unspec (TARGET_NEON)
#define HAVE_neon_vmlav4hi_unspec (TARGET_NEON)
#define HAVE_neon_vmlav8hi_unspec (TARGET_NEON)
#define HAVE_neon_vmlav2si_unspec (TARGET_NEON)
#define HAVE_neon_vmlav4si_unspec (TARGET_NEON)
#define HAVE_neon_vmlav2sf_unspec (TARGET_NEON)
#define HAVE_neon_vmlav4sf_unspec (TARGET_NEON)
#define HAVE_neon_vmlalsv8qi (TARGET_NEON)
#define HAVE_neon_vmlaluv8qi (TARGET_NEON)
#define HAVE_neon_vmlalsv4hi (TARGET_NEON)
#define HAVE_neon_vmlaluv4hi (TARGET_NEON)
#define HAVE_neon_vmlalsv2si (TARGET_NEON)
#define HAVE_neon_vmlaluv2si (TARGET_NEON)
#define HAVE_neon_vmlsv8qi_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv16qi_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv4hi_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv8hi_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv2si_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv4si_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv2sf_unspec (TARGET_NEON)
#define HAVE_neon_vmlsv4sf_unspec (TARGET_NEON)
#define HAVE_neon_vmlslsv8qi (TARGET_NEON)
#define HAVE_neon_vmlsluv8qi (TARGET_NEON)
#define HAVE_neon_vmlslsv4hi (TARGET_NEON)
#define HAVE_neon_vmlsluv4hi (TARGET_NEON)
#define HAVE_neon_vmlslsv2si (TARGET_NEON)
#define HAVE_neon_vmlsluv2si (TARGET_NEON)
#define HAVE_neon_vqdmulhv4hi (TARGET_NEON)
#define HAVE_neon_vqrdmulhv4hi (TARGET_NEON)
#define HAVE_neon_vqdmulhv2si (TARGET_NEON)
#define HAVE_neon_vqrdmulhv2si (TARGET_NEON)
#define HAVE_neon_vqdmulhv8hi (TARGET_NEON)
#define HAVE_neon_vqrdmulhv8hi (TARGET_NEON)
#define HAVE_neon_vqdmulhv4si (TARGET_NEON)
#define HAVE_neon_vqrdmulhv4si (TARGET_NEON)
#define HAVE_neon_vqrdmlahv4hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlshv4hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlahv2si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlshv2si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlahv8hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlshv8hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlahv4si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlshv4si (TARGET_NEON_RDMA)
#define HAVE_neon_vqdmlalv4hi (TARGET_NEON)
#define HAVE_neon_vqdmlalv2si (TARGET_NEON)
#define HAVE_neon_vqdmlslv4hi (TARGET_NEON)
#define HAVE_neon_vqdmlslv2si (TARGET_NEON)
#define HAVE_neon_vmullsv8qi (TARGET_NEON)
#define HAVE_neon_vmulluv8qi (TARGET_NEON)
#define HAVE_neon_vmullpv8qi (TARGET_NEON)
#define HAVE_neon_vmullsv4hi (TARGET_NEON)
#define HAVE_neon_vmulluv4hi (TARGET_NEON)
#define HAVE_neon_vmullpv4hi (TARGET_NEON)
#define HAVE_neon_vmullsv2si (TARGET_NEON)
#define HAVE_neon_vmulluv2si (TARGET_NEON)
#define HAVE_neon_vmullpv2si (TARGET_NEON)
#define HAVE_neon_vqdmullv4hi (TARGET_NEON)
#define HAVE_neon_vqdmullv2si (TARGET_NEON)
#define HAVE_neon_vsubv2sf_unspec (TARGET_NEON)
#define HAVE_neon_vsubv4sf_unspec (TARGET_NEON)
#define HAVE_neon_vsublsv8qi (TARGET_NEON)
#define HAVE_neon_vsubluv8qi (TARGET_NEON)
#define HAVE_neon_vsublsv4hi (TARGET_NEON)
#define HAVE_neon_vsubluv4hi (TARGET_NEON)
#define HAVE_neon_vsublsv2si (TARGET_NEON)
#define HAVE_neon_vsubluv2si (TARGET_NEON)
#define HAVE_neon_vsubwsv8qi (TARGET_NEON)
#define HAVE_neon_vsubwuv8qi (TARGET_NEON)
#define HAVE_neon_vsubwsv4hi (TARGET_NEON)
#define HAVE_neon_vsubwuv4hi (TARGET_NEON)
#define HAVE_neon_vsubwsv2si (TARGET_NEON)
#define HAVE_neon_vsubwuv2si (TARGET_NEON)
#define HAVE_neon_vqsubsv8qi (TARGET_NEON)
#define HAVE_neon_vqsubuv8qi (TARGET_NEON)
#define HAVE_neon_vqsubsv16qi (TARGET_NEON)
#define HAVE_neon_vqsubuv16qi (TARGET_NEON)
#define HAVE_neon_vqsubsv4hi (TARGET_NEON)
#define HAVE_neon_vqsubuv4hi (TARGET_NEON)
#define HAVE_neon_vqsubsv8hi (TARGET_NEON)
#define HAVE_neon_vqsubuv8hi (TARGET_NEON)
#define HAVE_neon_vqsubsv2si (TARGET_NEON)
#define HAVE_neon_vqsubuv2si (TARGET_NEON)
#define HAVE_neon_vqsubsv4si (TARGET_NEON)
#define HAVE_neon_vqsubuv4si (TARGET_NEON)
#define HAVE_neon_vqsubsdi (TARGET_NEON)
#define HAVE_neon_vqsubudi (TARGET_NEON)
#define HAVE_neon_vqsubsv2di (TARGET_NEON)
#define HAVE_neon_vqsubuv2di (TARGET_NEON)
#define HAVE_neon_vhsubsv8qi (TARGET_NEON)
#define HAVE_neon_vhsubuv8qi (TARGET_NEON)
#define HAVE_neon_vhsubsv16qi (TARGET_NEON)
#define HAVE_neon_vhsubuv16qi (TARGET_NEON)
#define HAVE_neon_vhsubsv4hi (TARGET_NEON)
#define HAVE_neon_vhsubuv4hi (TARGET_NEON)
#define HAVE_neon_vhsubsv8hi (TARGET_NEON)
#define HAVE_neon_vhsubuv8hi (TARGET_NEON)
#define HAVE_neon_vhsubsv2si (TARGET_NEON)
#define HAVE_neon_vhsubuv2si (TARGET_NEON)
#define HAVE_neon_vhsubsv4si (TARGET_NEON)
#define HAVE_neon_vhsubuv4si (TARGET_NEON)
#define HAVE_neon_vsubhnv8hi (TARGET_NEON)
#define HAVE_neon_vrsubhnv8hi (TARGET_NEON)
#define HAVE_neon_vsubhnv4si (TARGET_NEON)
#define HAVE_neon_vrsubhnv4si (TARGET_NEON)
#define HAVE_neon_vsubhnv2di (TARGET_NEON)
#define HAVE_neon_vrsubhnv2di (TARGET_NEON)
#define HAVE_neon_vceqv8qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv8qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev8qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev8qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv8qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv16qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv16qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev16qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev16qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv16qi_insn (TARGET_NEON && !(GET_MODE_CLASS (V16QImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv4hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv4hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev4hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev4hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv4hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V4HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv8hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv8hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev8hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev8hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv8hi_insn (TARGET_NEON && !(GET_MODE_CLASS (V8HImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv2si_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv2si_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev2si_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev2si_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv2si_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv4si_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv4si_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev4si_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev4si_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv4si_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SImode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv2sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv2sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev2sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev2sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv2sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V2SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv4sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv4sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev4sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev4sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv4sf_insn (TARGET_NEON && !(GET_MODE_CLASS (V4SFmode) == MODE_VECTOR_FLOAT \
                    && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcgtv2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcgev2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcltv2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vclev2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vceqv4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcgtv4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcgev4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcltv4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vclev4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vceqv8hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv8hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev8hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev8hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv8hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V8HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv4hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgtv4hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcgev4hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vclev4hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vcltv4hf_fp16insn (TARGET_NEON_FP16INST \
  && !(GET_MODE_CLASS (V4HFmode) == MODE_VECTOR_FLOAT \
  && !flag_unsafe_math_optimizations))
#define HAVE_neon_vceqv8hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtv8hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgev8hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltv8hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vclev8hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vceqv4hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtv4hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgev4hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltv4hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vclev4hf_fp16insn_unspec (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtuv8qi (TARGET_NEON)
#define HAVE_neon_vcgeuv8qi (TARGET_NEON)
#define HAVE_neon_vcgtuv16qi (TARGET_NEON)
#define HAVE_neon_vcgeuv16qi (TARGET_NEON)
#define HAVE_neon_vcgtuv4hi (TARGET_NEON)
#define HAVE_neon_vcgeuv4hi (TARGET_NEON)
#define HAVE_neon_vcgtuv8hi (TARGET_NEON)
#define HAVE_neon_vcgeuv8hi (TARGET_NEON)
#define HAVE_neon_vcgtuv2si (TARGET_NEON)
#define HAVE_neon_vcgeuv2si (TARGET_NEON)
#define HAVE_neon_vcgtuv4si (TARGET_NEON)
#define HAVE_neon_vcgeuv4si (TARGET_NEON)
#define HAVE_neon_vcagtv2sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev2sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcaltv2sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcalev2sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagtv4sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev4sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcaltv4sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcalev4sf_insn (TARGET_NEON && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagtv2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcalev2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcaltv2sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagev4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagtv4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcalev4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcaltv4sf_insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagtv8hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev8hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcaltv8hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcalev8hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagtv4hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev4hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcaltv4hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcalev4hf_fp16insn (TARGET_NEON_FP16INST && flag_unsafe_math_optimizations)
#define HAVE_neon_vcagev8hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagtv8hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcalev8hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcaltv8hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagev4hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcagtv4hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcalev4hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vcaltv4hf_fp16insn_unspec (TARGET_NEON)
#define HAVE_neon_vtst_combinev8qi (TARGET_NEON)
#define HAVE_neon_vtst_combinev16qi (TARGET_NEON)
#define HAVE_neon_vtst_combinev4hi (TARGET_NEON)
#define HAVE_neon_vtst_combinev8hi (TARGET_NEON)
#define HAVE_neon_vtst_combinev2si (TARGET_NEON)
#define HAVE_neon_vtst_combinev4si (TARGET_NEON)
#define HAVE_neon_vabdsv8qi (TARGET_NEON)
#define HAVE_neon_vabduv8qi (TARGET_NEON)
#define HAVE_neon_vabdsv16qi (TARGET_NEON)
#define HAVE_neon_vabduv16qi (TARGET_NEON)
#define HAVE_neon_vabdsv4hi (TARGET_NEON)
#define HAVE_neon_vabduv4hi (TARGET_NEON)
#define HAVE_neon_vabdsv8hi (TARGET_NEON)
#define HAVE_neon_vabduv8hi (TARGET_NEON)
#define HAVE_neon_vabdsv2si (TARGET_NEON)
#define HAVE_neon_vabduv2si (TARGET_NEON)
#define HAVE_neon_vabdsv4si (TARGET_NEON)
#define HAVE_neon_vabduv4si (TARGET_NEON)
#define HAVE_neon_vabdv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vabdv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vabdfv2sf (TARGET_NEON)
#define HAVE_neon_vabdfv4sf (TARGET_NEON)
#define HAVE_neon_vabdlsv8qi (TARGET_NEON)
#define HAVE_neon_vabdluv8qi (TARGET_NEON)
#define HAVE_neon_vabdlsv4hi (TARGET_NEON)
#define HAVE_neon_vabdluv4hi (TARGET_NEON)
#define HAVE_neon_vabdlsv2si (TARGET_NEON)
#define HAVE_neon_vabdluv2si (TARGET_NEON)
#define HAVE_neon_vabasv8qi (TARGET_NEON)
#define HAVE_neon_vabauv8qi (TARGET_NEON)
#define HAVE_neon_vabasv16qi (TARGET_NEON)
#define HAVE_neon_vabauv16qi (TARGET_NEON)
#define HAVE_neon_vabasv4hi (TARGET_NEON)
#define HAVE_neon_vabauv4hi (TARGET_NEON)
#define HAVE_neon_vabasv8hi (TARGET_NEON)
#define HAVE_neon_vabauv8hi (TARGET_NEON)
#define HAVE_neon_vabasv2si (TARGET_NEON)
#define HAVE_neon_vabauv2si (TARGET_NEON)
#define HAVE_neon_vabasv4si (TARGET_NEON)
#define HAVE_neon_vabauv4si (TARGET_NEON)
#define HAVE_neon_vabalsv8qi (TARGET_NEON)
#define HAVE_neon_vabaluv8qi (TARGET_NEON)
#define HAVE_neon_vabalsv4hi (TARGET_NEON)
#define HAVE_neon_vabaluv4hi (TARGET_NEON)
#define HAVE_neon_vabalsv2si (TARGET_NEON)
#define HAVE_neon_vabaluv2si (TARGET_NEON)
#define HAVE_neon_vmaxsv8qi (TARGET_NEON)
#define HAVE_neon_vmaxuv8qi (TARGET_NEON)
#define HAVE_neon_vminsv8qi (TARGET_NEON)
#define HAVE_neon_vminuv8qi (TARGET_NEON)
#define HAVE_neon_vmaxsv16qi (TARGET_NEON)
#define HAVE_neon_vmaxuv16qi (TARGET_NEON)
#define HAVE_neon_vminsv16qi (TARGET_NEON)
#define HAVE_neon_vminuv16qi (TARGET_NEON)
#define HAVE_neon_vmaxsv4hi (TARGET_NEON)
#define HAVE_neon_vmaxuv4hi (TARGET_NEON)
#define HAVE_neon_vminsv4hi (TARGET_NEON)
#define HAVE_neon_vminuv4hi (TARGET_NEON)
#define HAVE_neon_vmaxsv8hi (TARGET_NEON)
#define HAVE_neon_vmaxuv8hi (TARGET_NEON)
#define HAVE_neon_vminsv8hi (TARGET_NEON)
#define HAVE_neon_vminuv8hi (TARGET_NEON)
#define HAVE_neon_vmaxsv2si (TARGET_NEON)
#define HAVE_neon_vmaxuv2si (TARGET_NEON)
#define HAVE_neon_vminsv2si (TARGET_NEON)
#define HAVE_neon_vminuv2si (TARGET_NEON)
#define HAVE_neon_vmaxsv4si (TARGET_NEON)
#define HAVE_neon_vmaxuv4si (TARGET_NEON)
#define HAVE_neon_vminsv4si (TARGET_NEON)
#define HAVE_neon_vminuv4si (TARGET_NEON)
#define HAVE_neon_vmaxfv2sf (TARGET_NEON)
#define HAVE_neon_vminfv2sf (TARGET_NEON)
#define HAVE_neon_vmaxfv4sf (TARGET_NEON)
#define HAVE_neon_vminfv4sf (TARGET_NEON)
#define HAVE_neon_vmaxfv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vminfv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmaxfv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vminfv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vpmaxfv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vpminfv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmaxnmv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vminnmv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmaxnmv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vminnmv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmaxnmv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vminnmv2sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vmaxnmv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vminnmv4sf (TARGET_NEON && TARGET_VFP5)
#define HAVE_neon_vpaddlsv8qi (TARGET_NEON)
#define HAVE_neon_vpaddluv8qi (TARGET_NEON)
#define HAVE_neon_vpaddlsv16qi (TARGET_NEON)
#define HAVE_neon_vpaddluv16qi (TARGET_NEON)
#define HAVE_neon_vpaddlsv4hi (TARGET_NEON)
#define HAVE_neon_vpaddluv4hi (TARGET_NEON)
#define HAVE_neon_vpaddlsv8hi (TARGET_NEON)
#define HAVE_neon_vpaddluv8hi (TARGET_NEON)
#define HAVE_neon_vpaddlsv2si (TARGET_NEON)
#define HAVE_neon_vpaddluv2si (TARGET_NEON)
#define HAVE_neon_vpaddlsv4si (TARGET_NEON)
#define HAVE_neon_vpaddluv4si (TARGET_NEON)
#define HAVE_neon_vpadalsv8qi (TARGET_NEON)
#define HAVE_neon_vpadaluv8qi (TARGET_NEON)
#define HAVE_neon_vpadalsv16qi (TARGET_NEON)
#define HAVE_neon_vpadaluv16qi (TARGET_NEON)
#define HAVE_neon_vpadalsv4hi (TARGET_NEON)
#define HAVE_neon_vpadaluv4hi (TARGET_NEON)
#define HAVE_neon_vpadalsv8hi (TARGET_NEON)
#define HAVE_neon_vpadaluv8hi (TARGET_NEON)
#define HAVE_neon_vpadalsv2si (TARGET_NEON)
#define HAVE_neon_vpadaluv2si (TARGET_NEON)
#define HAVE_neon_vpadalsv4si (TARGET_NEON)
#define HAVE_neon_vpadaluv4si (TARGET_NEON)
#define HAVE_neon_vpmaxsv8qi (TARGET_NEON)
#define HAVE_neon_vpmaxuv8qi (TARGET_NEON)
#define HAVE_neon_vpminsv8qi (TARGET_NEON)
#define HAVE_neon_vpminuv8qi (TARGET_NEON)
#define HAVE_neon_vpmaxsv4hi (TARGET_NEON)
#define HAVE_neon_vpmaxuv4hi (TARGET_NEON)
#define HAVE_neon_vpminsv4hi (TARGET_NEON)
#define HAVE_neon_vpminuv4hi (TARGET_NEON)
#define HAVE_neon_vpmaxsv2si (TARGET_NEON)
#define HAVE_neon_vpmaxuv2si (TARGET_NEON)
#define HAVE_neon_vpminsv2si (TARGET_NEON)
#define HAVE_neon_vpminuv2si (TARGET_NEON)
#define HAVE_neon_vpmaxfv2sf (TARGET_NEON)
#define HAVE_neon_vpminfv2sf (TARGET_NEON)
#define HAVE_neon_vpmaxfv4sf (TARGET_NEON)
#define HAVE_neon_vpminfv4sf (TARGET_NEON)
#define HAVE_neon_vrecpsv2sf (TARGET_NEON)
#define HAVE_neon_vrecpsv4sf (TARGET_NEON)
#define HAVE_neon_vrecpsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrecpsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrsqrtsv2sf (TARGET_NEON)
#define HAVE_neon_vrsqrtsv4sf (TARGET_NEON)
#define HAVE_neon_vrsqrtsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrsqrtsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vqabsv8qi (TARGET_NEON)
#define HAVE_neon_vqabsv16qi (TARGET_NEON)
#define HAVE_neon_vqabsv4hi (TARGET_NEON)
#define HAVE_neon_vqabsv8hi (TARGET_NEON)
#define HAVE_neon_vqabsv2si (TARGET_NEON)
#define HAVE_neon_vqabsv4si (TARGET_NEON)
#define HAVE_neon_bswapv4hi (TARGET_NEON)
#define HAVE_neon_bswapv8hi (TARGET_NEON)
#define HAVE_neon_bswapv2si (TARGET_NEON)
#define HAVE_neon_bswapv4si (TARGET_NEON)
#define HAVE_neon_bswapv2di (TARGET_NEON)
#define HAVE_neon_vcadd90v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcadd270v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcadd90v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcadd270v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcadd90v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcadd270v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcadd90v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcadd270v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla0v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla90v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla180v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla270v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla0v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla90v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla180v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla270v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla0v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla90v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla180v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla270v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla0v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla90v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla180v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla270v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane0v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane90v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane180v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane270v4hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane0v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane90v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane180v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane270v8hf ((TARGET_COMPLEX) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vcmla_lane0v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane90v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane180v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane270v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane0v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane90v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane180v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_lane270v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq0v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq90v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq180v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq270v2sf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq0v4hf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq90v4hf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq180v4hf (TARGET_COMPLEX)
#define HAVE_neon_vcmla_laneq270v4hf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane0v8hf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane90v8hf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane180v8hf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane270v8hf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane0v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane90v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane180v4sf (TARGET_COMPLEX)
#define HAVE_neon_vcmlaq_lane270v4sf (TARGET_COMPLEX)
#define HAVE_sdot_prodv2siv8qi (TARGET_DOTPROD)
#define HAVE_udot_prodv2siv8qi (TARGET_DOTPROD)
#define HAVE_sdot_prodv4siv16qi (TARGET_DOTPROD)
#define HAVE_udot_prodv4siv16qi (TARGET_DOTPROD)
#define HAVE_neon_usdotv2siv8qi (TARGET_I8MM)
#define HAVE_neon_usdotv4siv16qi (TARGET_I8MM)
#define HAVE_neon_sdot_lanev8qi (TARGET_DOTPROD)
#define HAVE_neon_udot_lanev8qi (TARGET_DOTPROD)
#define HAVE_neon_sdot_lanev16qi (TARGET_DOTPROD)
#define HAVE_neon_udot_lanev16qi (TARGET_DOTPROD)
#define HAVE_neon_sdot_laneqv8qi (TARGET_DOTPROD)
#define HAVE_neon_udot_laneqv8qi (TARGET_DOTPROD)
#define HAVE_neon_sdot_laneqv16qi (TARGET_DOTPROD)
#define HAVE_neon_udot_laneqv16qi (TARGET_DOTPROD)
#define HAVE_neon_usdot_lanev8qi (TARGET_I8MM)
#define HAVE_neon_sudot_lanev8qi (TARGET_I8MM)
#define HAVE_neon_usdot_lanev16qi (TARGET_I8MM)
#define HAVE_neon_sudot_lanev16qi (TARGET_I8MM)
#define HAVE_neon_usdot_laneqv8qi (TARGET_I8MM)
#define HAVE_neon_sudot_laneqv8qi (TARGET_I8MM)
#define HAVE_neon_usdot_laneqv16qi (TARGET_I8MM)
#define HAVE_neon_sudot_laneqv16qi (TARGET_I8MM)
#define HAVE_neon_vqnegv8qi (TARGET_NEON)
#define HAVE_neon_vqnegv16qi (TARGET_NEON)
#define HAVE_neon_vqnegv4hi (TARGET_NEON)
#define HAVE_neon_vqnegv8hi (TARGET_NEON)
#define HAVE_neon_vqnegv2si (TARGET_NEON)
#define HAVE_neon_vqnegv4si (TARGET_NEON)
#define HAVE_neon_vclsv8qi (TARGET_NEON)
#define HAVE_neon_vclsv16qi (TARGET_NEON)
#define HAVE_neon_vclsv4hi (TARGET_NEON)
#define HAVE_neon_vclsv8hi (TARGET_NEON)
#define HAVE_neon_vclsv2si (TARGET_NEON)
#define HAVE_neon_vclsv4si (TARGET_NEON)
#define HAVE_neon_vclzv8qi (TARGET_NEON)
#define HAVE_neon_vclzv16qi (TARGET_NEON)
#define HAVE_neon_vclzv4hi (TARGET_NEON)
#define HAVE_neon_vclzv8hi (TARGET_NEON)
#define HAVE_neon_vclzv2si (TARGET_NEON)
#define HAVE_neon_vclzv4si (TARGET_NEON)
#define HAVE_popcountv8qi2 (TARGET_NEON)
#define HAVE_popcountv16qi2 (TARGET_NEON)
#define HAVE_neon_vrecpev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrecpev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vrecpev2si (TARGET_NEON)
#define HAVE_neon_vrecpev2sf (TARGET_NEON)
#define HAVE_neon_vrecpev4si (TARGET_NEON)
#define HAVE_neon_vrecpev4sf (TARGET_NEON)
#define HAVE_neon_vrsqrtev2si (TARGET_NEON)
#define HAVE_neon_vrsqrtev2sf (TARGET_NEON)
#define HAVE_neon_vrsqrtev4si (TARGET_NEON)
#define HAVE_neon_vrsqrtev4sf (TARGET_NEON)
#define HAVE_neon_vget_lanev8qi_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4hi_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev2si_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev2sf_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev8qi_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4hi_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev2si_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev2sf_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev16qi_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev8hi_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev8hf_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4si_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4sf_sext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev16qi_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev8hi_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev8hf_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4si_zext_internal (TARGET_NEON)
#define HAVE_neon_vget_lanev4sf_zext_internal (TARGET_NEON)
#define HAVE_neon_vdup_nv8qi (TARGET_NEON)
#define HAVE_neon_vdup_nv4hi (TARGET_NEON)
#define HAVE_neon_vdup_nv16qi (TARGET_NEON)
#define HAVE_neon_vdup_nv8hi (TARGET_NEON)
#define HAVE_neon_vdup_nv4hf (TARGET_NEON)
#define HAVE_neon_vdup_nv8hf (TARGET_NEON)
#define HAVE_neon_vdup_nv4bf (TARGET_NEON)
#define HAVE_neon_vdup_nv8bf (TARGET_NEON)
#define HAVE_neon_vdup_nv2si (TARGET_NEON)
#define HAVE_neon_vdup_nv2sf (TARGET_NEON)
#define HAVE_neon_vdup_nv4si (TARGET_NEON)
#define HAVE_neon_vdup_nv4sf (TARGET_NEON)
#define HAVE_neon_vdup_nv2di (TARGET_NEON)
#define HAVE_neon_vdup_lanev8qi_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev16qi_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev4hi_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev8hi_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev2si_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev4si_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev2sf_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev4sf_internal (TARGET_NEON)
#define HAVE_neon_vdup_lanev8hf_internal (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev4hf_internal (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev4bf_internal (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev8bf_internal (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vcombinev8qi (TARGET_NEON)
#define HAVE_neon_vcombinev4hi (TARGET_NEON)
#define HAVE_neon_vcombinev4hf (TARGET_NEON)
#define HAVE_neon_vcombinev4bf (TARGET_NEON)
#define HAVE_neon_vcombinev2si (TARGET_NEON)
#define HAVE_neon_vcombinev2sf (TARGET_NEON)
#define HAVE_neon_vcombinedi (TARGET_NEON)
#define HAVE_floatv2siv2sf2 (TARGET_NEON && !flag_rounding_math)
#define HAVE_floatv4siv4sf2 (TARGET_NEON && !flag_rounding_math)
#define HAVE_floatunsv2siv2sf2 (TARGET_NEON && !flag_rounding_math)
#define HAVE_floatunsv4siv4sf2 (TARGET_NEON && !flag_rounding_math)
#define HAVE_fix_truncv2sfv2si2 (TARGET_NEON)
#define HAVE_fix_truncv4sfv4si2 (TARGET_NEON)
#define HAVE_fixuns_truncv2sfv2si2 (TARGET_NEON)
#define HAVE_fixuns_truncv4sfv4si2 (TARGET_NEON)
#define HAVE_neon_vcvtsv2sf (TARGET_NEON)
#define HAVE_neon_vcvtuv2sf (TARGET_NEON)
#define HAVE_neon_vcvtsv4sf (TARGET_NEON)
#define HAVE_neon_vcvtuv4sf (TARGET_NEON)
#define HAVE_neon_vcvtsv2si (TARGET_NEON)
#define HAVE_neon_vcvtuv2si (TARGET_NEON)
#define HAVE_neon_vcvtsv4si (TARGET_NEON)
#define HAVE_neon_vcvtuv4si (TARGET_NEON)
#define HAVE_neon_vcvtv4sfv4hf (TARGET_NEON && TARGET_FP16)
#define HAVE_neon_vcvtv4hfv4sf (TARGET_NEON && TARGET_FP16)
#define HAVE_neon_vcvtsv4hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtuv4hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtsv8hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtuv8hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtuv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtuv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvts_nv2sf (TARGET_NEON)
#define HAVE_neon_vcvtu_nv2sf (TARGET_NEON)
#define HAVE_neon_vcvts_nv4sf (TARGET_NEON)
#define HAVE_neon_vcvtu_nv4sf (TARGET_NEON)
#define HAVE_neon_vcvts_nv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtu_nv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvts_nv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtu_nv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvts_nv2si (TARGET_NEON)
#define HAVE_neon_vcvtu_nv2si (TARGET_NEON)
#define HAVE_neon_vcvts_nv4si (TARGET_NEON)
#define HAVE_neon_vcvtu_nv4si (TARGET_NEON)
#define HAVE_neon_vcvts_nv4hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtu_nv4hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvts_nv8hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtu_nv8hi (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtasv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtauv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtmsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtmuv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtnsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtnuv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtpsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtpuv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtasv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtauv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtmsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtmuv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtnsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtnuv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtpsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcvtpuv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmovnv8hi (TARGET_NEON)
#define HAVE_neon_vmovnv4si (TARGET_NEON)
#define HAVE_neon_vmovnv2di (TARGET_NEON)
#define HAVE_neon_vqmovnsv8hi (TARGET_NEON)
#define HAVE_neon_vqmovnuv8hi (TARGET_NEON)
#define HAVE_neon_vqmovnsv4si (TARGET_NEON)
#define HAVE_neon_vqmovnuv4si (TARGET_NEON)
#define HAVE_neon_vqmovnsv2di (TARGET_NEON)
#define HAVE_neon_vqmovnuv2di (TARGET_NEON)
#define HAVE_neon_vqmovunv8hi (TARGET_NEON)
#define HAVE_neon_vqmovunv4si (TARGET_NEON)
#define HAVE_neon_vqmovunv2di (TARGET_NEON)
#define HAVE_neon_vmovlsv8qi (TARGET_NEON)
#define HAVE_neon_vmovluv8qi (TARGET_NEON)
#define HAVE_neon_vmovlsv4hi (TARGET_NEON)
#define HAVE_neon_vmovluv4hi (TARGET_NEON)
#define HAVE_neon_vmovlsv2si (TARGET_NEON)
#define HAVE_neon_vmovluv2si (TARGET_NEON)
#define HAVE_neon_vmul_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmul_lanev2si (TARGET_NEON)
#define HAVE_neon_vmul_lanev2sf (TARGET_NEON)
#define HAVE_neon_vmul_lanev8hi (TARGET_NEON)
#define HAVE_neon_vmul_lanev4si (TARGET_NEON)
#define HAVE_neon_vmul_lanev4sf (TARGET_NEON)
#define HAVE_neon_vmul_lanev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmul_lanev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmulls_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmullu_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmulls_lanev2si (TARGET_NEON)
#define HAVE_neon_vmullu_lanev2si (TARGET_NEON)
#define HAVE_neon_vqdmull_lanev4hi (TARGET_NEON)
#define HAVE_neon_vqdmull_lanev2si (TARGET_NEON)
#define HAVE_neon_vqdmulh_lanev8hi (TARGET_NEON)
#define HAVE_neon_vqrdmulh_lanev8hi (TARGET_NEON)
#define HAVE_neon_vqdmulh_lanev4si (TARGET_NEON)
#define HAVE_neon_vqrdmulh_lanev4si (TARGET_NEON)
#define HAVE_neon_vqdmulh_lanev4hi (TARGET_NEON)
#define HAVE_neon_vqrdmulh_lanev4hi (TARGET_NEON)
#define HAVE_neon_vqdmulh_lanev2si (TARGET_NEON)
#define HAVE_neon_vqrdmulh_lanev2si (TARGET_NEON)
#define HAVE_neon_vqrdmlah_lanev8hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlsh_lanev8hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlah_lanev4si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlsh_lanev4si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlah_lanev4hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlsh_lanev4hi (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlah_lanev2si (TARGET_NEON_RDMA)
#define HAVE_neon_vqrdmlsh_lanev2si (TARGET_NEON_RDMA)
#define HAVE_neon_vmla_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmla_lanev2si (TARGET_NEON)
#define HAVE_neon_vmla_lanev2sf (TARGET_NEON)
#define HAVE_neon_vmla_lanev8hi (TARGET_NEON)
#define HAVE_neon_vmla_lanev4si (TARGET_NEON)
#define HAVE_neon_vmla_lanev4sf (TARGET_NEON)
#define HAVE_neon_vmlals_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmlalu_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmlals_lanev2si (TARGET_NEON)
#define HAVE_neon_vmlalu_lanev2si (TARGET_NEON)
#define HAVE_neon_vqdmlal_lanev4hi (TARGET_NEON)
#define HAVE_neon_vqdmlal_lanev2si (TARGET_NEON)
#define HAVE_neon_vmls_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmls_lanev2si (TARGET_NEON)
#define HAVE_neon_vmls_lanev2sf (TARGET_NEON)
#define HAVE_neon_vmls_lanev8hi (TARGET_NEON)
#define HAVE_neon_vmls_lanev4si (TARGET_NEON)
#define HAVE_neon_vmls_lanev4sf (TARGET_NEON)
#define HAVE_neon_vmlsls_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmlslu_lanev4hi (TARGET_NEON)
#define HAVE_neon_vmlsls_lanev2si (TARGET_NEON)
#define HAVE_neon_vmlslu_lanev2si (TARGET_NEON)
#define HAVE_neon_vqdmlsl_lanev4hi (TARGET_NEON)
#define HAVE_neon_vqdmlsl_lanev2si (TARGET_NEON)
#define HAVE_neon_vextv8qi (TARGET_NEON)
#define HAVE_neon_vextv16qi (TARGET_NEON)
#define HAVE_neon_vextv4hi (TARGET_NEON)
#define HAVE_neon_vextv8hi (TARGET_NEON)
#define HAVE_neon_vextv2si (TARGET_NEON)
#define HAVE_neon_vextv4si (TARGET_NEON)
#define HAVE_neon_vextv4hf (TARGET_NEON)
#define HAVE_neon_vextv8hf (TARGET_NEON)
#define HAVE_neon_vextv4bf (TARGET_NEON)
#define HAVE_neon_vextv8bf (TARGET_NEON)
#define HAVE_neon_vextv2sf (TARGET_NEON)
#define HAVE_neon_vextv4sf (TARGET_NEON)
#define HAVE_neon_vextdi (TARGET_NEON)
#define HAVE_neon_vextv2di (TARGET_NEON)
#define HAVE_neon_vrev64v8qi (TARGET_NEON)
#define HAVE_neon_vrev64v16qi (TARGET_NEON)
#define HAVE_neon_vrev64v4hi (TARGET_NEON)
#define HAVE_neon_vrev64v8hi (TARGET_NEON)
#define HAVE_neon_vrev64v2si (TARGET_NEON)
#define HAVE_neon_vrev64v4si (TARGET_NEON)
#define HAVE_neon_vrev64v4hf (TARGET_NEON)
#define HAVE_neon_vrev64v8hf (TARGET_NEON)
#define HAVE_neon_vrev64v2sf (TARGET_NEON)
#define HAVE_neon_vrev64v4sf (TARGET_NEON)
#define HAVE_neon_vrev64v2di (TARGET_NEON)
#define HAVE_neon_vrev32v8qi (TARGET_NEON)
#define HAVE_neon_vrev32v4hi (TARGET_NEON)
#define HAVE_neon_vrev32v16qi (TARGET_NEON)
#define HAVE_neon_vrev32v8hi (TARGET_NEON)
#define HAVE_neon_vrev16v8qi (TARGET_NEON)
#define HAVE_neon_vrev16v16qi (TARGET_NEON)
#define HAVE_neon_vbslv8qi_internal (TARGET_NEON)
#define HAVE_neon_vbslv16qi_internal (TARGET_NEON)
#define HAVE_neon_vbslv4hi_internal (TARGET_NEON)
#define HAVE_neon_vbslv8hi_internal (TARGET_NEON)
#define HAVE_neon_vbslv2si_internal (TARGET_NEON)
#define HAVE_neon_vbslv4si_internal (TARGET_NEON)
#define HAVE_neon_vbslv4hf_internal (TARGET_NEON)
#define HAVE_neon_vbslv8hf_internal (TARGET_NEON)
#define HAVE_neon_vbslv4bf_internal (TARGET_NEON)
#define HAVE_neon_vbslv8bf_internal (TARGET_NEON)
#define HAVE_neon_vbslv2sf_internal (TARGET_NEON)
#define HAVE_neon_vbslv4sf_internal (TARGET_NEON)
#define HAVE_neon_vbsldi_internal (TARGET_NEON)
#define HAVE_neon_vbslv2di_internal (TARGET_NEON)
#define HAVE_neon_vshlsv8qi (TARGET_NEON)
#define HAVE_neon_vshluv8qi (TARGET_NEON)
#define HAVE_neon_vrshlsv8qi (TARGET_NEON)
#define HAVE_neon_vrshluv8qi (TARGET_NEON)
#define HAVE_neon_vshlsv16qi (TARGET_NEON)
#define HAVE_neon_vshluv16qi (TARGET_NEON)
#define HAVE_neon_vrshlsv16qi (TARGET_NEON)
#define HAVE_neon_vrshluv16qi (TARGET_NEON)
#define HAVE_neon_vshlsv4hi (TARGET_NEON)
#define HAVE_neon_vshluv4hi (TARGET_NEON)
#define HAVE_neon_vrshlsv4hi (TARGET_NEON)
#define HAVE_neon_vrshluv4hi (TARGET_NEON)
#define HAVE_neon_vshlsv8hi (TARGET_NEON)
#define HAVE_neon_vshluv8hi (TARGET_NEON)
#define HAVE_neon_vrshlsv8hi (TARGET_NEON)
#define HAVE_neon_vrshluv8hi (TARGET_NEON)
#define HAVE_neon_vshlsv2si (TARGET_NEON)
#define HAVE_neon_vshluv2si (TARGET_NEON)
#define HAVE_neon_vrshlsv2si (TARGET_NEON)
#define HAVE_neon_vrshluv2si (TARGET_NEON)
#define HAVE_neon_vshlsv4si (TARGET_NEON)
#define HAVE_neon_vshluv4si (TARGET_NEON)
#define HAVE_neon_vrshlsv4si (TARGET_NEON)
#define HAVE_neon_vrshluv4si (TARGET_NEON)
#define HAVE_neon_vshlsdi (TARGET_NEON)
#define HAVE_neon_vshludi (TARGET_NEON)
#define HAVE_neon_vrshlsdi (TARGET_NEON)
#define HAVE_neon_vrshludi (TARGET_NEON)
#define HAVE_neon_vshlsv2di (TARGET_NEON)
#define HAVE_neon_vshluv2di (TARGET_NEON)
#define HAVE_neon_vrshlsv2di (TARGET_NEON)
#define HAVE_neon_vrshluv2di (TARGET_NEON)
#define HAVE_neon_vqshlsv8qi (TARGET_NEON)
#define HAVE_neon_vqshluv8qi (TARGET_NEON)
#define HAVE_neon_vqrshlsv8qi (TARGET_NEON)
#define HAVE_neon_vqrshluv8qi (TARGET_NEON)
#define HAVE_neon_vqshlsv16qi (TARGET_NEON)
#define HAVE_neon_vqshluv16qi (TARGET_NEON)
#define HAVE_neon_vqrshlsv16qi (TARGET_NEON)
#define HAVE_neon_vqrshluv16qi (TARGET_NEON)
#define HAVE_neon_vqshlsv4hi (TARGET_NEON)
#define HAVE_neon_vqshluv4hi (TARGET_NEON)
#define HAVE_neon_vqrshlsv4hi (TARGET_NEON)
#define HAVE_neon_vqrshluv4hi (TARGET_NEON)
#define HAVE_neon_vqshlsv8hi (TARGET_NEON)
#define HAVE_neon_vqshluv8hi (TARGET_NEON)
#define HAVE_neon_vqrshlsv8hi (TARGET_NEON)
#define HAVE_neon_vqrshluv8hi (TARGET_NEON)
#define HAVE_neon_vqshlsv2si (TARGET_NEON)
#define HAVE_neon_vqshluv2si (TARGET_NEON)
#define HAVE_neon_vqrshlsv2si (TARGET_NEON)
#define HAVE_neon_vqrshluv2si (TARGET_NEON)
#define HAVE_neon_vqshlsv4si (TARGET_NEON)
#define HAVE_neon_vqshluv4si (TARGET_NEON)
#define HAVE_neon_vqrshlsv4si (TARGET_NEON)
#define HAVE_neon_vqrshluv4si (TARGET_NEON)
#define HAVE_neon_vqshlsdi (TARGET_NEON)
#define HAVE_neon_vqshludi (TARGET_NEON)
#define HAVE_neon_vqrshlsdi (TARGET_NEON)
#define HAVE_neon_vqrshludi (TARGET_NEON)
#define HAVE_neon_vqshlsv2di (TARGET_NEON)
#define HAVE_neon_vqshluv2di (TARGET_NEON)
#define HAVE_neon_vqrshlsv2di (TARGET_NEON)
#define HAVE_neon_vqrshluv2di (TARGET_NEON)
#define HAVE_neon_vshrs_nv8qi (TARGET_NEON)
#define HAVE_neon_vshru_nv8qi (TARGET_NEON)
#define HAVE_neon_vrshrs_nv8qi (TARGET_NEON)
#define HAVE_neon_vrshru_nv8qi (TARGET_NEON)
#define HAVE_neon_vshrs_nv16qi (TARGET_NEON)
#define HAVE_neon_vshru_nv16qi (TARGET_NEON)
#define HAVE_neon_vrshrs_nv16qi (TARGET_NEON)
#define HAVE_neon_vrshru_nv16qi (TARGET_NEON)
#define HAVE_neon_vshrs_nv4hi (TARGET_NEON)
#define HAVE_neon_vshru_nv4hi (TARGET_NEON)
#define HAVE_neon_vrshrs_nv4hi (TARGET_NEON)
#define HAVE_neon_vrshru_nv4hi (TARGET_NEON)
#define HAVE_neon_vshrs_nv8hi (TARGET_NEON)
#define HAVE_neon_vshru_nv8hi (TARGET_NEON)
#define HAVE_neon_vrshrs_nv8hi (TARGET_NEON)
#define HAVE_neon_vrshru_nv8hi (TARGET_NEON)
#define HAVE_neon_vshrs_nv2si (TARGET_NEON)
#define HAVE_neon_vshru_nv2si (TARGET_NEON)
#define HAVE_neon_vrshrs_nv2si (TARGET_NEON)
#define HAVE_neon_vrshru_nv2si (TARGET_NEON)
#define HAVE_neon_vshrs_nv4si (TARGET_NEON)
#define HAVE_neon_vshru_nv4si (TARGET_NEON)
#define HAVE_neon_vrshrs_nv4si (TARGET_NEON)
#define HAVE_neon_vrshru_nv4si (TARGET_NEON)
#define HAVE_neon_vshrs_ndi (TARGET_NEON)
#define HAVE_neon_vshru_ndi (TARGET_NEON)
#define HAVE_neon_vrshrs_ndi (TARGET_NEON)
#define HAVE_neon_vrshru_ndi (TARGET_NEON)
#define HAVE_neon_vshrs_nv2di (TARGET_NEON)
#define HAVE_neon_vshru_nv2di (TARGET_NEON)
#define HAVE_neon_vrshrs_nv2di (TARGET_NEON)
#define HAVE_neon_vrshru_nv2di (TARGET_NEON)
#define HAVE_neon_vshrn_nv8hi (TARGET_NEON)
#define HAVE_neon_vrshrn_nv8hi (TARGET_NEON)
#define HAVE_neon_vshrn_nv4si (TARGET_NEON)
#define HAVE_neon_vrshrn_nv4si (TARGET_NEON)
#define HAVE_neon_vshrn_nv2di (TARGET_NEON)
#define HAVE_neon_vrshrn_nv2di (TARGET_NEON)
#define HAVE_neon_vqshrns_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshrnu_nv8hi (TARGET_NEON)
#define HAVE_neon_vqrshrns_nv8hi (TARGET_NEON)
#define HAVE_neon_vqrshrnu_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshrns_nv4si (TARGET_NEON)
#define HAVE_neon_vqshrnu_nv4si (TARGET_NEON)
#define HAVE_neon_vqrshrns_nv4si (TARGET_NEON)
#define HAVE_neon_vqrshrnu_nv4si (TARGET_NEON)
#define HAVE_neon_vqshrns_nv2di (TARGET_NEON)
#define HAVE_neon_vqshrnu_nv2di (TARGET_NEON)
#define HAVE_neon_vqrshrns_nv2di (TARGET_NEON)
#define HAVE_neon_vqrshrnu_nv2di (TARGET_NEON)
#define HAVE_neon_vqshrun_nv8hi (TARGET_NEON)
#define HAVE_neon_vqrshrun_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshrun_nv4si (TARGET_NEON)
#define HAVE_neon_vqrshrun_nv4si (TARGET_NEON)
#define HAVE_neon_vqshrun_nv2di (TARGET_NEON)
#define HAVE_neon_vqrshrun_nv2di (TARGET_NEON)
#define HAVE_neon_vshl_nv8qi (TARGET_NEON)
#define HAVE_neon_vshl_nv16qi (TARGET_NEON)
#define HAVE_neon_vshl_nv4hi (TARGET_NEON)
#define HAVE_neon_vshl_nv8hi (TARGET_NEON)
#define HAVE_neon_vshl_nv2si (TARGET_NEON)
#define HAVE_neon_vshl_nv4si (TARGET_NEON)
#define HAVE_neon_vshl_ndi (TARGET_NEON)
#define HAVE_neon_vshl_nv2di (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv8qi (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv8qi (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv16qi (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv16qi (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv4hi (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv4hi (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv2si (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv2si (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv4si (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv4si (TARGET_NEON)
#define HAVE_neon_vqshl_s_ndi (TARGET_NEON)
#define HAVE_neon_vqshl_u_ndi (TARGET_NEON)
#define HAVE_neon_vqshl_s_nv2di (TARGET_NEON)
#define HAVE_neon_vqshl_u_nv2di (TARGET_NEON)
#define HAVE_neon_vqshlu_nv8qi (TARGET_NEON)
#define HAVE_neon_vqshlu_nv16qi (TARGET_NEON)
#define HAVE_neon_vqshlu_nv4hi (TARGET_NEON)
#define HAVE_neon_vqshlu_nv8hi (TARGET_NEON)
#define HAVE_neon_vqshlu_nv2si (TARGET_NEON)
#define HAVE_neon_vqshlu_nv4si (TARGET_NEON)
#define HAVE_neon_vqshlu_ndi (TARGET_NEON)
#define HAVE_neon_vqshlu_nv2di (TARGET_NEON)
#define HAVE_neon_vshlls_nv8qi (TARGET_NEON)
#define HAVE_neon_vshllu_nv8qi (TARGET_NEON)
#define HAVE_neon_vshlls_nv4hi (TARGET_NEON)
#define HAVE_neon_vshllu_nv4hi (TARGET_NEON)
#define HAVE_neon_vshlls_nv2si (TARGET_NEON)
#define HAVE_neon_vshllu_nv2si (TARGET_NEON)
#define HAVE_neon_vsras_nv8qi (TARGET_NEON)
#define HAVE_neon_vsrau_nv8qi (TARGET_NEON)
#define HAVE_neon_vrsras_nv8qi (TARGET_NEON)
#define HAVE_neon_vrsrau_nv8qi (TARGET_NEON)
#define HAVE_neon_vsras_nv16qi (TARGET_NEON)
#define HAVE_neon_vsrau_nv16qi (TARGET_NEON)
#define HAVE_neon_vrsras_nv16qi (TARGET_NEON)
#define HAVE_neon_vrsrau_nv16qi (TARGET_NEON)
#define HAVE_neon_vsras_nv4hi (TARGET_NEON)
#define HAVE_neon_vsrau_nv4hi (TARGET_NEON)
#define HAVE_neon_vrsras_nv4hi (TARGET_NEON)
#define HAVE_neon_vrsrau_nv4hi (TARGET_NEON)
#define HAVE_neon_vsras_nv8hi (TARGET_NEON)
#define HAVE_neon_vsrau_nv8hi (TARGET_NEON)
#define HAVE_neon_vrsras_nv8hi (TARGET_NEON)
#define HAVE_neon_vrsrau_nv8hi (TARGET_NEON)
#define HAVE_neon_vsras_nv2si (TARGET_NEON)
#define HAVE_neon_vsrau_nv2si (TARGET_NEON)
#define HAVE_neon_vrsras_nv2si (TARGET_NEON)
#define HAVE_neon_vrsrau_nv2si (TARGET_NEON)
#define HAVE_neon_vsras_nv4si (TARGET_NEON)
#define HAVE_neon_vsrau_nv4si (TARGET_NEON)
#define HAVE_neon_vrsras_nv4si (TARGET_NEON)
#define HAVE_neon_vrsrau_nv4si (TARGET_NEON)
#define HAVE_neon_vsras_ndi (TARGET_NEON)
#define HAVE_neon_vsrau_ndi (TARGET_NEON)
#define HAVE_neon_vrsras_ndi (TARGET_NEON)
#define HAVE_neon_vrsrau_ndi (TARGET_NEON)
#define HAVE_neon_vsras_nv2di (TARGET_NEON)
#define HAVE_neon_vsrau_nv2di (TARGET_NEON)
#define HAVE_neon_vrsras_nv2di (TARGET_NEON)
#define HAVE_neon_vrsrau_nv2di (TARGET_NEON)
#define HAVE_neon_vsri_nv8qi (TARGET_NEON)
#define HAVE_neon_vsri_nv16qi (TARGET_NEON)
#define HAVE_neon_vsri_nv4hi (TARGET_NEON)
#define HAVE_neon_vsri_nv8hi (TARGET_NEON)
#define HAVE_neon_vsri_nv2si (TARGET_NEON)
#define HAVE_neon_vsri_nv4si (TARGET_NEON)
#define HAVE_neon_vsri_ndi (TARGET_NEON)
#define HAVE_neon_vsri_nv2di (TARGET_NEON)
#define HAVE_neon_vsli_nv8qi (TARGET_NEON)
#define HAVE_neon_vsli_nv16qi (TARGET_NEON)
#define HAVE_neon_vsli_nv4hi (TARGET_NEON)
#define HAVE_neon_vsli_nv8hi (TARGET_NEON)
#define HAVE_neon_vsli_nv2si (TARGET_NEON)
#define HAVE_neon_vsli_nv4si (TARGET_NEON)
#define HAVE_neon_vsli_ndi (TARGET_NEON)
#define HAVE_neon_vsli_nv2di (TARGET_NEON)
#define HAVE_neon_vtbl1v8qi (TARGET_NEON)
#define HAVE_neon_vtbl2v8qi (TARGET_NEON)
#define HAVE_neon_vtbl3v8qi (TARGET_NEON)
#define HAVE_neon_vtbl4v8qi (TARGET_NEON)
#define HAVE_neon_vtbl1v16qi (TARGET_NEON)
#define HAVE_neon_vtbl2v16qi (TARGET_NEON)
#define HAVE_neon_vcombinev16qi (TARGET_NEON)
#define HAVE_neon_vtbx1v8qi (TARGET_NEON)
#define HAVE_neon_vtbx2v8qi (TARGET_NEON)
#define HAVE_neon_vtbx3v8qi (TARGET_NEON)
#define HAVE_neon_vtbx4v8qi (TARGET_NEON)
#define HAVE_neon_vld1v8qi (TARGET_NEON)
#define HAVE_neon_vld1v16qi (TARGET_NEON)
#define HAVE_neon_vld1v4hi (TARGET_NEON)
#define HAVE_neon_vld1v8hi (TARGET_NEON)
#define HAVE_neon_vld1v2si (TARGET_NEON)
#define HAVE_neon_vld1v4si (TARGET_NEON)
#define HAVE_neon_vld1v4hf (TARGET_NEON)
#define HAVE_neon_vld1v8hf (TARGET_NEON)
#define HAVE_neon_vld1v4bf (TARGET_NEON)
#define HAVE_neon_vld1v8bf (TARGET_NEON)
#define HAVE_neon_vld1v2sf (TARGET_NEON)
#define HAVE_neon_vld1v4sf (TARGET_NEON)
#define HAVE_neon_vld1di (TARGET_NEON)
#define HAVE_neon_vld1v2di (TARGET_NEON)
#define HAVE_neon_vld1_x2v8qi (TARGET_NEON)
#define HAVE_neon_vld1q_x2v8qi (TARGET_NEON)
#define HAVE_neon_vld1_x2v16qi (TARGET_NEON)
#define HAVE_neon_vld1q_x2v16qi (TARGET_NEON)
#define HAVE_neon_vld1_x2v4hi (TARGET_NEON)
#define HAVE_neon_vld1q_x2v4hi (TARGET_NEON)
#define HAVE_neon_vld1_x2v8hi (TARGET_NEON)
#define HAVE_neon_vld1q_x2v8hi (TARGET_NEON)
#define HAVE_neon_vld1_x2v2si (TARGET_NEON)
#define HAVE_neon_vld1q_x2v2si (TARGET_NEON)
#define HAVE_neon_vld1_x2v4si (TARGET_NEON)
#define HAVE_neon_vld1q_x2v4si (TARGET_NEON)
#define HAVE_neon_vld1_x2v4hf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v4hf (TARGET_NEON)
#define HAVE_neon_vld1_x2v8hf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v8hf (TARGET_NEON)
#define HAVE_neon_vld1_x2v4bf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v4bf (TARGET_NEON)
#define HAVE_neon_vld1_x2v8bf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v8bf (TARGET_NEON)
#define HAVE_neon_vld1_x2v2sf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v2sf (TARGET_NEON)
#define HAVE_neon_vld1_x2v4sf (TARGET_NEON)
#define HAVE_neon_vld1q_x2v4sf (TARGET_NEON)
#define HAVE_neon_vld1_x2di (TARGET_NEON)
#define HAVE_neon_vld1q_x2di (TARGET_NEON)
#define HAVE_neon_vld1_x2v2di (TARGET_NEON)
#define HAVE_neon_vld1q_x2v2di (TARGET_NEON)
#define HAVE_neon_vld1_x3v8qi (TARGET_NEON)
#define HAVE_neon_vld1_x3v16qi (TARGET_NEON)
#define HAVE_neon_vld1_x3v4hi (TARGET_NEON)
#define HAVE_neon_vld1_x3v8hi (TARGET_NEON)
#define HAVE_neon_vld1_x3v2si (TARGET_NEON)
#define HAVE_neon_vld1_x3v4si (TARGET_NEON)
#define HAVE_neon_vld1_x3v4hf (TARGET_NEON)
#define HAVE_neon_vld1_x3v8hf (TARGET_NEON)
#define HAVE_neon_vld1_x3v4bf (TARGET_NEON)
#define HAVE_neon_vld1_x3v8bf (TARGET_NEON)
#define HAVE_neon_vld1_x3v2sf (TARGET_NEON)
#define HAVE_neon_vld1_x3v4sf (TARGET_NEON)
#define HAVE_neon_vld1_x3di (TARGET_NEON)
#define HAVE_neon_vld1_x3v2di (TARGET_NEON)
#define HAVE_neon_vld1x3qav16qi (TARGET_NEON)
#define HAVE_neon_vld1x3qav8hi (TARGET_NEON)
#define HAVE_neon_vld1x3qav8hf (TARGET_NEON)
#define HAVE_neon_vld1x3qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1x3qav4si (TARGET_NEON)
#define HAVE_neon_vld1x3qav4sf (TARGET_NEON)
#define HAVE_neon_vld1x3qav2di (TARGET_NEON)
#define HAVE_neon_vld1x3qbv16qi (TARGET_NEON)
#define HAVE_neon_vld1x3qbv8hi (TARGET_NEON)
#define HAVE_neon_vld1x3qbv8hf (TARGET_NEON)
#define HAVE_neon_vld1x3qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1x3qbv4si (TARGET_NEON)
#define HAVE_neon_vld1x3qbv4sf (TARGET_NEON)
#define HAVE_neon_vld1x3qbv2di (TARGET_NEON)
#define HAVE_neon_vld1_x4v8qi (TARGET_NEON)
#define HAVE_neon_vld1_x4v16qi (TARGET_NEON)
#define HAVE_neon_vld1_x4v4hi (TARGET_NEON)
#define HAVE_neon_vld1_x4v8hi (TARGET_NEON)
#define HAVE_neon_vld1_x4v2si (TARGET_NEON)
#define HAVE_neon_vld1_x4v4si (TARGET_NEON)
#define HAVE_neon_vld1_x4v4hf (TARGET_NEON)
#define HAVE_neon_vld1_x4v8hf (TARGET_NEON)
#define HAVE_neon_vld1_x4v4bf (TARGET_NEON)
#define HAVE_neon_vld1_x4v8bf (TARGET_NEON)
#define HAVE_neon_vld1_x4v2sf (TARGET_NEON)
#define HAVE_neon_vld1_x4v4sf (TARGET_NEON)
#define HAVE_neon_vld1_x4di (TARGET_NEON)
#define HAVE_neon_vld1_x4v2di (TARGET_NEON)
#define HAVE_neon_vld1x4qav16qi (TARGET_NEON)
#define HAVE_neon_vld1x4qav8hi (TARGET_NEON)
#define HAVE_neon_vld1x4qav8hf (TARGET_NEON)
#define HAVE_neon_vld1x4qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1x4qav4si (TARGET_NEON)
#define HAVE_neon_vld1x4qav4sf (TARGET_NEON)
#define HAVE_neon_vld1x4qav2di (TARGET_NEON)
#define HAVE_neon_vld1x4qbv16qi (TARGET_NEON)
#define HAVE_neon_vld1x4qbv8hi (TARGET_NEON)
#define HAVE_neon_vld1x4qbv8hf (TARGET_NEON)
#define HAVE_neon_vld1x4qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1x4qbv4si (TARGET_NEON)
#define HAVE_neon_vld1x4qbv4sf (TARGET_NEON)
#define HAVE_neon_vld1x4qbv2di (TARGET_NEON)
#define HAVE_neon_vld1_lanev8qi (TARGET_NEON)
#define HAVE_neon_vld1_lanev4hi (TARGET_NEON)
#define HAVE_neon_vld1_lanev4hf (TARGET_NEON)
#define HAVE_neon_vld1_lanev4bf (TARGET_NEON)
#define HAVE_neon_vld1_lanev2si (TARGET_NEON)
#define HAVE_neon_vld1_lanev2sf (TARGET_NEON)
#define HAVE_neon_vld1_lanedi (TARGET_NEON)
#define HAVE_neon_vld1_lanev16qi (TARGET_NEON)
#define HAVE_neon_vld1_lanev8hi (TARGET_NEON)
#define HAVE_neon_vld1_lanev8hf (TARGET_NEON)
#define HAVE_neon_vld1_lanev8bf (TARGET_NEON)
#define HAVE_neon_vld1_lanev4si (TARGET_NEON)
#define HAVE_neon_vld1_lanev4sf (TARGET_NEON)
#define HAVE_neon_vld1_lanev2di (TARGET_NEON)
#define HAVE_neon_vld1_dupv8qi (TARGET_NEON)
#define HAVE_neon_vld1_dupv4hi (TARGET_NEON)
#define HAVE_neon_vld1_dupv4hf (TARGET_NEON)
#define HAVE_neon_vld1_dupv4bf (TARGET_NEON)
#define HAVE_neon_vld1_dupv2si (TARGET_NEON)
#define HAVE_neon_vld1_dupv2sf (TARGET_NEON)
#define HAVE_neon_vld1_dupv16qi (TARGET_NEON)
#define HAVE_neon_vld1_dupv8hi (TARGET_NEON)
#define HAVE_neon_vld1_dupv8hf (TARGET_NEON)
#define HAVE_neon_vld1_dupv4si (TARGET_NEON)
#define HAVE_neon_vld1_dupv4sf (TARGET_NEON)
#define HAVE_neon_vld1_dupv2di (TARGET_NEON)
#define HAVE_neon_vst1v8qi (TARGET_NEON)
#define HAVE_neon_vst1v16qi (TARGET_NEON)
#define HAVE_neon_vst1v4hi (TARGET_NEON)
#define HAVE_neon_vst1v8hi (TARGET_NEON)
#define HAVE_neon_vst1v2si (TARGET_NEON)
#define HAVE_neon_vst1v4si (TARGET_NEON)
#define HAVE_neon_vst1v4hf (TARGET_NEON)
#define HAVE_neon_vst1v8hf (TARGET_NEON)
#define HAVE_neon_vst1v4bf (TARGET_NEON)
#define HAVE_neon_vst1v8bf (TARGET_NEON)
#define HAVE_neon_vst1v2sf (TARGET_NEON)
#define HAVE_neon_vst1v4sf (TARGET_NEON)
#define HAVE_neon_vst1di (TARGET_NEON)
#define HAVE_neon_vst1v2di (TARGET_NEON)
#define HAVE_neon_vst1_x2v8qi (TARGET_NEON)
#define HAVE_neon_vst1q_x2v8qi (TARGET_NEON)
#define HAVE_neon_vst1_x2v16qi (TARGET_NEON)
#define HAVE_neon_vst1q_x2v16qi (TARGET_NEON)
#define HAVE_neon_vst1_x2v4hi (TARGET_NEON)
#define HAVE_neon_vst1q_x2v4hi (TARGET_NEON)
#define HAVE_neon_vst1_x2v8hi (TARGET_NEON)
#define HAVE_neon_vst1q_x2v8hi (TARGET_NEON)
#define HAVE_neon_vst1_x2v2si (TARGET_NEON)
#define HAVE_neon_vst1q_x2v2si (TARGET_NEON)
#define HAVE_neon_vst1_x2v4si (TARGET_NEON)
#define HAVE_neon_vst1q_x2v4si (TARGET_NEON)
#define HAVE_neon_vst1_x2v4hf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v4hf (TARGET_NEON)
#define HAVE_neon_vst1_x2v8hf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v8hf (TARGET_NEON)
#define HAVE_neon_vst1_x2v4bf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v4bf (TARGET_NEON)
#define HAVE_neon_vst1_x2v8bf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v8bf (TARGET_NEON)
#define HAVE_neon_vst1_x2v2sf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v2sf (TARGET_NEON)
#define HAVE_neon_vst1_x2v4sf (TARGET_NEON)
#define HAVE_neon_vst1q_x2v4sf (TARGET_NEON)
#define HAVE_neon_vst1_x2di (TARGET_NEON)
#define HAVE_neon_vst1q_x2di (TARGET_NEON)
#define HAVE_neon_vst1_x2v2di (TARGET_NEON)
#define HAVE_neon_vst1q_x2v2di (TARGET_NEON)
#define HAVE_neon_vst1_x3v8qi (TARGET_NEON)
#define HAVE_neon_vst1_x3v16qi (TARGET_NEON)
#define HAVE_neon_vst1_x3v4hi (TARGET_NEON)
#define HAVE_neon_vst1_x3v8hi (TARGET_NEON)
#define HAVE_neon_vst1_x3v2si (TARGET_NEON)
#define HAVE_neon_vst1_x3v4si (TARGET_NEON)
#define HAVE_neon_vst1_x3v4hf (TARGET_NEON)
#define HAVE_neon_vst1_x3v8hf (TARGET_NEON)
#define HAVE_neon_vst1_x3v4bf (TARGET_NEON)
#define HAVE_neon_vst1_x3v8bf (TARGET_NEON)
#define HAVE_neon_vst1_x3v2sf (TARGET_NEON)
#define HAVE_neon_vst1_x3v4sf (TARGET_NEON)
#define HAVE_neon_vst1_x3di (TARGET_NEON)
#define HAVE_neon_vst1_x3v2di (TARGET_NEON)
#define HAVE_neon_vst1x3qav8qi (TARGET_NEON)
#define HAVE_neon_vst1x3qav16qi (TARGET_NEON)
#define HAVE_neon_vst1x3qav4hi (TARGET_NEON)
#define HAVE_neon_vst1x3qav8hi (TARGET_NEON)
#define HAVE_neon_vst1x3qav2si (TARGET_NEON)
#define HAVE_neon_vst1x3qav4si (TARGET_NEON)
#define HAVE_neon_vst1x3qav4hf (TARGET_NEON)
#define HAVE_neon_vst1x3qav8hf (TARGET_NEON)
#define HAVE_neon_vst1x3qav4bf (TARGET_NEON)
#define HAVE_neon_vst1x3qav8bf (TARGET_NEON)
#define HAVE_neon_vst1x3qav2sf (TARGET_NEON)
#define HAVE_neon_vst1x3qav4sf (TARGET_NEON)
#define HAVE_neon_vst1x3qadi (TARGET_NEON)
#define HAVE_neon_vst1x3qav2di (TARGET_NEON)
#define HAVE_neon_vst1x3qbv8qi (TARGET_NEON)
#define HAVE_neon_vst1x3qbv16qi (TARGET_NEON)
#define HAVE_neon_vst1x3qbv4hi (TARGET_NEON)
#define HAVE_neon_vst1x3qbv8hi (TARGET_NEON)
#define HAVE_neon_vst1x3qbv2si (TARGET_NEON)
#define HAVE_neon_vst1x3qbv4si (TARGET_NEON)
#define HAVE_neon_vst1x3qbv4hf (TARGET_NEON)
#define HAVE_neon_vst1x3qbv8hf (TARGET_NEON)
#define HAVE_neon_vst1x3qbv4bf (TARGET_NEON)
#define HAVE_neon_vst1x3qbv8bf (TARGET_NEON)
#define HAVE_neon_vst1x3qbv2sf (TARGET_NEON)
#define HAVE_neon_vst1x3qbv4sf (TARGET_NEON)
#define HAVE_neon_vst1x3qbdi (TARGET_NEON)
#define HAVE_neon_vst1x3qbv2di (TARGET_NEON)
#define HAVE_neon_vst1_x4v8qi (TARGET_NEON)
#define HAVE_neon_vst1_x4v16qi (TARGET_NEON)
#define HAVE_neon_vst1_x4v4hi (TARGET_NEON)
#define HAVE_neon_vst1_x4v8hi (TARGET_NEON)
#define HAVE_neon_vst1_x4v2si (TARGET_NEON)
#define HAVE_neon_vst1_x4v4si (TARGET_NEON)
#define HAVE_neon_vst1_x4v4hf (TARGET_NEON)
#define HAVE_neon_vst1_x4v8hf (TARGET_NEON)
#define HAVE_neon_vst1_x4v4bf (TARGET_NEON)
#define HAVE_neon_vst1_x4v8bf (TARGET_NEON)
#define HAVE_neon_vst1_x4v2sf (TARGET_NEON)
#define HAVE_neon_vst1_x4v4sf (TARGET_NEON)
#define HAVE_neon_vst1_x4di (TARGET_NEON)
#define HAVE_neon_vst1_x4v2di (TARGET_NEON)
#define HAVE_neon_vst1x4qav16qi (TARGET_NEON)
#define HAVE_neon_vst1x4qav8hi (TARGET_NEON)
#define HAVE_neon_vst1x4qav8hf (TARGET_NEON)
#define HAVE_neon_vst1x4qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst1x4qav4si (TARGET_NEON)
#define HAVE_neon_vst1x4qav4sf (TARGET_NEON)
#define HAVE_neon_vst1x4qav2di (TARGET_NEON)
#define HAVE_neon_vst1x4qbv16qi (TARGET_NEON)
#define HAVE_neon_vst1x4qbv8hi (TARGET_NEON)
#define HAVE_neon_vst1x4qbv8hf (TARGET_NEON)
#define HAVE_neon_vst1x4qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst1x4qbv4si (TARGET_NEON)
#define HAVE_neon_vst1x4qbv4sf (TARGET_NEON)
#define HAVE_neon_vst1x4qbv2di (TARGET_NEON)
#define HAVE_neon_vst1_lanev8qi (TARGET_NEON)
#define HAVE_neon_vst1_lanev4hi (TARGET_NEON)
#define HAVE_neon_vst1_lanev4hf (TARGET_NEON)
#define HAVE_neon_vst1_lanev4bf (TARGET_NEON)
#define HAVE_neon_vst1_lanev2si (TARGET_NEON)
#define HAVE_neon_vst1_lanev2sf (TARGET_NEON)
#define HAVE_neon_vst1_lanedi (TARGET_NEON)
#define HAVE_neon_vst1_lanev16qi (TARGET_NEON)
#define HAVE_neon_vst1_lanev8hi (TARGET_NEON)
#define HAVE_neon_vst1_lanev8hf (TARGET_NEON)
#define HAVE_neon_vst1_lanev8bf (TARGET_NEON)
#define HAVE_neon_vst1_lanev4si (TARGET_NEON)
#define HAVE_neon_vst1_lanev4sf (TARGET_NEON)
#define HAVE_neon_vst1_lanev2di (TARGET_NEON)
#define HAVE_neon_vld2v8qi (TARGET_NEON)
#define HAVE_neon_vld2v4hi (TARGET_NEON)
#define HAVE_neon_vld2v4hf (TARGET_NEON)
#define HAVE_neon_vld2v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld2v2si (TARGET_NEON)
#define HAVE_neon_vld2v2sf (TARGET_NEON)
#define HAVE_neon_vld2di (TARGET_NEON)
#define HAVE_neon_vld2v16qi (TARGET_NEON)
#define HAVE_neon_vld2v8hi (TARGET_NEON)
#define HAVE_neon_vld2v8hf (TARGET_NEON)
#define HAVE_neon_vld2v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld2v4si (TARGET_NEON)
#define HAVE_neon_vld2v4sf (TARGET_NEON)
#define HAVE_neon_vld2_lanev8qi (TARGET_NEON)
#define HAVE_neon_vld2_lanev4hi (TARGET_NEON)
#define HAVE_neon_vld2_lanev4hf (TARGET_NEON)
#define HAVE_neon_vld2_lanev4bf (TARGET_NEON)
#define HAVE_neon_vld2_lanev2si (TARGET_NEON)
#define HAVE_neon_vld2_lanev2sf (TARGET_NEON)
#define HAVE_neon_vld2_lanev8hi (TARGET_NEON)
#define HAVE_neon_vld2_lanev8hf (TARGET_NEON)
#define HAVE_neon_vld2_lanev4si (TARGET_NEON)
#define HAVE_neon_vld2_lanev4sf (TARGET_NEON)
#define HAVE_neon_vld2_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld2_dupv8qi (TARGET_NEON)
#define HAVE_neon_vld2_dupv4hi (TARGET_NEON)
#define HAVE_neon_vld2_dupv4hf (TARGET_NEON)
#define HAVE_neon_vld2_dupv4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld2_dupv2si (TARGET_NEON)
#define HAVE_neon_vld2_dupv2sf (TARGET_NEON)
#define HAVE_neon_vld2_dupdi (TARGET_NEON)
#define HAVE_neon_vld2_dupv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vst2v8qi (TARGET_NEON)
#define HAVE_neon_vst2v4hi (TARGET_NEON)
#define HAVE_neon_vst2v4hf (TARGET_NEON)
#define HAVE_neon_vst2v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst2v2si (TARGET_NEON)
#define HAVE_neon_vst2v2sf (TARGET_NEON)
#define HAVE_neon_vst2di (TARGET_NEON)
#define HAVE_neon_vst2v16qi (TARGET_NEON)
#define HAVE_neon_vst2v8hi (TARGET_NEON)
#define HAVE_neon_vst2v8hf (TARGET_NEON)
#define HAVE_neon_vst2v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst2v4si (TARGET_NEON)
#define HAVE_neon_vst2v4sf (TARGET_NEON)
#define HAVE_neon_vst2_lanev8qi (TARGET_NEON)
#define HAVE_neon_vst2_lanev4hi (TARGET_NEON)
#define HAVE_neon_vst2_lanev4hf (TARGET_NEON)
#define HAVE_neon_vst2_lanev4bf (TARGET_NEON)
#define HAVE_neon_vst2_lanev2si (TARGET_NEON)
#define HAVE_neon_vst2_lanev2sf (TARGET_NEON)
#define HAVE_neon_vst2_lanev8hi (TARGET_NEON)
#define HAVE_neon_vst2_lanev8hf (TARGET_NEON)
#define HAVE_neon_vst2_lanev4si (TARGET_NEON)
#define HAVE_neon_vst2_lanev4sf (TARGET_NEON)
#define HAVE_neon_vst2_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3v8qi (TARGET_NEON)
#define HAVE_neon_vld3v4hi (TARGET_NEON)
#define HAVE_neon_vld3v4hf (TARGET_NEON)
#define HAVE_neon_vld3v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3v2si (TARGET_NEON)
#define HAVE_neon_vld3v2sf (TARGET_NEON)
#define HAVE_neon_vld3di (TARGET_NEON)
#define HAVE_neon_vld3qav16qi (TARGET_NEON)
#define HAVE_neon_vld3qav8hi (TARGET_NEON)
#define HAVE_neon_vld3qav8hf (TARGET_NEON)
#define HAVE_neon_vld3qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3qav4si (TARGET_NEON)
#define HAVE_neon_vld3qav4sf (TARGET_NEON)
#define HAVE_neon_vld3qbv16qi (TARGET_NEON)
#define HAVE_neon_vld3qbv8hi (TARGET_NEON)
#define HAVE_neon_vld3qbv8hf (TARGET_NEON)
#define HAVE_neon_vld3qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3qbv4si (TARGET_NEON)
#define HAVE_neon_vld3qbv4sf (TARGET_NEON)
#define HAVE_neon_vld3_lanev8qi (TARGET_NEON)
#define HAVE_neon_vld3_lanev4hi (TARGET_NEON)
#define HAVE_neon_vld3_lanev4hf (TARGET_NEON)
#define HAVE_neon_vld3_lanev4bf (TARGET_NEON)
#define HAVE_neon_vld3_lanev2si (TARGET_NEON)
#define HAVE_neon_vld3_lanev2sf (TARGET_NEON)
#define HAVE_neon_vld3_lanev8hi (TARGET_NEON)
#define HAVE_neon_vld3_lanev8hf (TARGET_NEON)
#define HAVE_neon_vld3_lanev4si (TARGET_NEON)
#define HAVE_neon_vld3_lanev4sf (TARGET_NEON)
#define HAVE_neon_vld3_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3_dupv8qi (TARGET_NEON)
#define HAVE_neon_vld3_dupv4hi (TARGET_NEON)
#define HAVE_neon_vld3_dupv4hf (TARGET_NEON)
#define HAVE_neon_vld3_dupv4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3_dupv2si (TARGET_NEON)
#define HAVE_neon_vld3_dupv2sf (TARGET_NEON)
#define HAVE_neon_vld3_dupdi (TARGET_NEON)
#define HAVE_neon_vld3_dupv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vst3v8qi (TARGET_NEON)
#define HAVE_neon_vst3v4hi (TARGET_NEON)
#define HAVE_neon_vst3v4hf (TARGET_NEON)
#define HAVE_neon_vst3v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst3v2si (TARGET_NEON)
#define HAVE_neon_vst3v2sf (TARGET_NEON)
#define HAVE_neon_vst3di (TARGET_NEON)
#define HAVE_neon_vst3qav16qi (TARGET_NEON)
#define HAVE_neon_vst3qav8hi (TARGET_NEON)
#define HAVE_neon_vst3qav8hf (TARGET_NEON)
#define HAVE_neon_vst3qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst3qav4si (TARGET_NEON)
#define HAVE_neon_vst3qav4sf (TARGET_NEON)
#define HAVE_neon_vst3qbv16qi (TARGET_NEON)
#define HAVE_neon_vst3qbv8hi (TARGET_NEON)
#define HAVE_neon_vst3qbv8hf (TARGET_NEON)
#define HAVE_neon_vst3qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst3qbv4si (TARGET_NEON)
#define HAVE_neon_vst3qbv4sf (TARGET_NEON)
#define HAVE_neon_vst3_lanev8qi (TARGET_NEON)
#define HAVE_neon_vst3_lanev4hi (TARGET_NEON)
#define HAVE_neon_vst3_lanev4hf (TARGET_NEON)
#define HAVE_neon_vst3_lanev4bf (TARGET_NEON)
#define HAVE_neon_vst3_lanev2si (TARGET_NEON)
#define HAVE_neon_vst3_lanev2sf (TARGET_NEON)
#define HAVE_neon_vst3_lanev8hi (TARGET_NEON)
#define HAVE_neon_vst3_lanev8hf (TARGET_NEON)
#define HAVE_neon_vst3_lanev4si (TARGET_NEON)
#define HAVE_neon_vst3_lanev4sf (TARGET_NEON)
#define HAVE_neon_vst3_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4v8qi (TARGET_NEON)
#define HAVE_neon_vld4v4hi (TARGET_NEON)
#define HAVE_neon_vld4v4hf (TARGET_NEON)
#define HAVE_neon_vld4v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4v2si (TARGET_NEON)
#define HAVE_neon_vld4v2sf (TARGET_NEON)
#define HAVE_neon_vld4di (TARGET_NEON)
#define HAVE_neon_vld4qav16qi (TARGET_NEON)
#define HAVE_neon_vld4qav8hi (TARGET_NEON)
#define HAVE_neon_vld4qav8hf (TARGET_NEON)
#define HAVE_neon_vld4qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4qav4si (TARGET_NEON)
#define HAVE_neon_vld4qav4sf (TARGET_NEON)
#define HAVE_neon_vld4qbv16qi (TARGET_NEON)
#define HAVE_neon_vld4qbv8hi (TARGET_NEON)
#define HAVE_neon_vld4qbv8hf (TARGET_NEON)
#define HAVE_neon_vld4qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4qbv4si (TARGET_NEON)
#define HAVE_neon_vld4qbv4sf (TARGET_NEON)
#define HAVE_neon_vld4_lanev8qi (TARGET_NEON)
#define HAVE_neon_vld4_lanev4hi (TARGET_NEON)
#define HAVE_neon_vld4_lanev4hf (TARGET_NEON)
#define HAVE_neon_vld4_lanev4bf (TARGET_NEON)
#define HAVE_neon_vld4_lanev2si (TARGET_NEON)
#define HAVE_neon_vld4_lanev2sf (TARGET_NEON)
#define HAVE_neon_vld4_lanev8hi (TARGET_NEON)
#define HAVE_neon_vld4_lanev8hf (TARGET_NEON)
#define HAVE_neon_vld4_lanev4si (TARGET_NEON)
#define HAVE_neon_vld4_lanev4sf (TARGET_NEON)
#define HAVE_neon_vld4_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4_dupv8qi (TARGET_NEON)
#define HAVE_neon_vld4_dupv4hi (TARGET_NEON)
#define HAVE_neon_vld4_dupv4hf (TARGET_NEON)
#define HAVE_neon_vld4_dupv4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4_dupv2si (TARGET_NEON)
#define HAVE_neon_vld4_dupv2sf (TARGET_NEON)
#define HAVE_neon_vld4_dupdi (TARGET_NEON)
#define HAVE_neon_vld4_dupv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vst4v8qi (TARGET_NEON)
#define HAVE_neon_vst4v4hi (TARGET_NEON)
#define HAVE_neon_vst4v4hf (TARGET_NEON)
#define HAVE_neon_vst4v4bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst4v2si (TARGET_NEON)
#define HAVE_neon_vst4v2sf (TARGET_NEON)
#define HAVE_neon_vst4di (TARGET_NEON)
#define HAVE_neon_vst4qav16qi (TARGET_NEON)
#define HAVE_neon_vst4qav8hi (TARGET_NEON)
#define HAVE_neon_vst4qav8hf (TARGET_NEON)
#define HAVE_neon_vst4qav8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst4qav4si (TARGET_NEON)
#define HAVE_neon_vst4qav4sf (TARGET_NEON)
#define HAVE_neon_vst4qbv16qi (TARGET_NEON)
#define HAVE_neon_vst4qbv8hi (TARGET_NEON)
#define HAVE_neon_vst4qbv8hf (TARGET_NEON)
#define HAVE_neon_vst4qbv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst4qbv4si (TARGET_NEON)
#define HAVE_neon_vst4qbv4sf (TARGET_NEON)
#define HAVE_neon_vst4_lanev8qi (TARGET_NEON)
#define HAVE_neon_vst4_lanev4hi (TARGET_NEON)
#define HAVE_neon_vst4_lanev4hf (TARGET_NEON)
#define HAVE_neon_vst4_lanev4bf (TARGET_NEON)
#define HAVE_neon_vst4_lanev2si (TARGET_NEON)
#define HAVE_neon_vst4_lanev2sf (TARGET_NEON)
#define HAVE_neon_vst4_lanev8hi (TARGET_NEON)
#define HAVE_neon_vst4_lanev8hf (TARGET_NEON)
#define HAVE_neon_vst4_lanev4si (TARGET_NEON)
#define HAVE_neon_vst4_lanev4sf (TARGET_NEON)
#define HAVE_neon_vst4_lanev8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vec_unpacks_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacks_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacks_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacks_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacks_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacks_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_unpacku_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_smult_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_umult_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_sshiftl_v8qi (TARGET_NEON)
#define HAVE_neon_vec_ushiftl_v8qi (TARGET_NEON)
#define HAVE_neon_vec_sshiftl_v4hi (TARGET_NEON)
#define HAVE_neon_vec_ushiftl_v4hi (TARGET_NEON)
#define HAVE_neon_vec_sshiftl_v2si (TARGET_NEON)
#define HAVE_neon_vec_ushiftl_v2si (TARGET_NEON)
#define HAVE_neon_unpacks_v8qi (TARGET_NEON)
#define HAVE_neon_unpacku_v8qi (TARGET_NEON)
#define HAVE_neon_unpacks_v4hi (TARGET_NEON)
#define HAVE_neon_unpacku_v4hi (TARGET_NEON)
#define HAVE_neon_unpacks_v2si (TARGET_NEON)
#define HAVE_neon_unpacku_v2si (TARGET_NEON)
#define HAVE_neon_vec_smult_v8qi (TARGET_NEON)
#define HAVE_neon_vec_umult_v8qi (TARGET_NEON)
#define HAVE_neon_vec_smult_v4hi (TARGET_NEON)
#define HAVE_neon_vec_umult_v4hi (TARGET_NEON)
#define HAVE_neon_vec_smult_v2si (TARGET_NEON)
#define HAVE_neon_vec_umult_v2si (TARGET_NEON)
#define HAVE_vec_pack_trunc_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_pack_trunc_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_pack_trunc_v2di (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_pack_trunc_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_pack_trunc_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vec_pack_trunc_v2di (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vabdv4hf_2 ((ARM_HAVE_NEON_V4HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vabdv8hf_2 ((ARM_HAVE_NEON_V8HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vabdv2sf_2 (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_neon_vabdv4sf_2 (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_neon_vabdv4hf_3 ((ARM_HAVE_NEON_V4HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vabdv8hf_3 ((ARM_HAVE_NEON_V8HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_neon_vabdv2sf_3 (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_neon_vabdv4sf_3 (ARM_HAVE_NEON_V4SF_ARITH)
#define HAVE_neon_smmlav16qi (TARGET_I8MM)
#define HAVE_neon_ummlav16qi (TARGET_I8MM)
#define HAVE_neon_usmmlav16qi (TARGET_I8MM)
#define HAVE_neon_vbfdotv2sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfdotv4sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfdot_lanev4bfv2sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfdot_lanev4bfv4sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfdot_lanev8bfv2sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfdot_lanev8bfv4sf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtv4sfv4bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtv4sfv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtv4sf_highv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtsf (TARGET_BF16_FP)
#define HAVE_neon_vbfcvtv4bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvt_highv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vbfcvtbf_cvtmodev2si (TARGET_BF16_FP)
#define HAVE_neon_vbfcvtbf_cvtmodesf (TARGET_BF16_FP)
#define HAVE_neon_vmmlav8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vfmabv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vfmatv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vfmab_lanev8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vfmat_lanev8bf (TARGET_BF16_SIMD)
#define HAVE_crypto_aesmc (TARGET_CRYPTO)
#define HAVE_crypto_aesimc (TARGET_CRYPTO)
#define HAVE_aes_op_protect (TARGET_CRYPTO && fix_aes_erratum_1742098)
#define HAVE_aes_op_protect_neon_vld1v16qi (TARGET_NEON)
#define HAVE_crypto_sha1su1 (TARGET_CRYPTO)
#define HAVE_crypto_sha256su0 (TARGET_CRYPTO)
#define HAVE_crypto_sha1su0 (TARGET_CRYPTO)
#define HAVE_crypto_sha256h (TARGET_CRYPTO)
#define HAVE_crypto_sha256h2 (TARGET_CRYPTO)
#define HAVE_crypto_sha256su1 (TARGET_CRYPTO)
#define HAVE_crypto_sha1h_lb (TARGET_CRYPTO && INTVAL (operands[2]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
#define HAVE_crypto_vmullp64 (TARGET_CRYPTO)
#define HAVE_crypto_sha1c_lb (TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
#define HAVE_crypto_sha1m_lb (TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
#define HAVE_crypto_sha1p_lb (TARGET_CRYPTO && INTVAL (operands[4]) == NEON_ENDIAN_LANE_N (V2SImode, 0))
#define HAVE_arm_atomic_loadqi 1
#define HAVE_arm_atomic_loadhi 1
#define HAVE_arm_atomic_loadsi 1
#define HAVE_arm_atomic_load_acquireqi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_load_acquirehi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_load_acquiresi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_storeqi 1
#define HAVE_arm_atomic_storehi 1
#define HAVE_arm_atomic_storesi 1
#define HAVE_arm_atomic_store_releaseqi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_store_releasehi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_store_releasesi (TARGET_HAVE_LDACQ)
#define HAVE_arm_atomic_loaddi2_ldrd (ARM_DOUBLEWORD_ALIGN && TARGET_HAVE_LPAE)
#define HAVE_atomic_compare_and_swap32qi_1 ((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT))
#define HAVE_atomic_compare_and_swapt1qi_1 ((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1))
#define HAVE_atomic_compare_and_swap32hi_1 ((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT))
#define HAVE_atomic_compare_and_swapt1hi_1 ((TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1))
#define HAVE_atomic_compare_and_swap32si_1 ((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT))
#define HAVE_atomic_compare_and_swapt1si_1 ((TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1))
#define HAVE_atomic_compare_and_swap32di_1 ((TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_32BIT))
#define HAVE_atomic_compare_and_swapt1di_1 ((TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER) && (TARGET_THUMB1))
#define HAVE_atomic_exchangeqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_exchangehi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_exchangesi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_exchangedi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_addqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_subqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_orqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xorqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_andqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_addhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_subhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_orhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xorhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_andhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_addsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_subsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_orsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xorsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_andsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_adddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_subdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_ordi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xordi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_anddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nandqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nandhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nandsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nanddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_addqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_subqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_orqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_xorqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_andqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_addhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_subhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_orhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_xorhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_andhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_addsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_subsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_orsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_xorsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_andsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_adddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_subdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_ordi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_xordi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_anddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_nandqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_nandhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_nandsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_fetch_nanddi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_add_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_sub_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_or_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xor_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_and_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_add_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_sub_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_or_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xor_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_and_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_add_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_sub_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_or_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xor_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_and_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_add_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_sub_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_or_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_xor_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_and_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nand_fetchqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nand_fetchhi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nand_fetchsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_nand_fetchdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_arm_load_exclusiveqi (TARGET_HAVE_LDREXBH)
#define HAVE_arm_load_exclusivehi (TARGET_HAVE_LDREXBH)
#define HAVE_arm_load_acquire_exclusiveqi (TARGET_HAVE_LDACQ)
#define HAVE_arm_load_acquire_exclusivehi (TARGET_HAVE_LDACQ)
#define HAVE_arm_load_exclusivesi (TARGET_HAVE_LDREX)
#define HAVE_arm_load_acquire_exclusivesi (TARGET_HAVE_LDACQ)
#define HAVE_arm_load_exclusivedi (TARGET_HAVE_LDREXD)
#define HAVE_arm_load_acquire_exclusivedi (TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
#define HAVE_arm_store_exclusiveqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_arm_store_exclusivehi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_arm_store_exclusivesi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_arm_store_exclusivedi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_arm_store_release_exclusivedi (TARGET_HAVE_LDACQEXD && ARM_DOUBLEWORD_ALIGN)
#define HAVE_arm_store_release_exclusiveqi (TARGET_HAVE_LDACQ)
#define HAVE_arm_store_release_exclusivehi (TARGET_HAVE_LDACQ)
#define HAVE_arm_store_release_exclusivesi (TARGET_HAVE_LDACQ)
#define HAVE_addqq3 (TARGET_32BIT)
#define HAVE_addhq3 (TARGET_32BIT)
#define HAVE_addsq3 (TARGET_32BIT)
#define HAVE_adduqq3 (TARGET_32BIT)
#define HAVE_adduhq3 (TARGET_32BIT)
#define HAVE_addusq3 (TARGET_32BIT)
#define HAVE_addha3 (TARGET_32BIT)
#define HAVE_addsa3 (TARGET_32BIT)
#define HAVE_adduha3 (TARGET_32BIT)
#define HAVE_addusa3 (TARGET_32BIT)
#define HAVE_usaddv4uqq3 (TARGET_INT_SIMD)
#define HAVE_usaddv2uhq3 (TARGET_INT_SIMD)
#define HAVE_usadduqq3 (TARGET_INT_SIMD)
#define HAVE_usadduhq3 (TARGET_INT_SIMD)
#define HAVE_usaddv2uha3 (TARGET_INT_SIMD)
#define HAVE_usadduha3 (TARGET_INT_SIMD)
#define HAVE_subqq3 (TARGET_32BIT)
#define HAVE_subhq3 (TARGET_32BIT)
#define HAVE_subsq3 (TARGET_32BIT)
#define HAVE_subuqq3 (TARGET_32BIT)
#define HAVE_subuhq3 (TARGET_32BIT)
#define HAVE_subusq3 (TARGET_32BIT)
#define HAVE_subha3 (TARGET_32BIT)
#define HAVE_subsa3 (TARGET_32BIT)
#define HAVE_subuha3 (TARGET_32BIT)
#define HAVE_subusa3 (TARGET_32BIT)
#define HAVE_ussubv4uqq3 (TARGET_INT_SIMD)
#define HAVE_ussubv2uhq3 (TARGET_INT_SIMD)
#define HAVE_ussubuqq3 (TARGET_INT_SIMD)
#define HAVE_ussubuhq3 (TARGET_INT_SIMD)
#define HAVE_ussubv2uha3 (TARGET_INT_SIMD)
#define HAVE_ussubuha3 (TARGET_INT_SIMD)
#define HAVE_arm_ssatsihi_shift (TARGET_32BIT && arm_arch6 && !ARM_Q_BIT_READ)
#define HAVE_arm_usatsihi (TARGET_INT_SIMD && !ARM_Q_BIT_READ)
#define HAVE_mve_movv16qi (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv8hi (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv4si (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv2di (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movti (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv8hf (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv4sf (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_movv2df (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_nv16qi (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_nv8hi (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_nv4si (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_nv8hf (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_nv4sf (TARGET_HAVE_MVE || TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vst4qv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x16QImode)))
#define HAVE_mve_vst4qv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HImode)))
#define HAVE_mve_vst4qv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SImode)))
#define HAVE_mve_vst4qv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HFmode)))
#define HAVE_mve_vst4qv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SFmode)))
#define HAVE_mve_vrndq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndaq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndmq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndnq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndpq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndxq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndaq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndmq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndnq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndpq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndxq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev64q_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev64q_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabsq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vnegq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabsq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vnegq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev32q_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtbq_f32_f16v4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvttq_f32_f16v4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_to_f_sv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_to_f_uv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_to_f_sv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_to_f_uv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev64q_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtq_from_f_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_from_f_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_from_f_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_from_f_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabsq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtaq_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmvnq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrev16q_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev16q_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddlvq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddlvq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vctp8qv16bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp16qv8bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp32qv4bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp64qv2qi (TARGET_HAVE_MVE)
#define HAVE_mve_vpnotv16bi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbrsrq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_to_f_sv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_to_f_uv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_to_f_sv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_to_f_uv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcreateq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcreateq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcreateq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_uv2di (TARGET_HAVE_MVE)
#define HAVE_mve_vcreateq_sv2di (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv16qi_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv8hi_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_sv4si_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv16qi_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv8hi_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_n_uv4si_imm (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtq_n_from_f_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_from_f_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_from_f_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_n_from_f_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddlvq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddlvq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_n_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_n_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_n_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddqv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubqv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulqv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddqv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubqv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulqv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddqv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubqv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulqv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_r_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_r_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabdq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddlvaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddlvaq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vandq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vandq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbicq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbicq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot90_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot270_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot90_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot180_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot270_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot90_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot270_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot90_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot180_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot270_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vctp8q_mv16bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp16q_mv8bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp32q_mv4bi (TARGET_HAVE_MVE)
#define HAVE_mve_vctp64q_mv2qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtbq_f16_f32v8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvttq_f16_f32v8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_veorq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_veorq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmaq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmaq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmaq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmaq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmavq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmvq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmavq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmvq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmavq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmvq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmavq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmvq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmlaldavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovunbq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovuntq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovunbq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovuntq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vornq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vornq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vorrq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vorrq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbicq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_poly_pv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_poly_pv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_poly_pv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_poly_pv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_m_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_m_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_m_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_m_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_m_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_m_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_m_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_m_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_m_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtaq_m_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_m_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtmq_m_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_m_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtnq_m_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_m_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtpq_m_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_to_f_sv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_to_f_uv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_to_f_sv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_to_f_uv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vqrshrnbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrunbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshruntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrunbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshruntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrunbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshruntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrunbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshruntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclsq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vnegq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqabsq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqnegq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddvaq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpcsq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpeqq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgeq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpgtq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmphiq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpleq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpltq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmpneq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vdupq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxaq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminaq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxvq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminvq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_sv2di (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_uv2di (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_r_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_r_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabsq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vnegq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndaq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndmq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndnq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndpq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndxq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabsq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vnegq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndaq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndmq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndnq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndpq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrndxq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddlvaq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddlvaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcmlaq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot90_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot180_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot270_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot90_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot180_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot270_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpeqq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgeq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpgtq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpleq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpltq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmpneq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtbq_m_f16_f32v8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvttq_m_f16_f32v8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtbq_m_f32_f16v4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvttq_m_f32_f16v4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vdupq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmsq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmsq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmasq_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmasq_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmaq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmaq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmaq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmaq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmavq_p_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmvq_p_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmavq_p_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmvq_p_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmavq_p_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmvq_p_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmavq_p_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmvq_p_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmlaldavaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaxq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaxq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovlbq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovltq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovunbq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovuntq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovnbq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmovntq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovnbq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovntq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovunbq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqmovuntq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vpselq_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vpselq_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev32q_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev32q_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev32q_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev64q_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev64q_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrmlaldavhq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtq_m_n_from_f_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_from_f_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_from_f_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_from_f_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vrev16q_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrev16q_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtq_m_from_f_uv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_from_f_sv8hi (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_from_f_uv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_from_f_sv4si (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabavq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabavq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshluq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsriq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcvtq_m_n_to_f_uv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_to_f_sv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_to_f_uv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcvtq_m_n_to_f_sv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabdq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmaxq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vminq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulhq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmladhxq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlsdhxq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmladhxq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlsdhxq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshlq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrhaddq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmulhq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshlq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vaddq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsubq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbrsrq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_m_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_m_v16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_m_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_m_v8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot90_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhcaddq_rot270_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot90_m_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vcaddq_rot270_m_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhaddq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vhsubq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlasq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlahq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmlashq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlahq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmlashq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqaddq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqsubq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulhq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrdmulhq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_p_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsdavaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmladavaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_int_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_int_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshlq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsliq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_p_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaxq_p_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlaldavaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vmlsldavaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrunbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshruntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrunbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqshruntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrnbq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrntq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshrunbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqrshruntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrnbq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrntq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshrunbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqshruntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrnbq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrshrntq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrnbq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshrntq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaq_p_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlaldavhaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhaq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vrmlsldavhaxq_p_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_m_n_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshllbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlltq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_poly_m_pv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_poly_m_pv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmullbq_poly_m_pv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmulltq_poly_m_pv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_m_n_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_m_n_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmullbq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vqdmulltq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vabdq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmsq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vabdq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmsq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmaxnmq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vminnmq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmasq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vaddq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmaq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vfmasq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vmulq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vsubq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vandq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbicq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_veorq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vornq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vorrq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vandq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbicq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_veorq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vornq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vorrq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbrsrq_m_n_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vbrsrq_m_n_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot90_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot270_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot90_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot180_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot270_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot90_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcaddq_rot270_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot90_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot180_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmulq_rot270_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot90_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot180_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot270_m_fv8hf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot90_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot180_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vcmlaq_rot270_m_fv4sf (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)
#define HAVE_mve_vstrq_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vstrq_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_p_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vstrq_p_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_p_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_p_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_p_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_truncate_v8qi (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_truncate_v4qi (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_truncate_v4hi (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_p_truncate_v8qi (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_p_truncate_v4qi (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_p_truncate_v4hi (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vldrq_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_z_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vldrq_z_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_z_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_z_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_z_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_extend_v8qis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_extend_v8qiu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_extend_v4qis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_extend_v4qiu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_extend_v4his (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_extend_v4hiu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v8qis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v8qiu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v4qis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v4qiu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v4his (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_z_extend_v4hiu (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_scatter_offset_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vstrq_scatter_offset_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_scatter_offset_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_offset_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_scatter_offset_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_offset_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vstrq_scatter_offset_p_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vstrq_scatter_offset_p_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_scatter_offset_p_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_offset_p_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_scatter_offset_p_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_offset_p_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_v8qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_v4qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_v4hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_p_v8qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_p_v4qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vstrq_truncate_scatter_offset_p_v4hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_base_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_offset_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vldrq_gather_offset_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_gather_offset_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_offset_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v8qis ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v8qiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v4qis ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v4qiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v4his ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_extend_v4hiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_z_v16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vldrq_gather_offset_z_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_z_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_z_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_gather_offset_z_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_offset_z_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v8qis ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v8qiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v4qis ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v4qiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v4his ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_offset_z_extend_v4hiu ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_p_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_p_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_base_p_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_base_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_base_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_base_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_base_z_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_base_z_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_base_z_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_gather_shifted_offset_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_shifted_offset_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_extend_v4sis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_gather_shifted_offset_extend_v4siu (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_gather_shifted_offset_z_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_z_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_z_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vldrq_gather_shifted_offset_z_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_shifted_offset_z_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_shifted_offset_z_extend_v4sis (TARGET_HAVE_MVE)
#define HAVE_mve_vldrq_gather_shifted_offset_z_extend_v4siu (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_scatter_shifted_offset_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vstrq_truncate_scatter_shifted_offset_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_scatter_shifted_offset_p_v8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_p_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_p_v8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_p_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_shifted_offset_p_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vstrq_truncate_scatter_shifted_offset_p_v4si (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_m_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_m_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_m_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_m_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vidupq_m_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vddupq_m_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_m_wb_uv16qi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_m_wb_uv8hi_insn (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vdwdupq_m_wb_uv4si_insn (TARGET_HAVE_MVE)
#define HAVE_mve_vstrq_scatter_base_wb_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_wb_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_base_wb_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vstrq_scatter_base_wb_p_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vstrq_scatter_base_wb_p_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vstrq_scatter_base_wb_p_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_base_wb_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_base_wb_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_base_wb_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_mve_vldrq_gather_base_wb_z_v4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vldrq_gather_base_wb_z_v4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vldrq_gather_base_wb_z_v2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_get_fpscr_nzcvqc (TARGET_HAVE_MVE)
#define HAVE_set_fpscr_nzcvqc (TARGET_HAVE_MVE)
#define HAVE_mve_vadciq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadciq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbciq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbciq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadciq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadciq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbciq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbciq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadcq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadcq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbcq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbcq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadcq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vadcq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbcq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vsbcq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vst2qv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x16QImode)))
#define HAVE_mve_vst2qv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HImode)))
#define HAVE_mve_vst2qv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SImode)))
#define HAVE_mve_vst2qv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HFmode)))
#define HAVE_mve_vst2qv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SFmode)))
#define HAVE_mve_vld2qv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x16QImode)))
#define HAVE_mve_vld2qv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HImode)))
#define HAVE_mve_vld2qv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SImode)))
#define HAVE_mve_vld2qv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HFmode)))
#define HAVE_mve_vld2qv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SFmode)))
#define HAVE_mve_vld4qv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x16QImode)))
#define HAVE_mve_vld4qv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HImode)))
#define HAVE_mve_vld4qv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SImode)))
#define HAVE_mve_vld4qv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HFmode)))
#define HAVE_mve_vld4qv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SFmode)))
#define HAVE_mve_vec_extractv16qiqi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vec_extractv8hihi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vec_extractv4sisi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vec_extractv8hfhf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vec_extractv4sfsf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vec_extractv2didi (TARGET_HAVE_MVE)
#define HAVE_mve_vec_setv16qi_internal ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_mve_vec_setv8hi_internal ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_mve_vec_setv8hf_internal ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_mve_vec_setv4si_internal ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_mve_vec_setv4sf_internal ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_mve_vec_setv2di_internal (TARGET_HAVE_MVE)
#define HAVE_mve_uqrshll_sat64_di (TARGET_HAVE_MVE)
#define HAVE_mve_uqrshll_sat48_di (TARGET_HAVE_MVE)
#define HAVE_mve_sqrshrl_sat64_di (TARGET_HAVE_MVE)
#define HAVE_mve_sqrshrl_sat48_di (TARGET_HAVE_MVE)
#define HAVE_mve_uqrshl_si (TARGET_HAVE_MVE)
#define HAVE_mve_sqrshr_si (TARGET_HAVE_MVE)
#define HAVE_mve_uqshll_di (TARGET_HAVE_MVE)
#define HAVE_mve_urshrl_di (TARGET_HAVE_MVE)
#define HAVE_mve_uqshl_si (TARGET_HAVE_MVE)
#define HAVE_mve_urshr_si (TARGET_HAVE_MVE)
#define HAVE_mve_sqshl_si (TARGET_HAVE_MVE)
#define HAVE_mve_srshr_si (TARGET_HAVE_MVE)
#define HAVE_mve_srshrl_di (TARGET_HAVE_MVE)
#define HAVE_mve_sqshll_di (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vshlcq_m_uv4si (TARGET_HAVE_MVE)
#define HAVE_arm_vcx1qv16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx1qav16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx2qv16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx2qav16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx3qv16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx3qav16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx1q_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx1qa_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx2q_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx2qa_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx3q_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_arm_vcx3qa_p_v16qi (TARGET_CDE && TARGET_HAVE_MVE)
#define HAVE_movmisalignv16qi_mve_store (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hi_mve_store (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4si_mve_store (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hf_mve_store (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4sf_mve_store (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv16qi_mve_load (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hi_mve_load (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4si_mve_load (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hf_mve_load (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4sf_mve_load (((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode))) \
   && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_predicated_doloop_end_internal16 (TARGET_HAVE_MVE)
#define HAVE_predicated_doloop_end_internal8 (TARGET_HAVE_MVE)
#define HAVE_predicated_doloop_end_internal4 (TARGET_HAVE_MVE)
#define HAVE_predicated_doloop_end_internal2 (TARGET_HAVE_MVE)
#define HAVE_dlstp8_insn (TARGET_HAVE_MVE)
#define HAVE_dlstp16_insn (TARGET_HAVE_MVE)
#define HAVE_dlstp32_insn (TARGET_HAVE_MVE)
#define HAVE_dlstp64_insn (TARGET_HAVE_MVE)
#define HAVE_adddi3 1
#define HAVE_addvsi4 (TARGET_32BIT)
#define HAVE_addvdi4 (TARGET_32BIT)
#define HAVE_addsi3_cin_vout_reg (TARGET_32BIT)
#define HAVE_addsi3_cin_vout_imm (TARGET_32BIT)
#define HAVE_addsi3_cin_vout_0 (TARGET_32BIT)
#define HAVE_uaddvsi4 (TARGET_32BIT)
#define HAVE_uaddvdi4 (TARGET_32BIT)
#define HAVE_addsi3_cin_cout_reg (TARGET_32BIT)
#define HAVE_addsi3_cin_cout_imm (TARGET_32BIT)
#define HAVE_addsi3_cin_cout_0 (TARGET_32BIT)
#define HAVE_addsi3 1
#define HAVE_subvsi4 (TARGET_32BIT)
#define HAVE_subvdi4 (TARGET_32BIT)
#define HAVE_usubvsi4 (TARGET_32BIT)
#define HAVE_usubvdi4 (TARGET_32BIT)
#define HAVE_addsf3 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_adddf3 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_subsf3 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_subdf3 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_mulhi3 (TARGET_DSP_MULTIPLY)
#define HAVE_mulsi3 1
#define HAVE_mulsidi3 (TARGET_32BIT)
#define HAVE_umulsidi3 (TARGET_32BIT)
#define HAVE_maddsidi4 (TARGET_32BIT)
#define HAVE_umaddsidi4 (TARGET_32BIT)
#define HAVE_smulsi3_highpart (TARGET_32BIT)
#define HAVE_umulsi3_highpart (TARGET_32BIT)
#define HAVE_maddhisi4 (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlabb (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlatb (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlatt (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlawb (TARGET_DSP_MULTIPLY)
#define HAVE_arm_smlawt (TARGET_DSP_MULTIPLY)
#define HAVE_mulsf3 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_muldf3 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_divsf3 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_divdf3 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_anddi3 (TARGET_32BIT)
#define HAVE_iordi3 (TARGET_32BIT)
#define HAVE_xordi3 (TARGET_32BIT)
#define HAVE_one_cmpldi2 (TARGET_32BIT)
#define HAVE_andsi3 1
#define HAVE_insv (TARGET_ARM || arm_arch_thumb2)
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_smaxsi3 (TARGET_32BIT)
#define HAVE_sminsi3 (TARGET_32BIT)
#define HAVE_umaxsi3 (TARGET_32BIT)
#define HAVE_uminsi3 (TARGET_32BIT)
#define HAVE_arm_qadd (TARGET_DSP_MULTIPLY)
#define HAVE_arm_qsub (TARGET_DSP_MULTIPLY)
#define HAVE_arm_ssat (TARGET_32BIT && arm_arch6)
#define HAVE_arm_usat (TARGET_32BIT && arm_arch6)
#define HAVE_arm_saturation_occurred (TARGET_ARM_QBIT)
#define HAVE_arm_set_saturation (TARGET_ARM_QBIT)
#define HAVE_ashldi3 (TARGET_32BIT)
#define HAVE_ashlsi3 1
#define HAVE_ashrdi3 (TARGET_32BIT)
#define HAVE_ashrsi3 1
#define HAVE_lshrdi3 (TARGET_32BIT)
#define HAVE_lshrsi3 1
#define HAVE_rotlsi3 (TARGET_32BIT)
#define HAVE_rotrsi3 1
#define HAVE_extzv (TARGET_THUMB1 || arm_arch_thumb2)
#define HAVE_extzv_t1 (TARGET_THUMB1)
#define HAVE_extv (arm_arch_thumb2)
#define HAVE_extv_regsi 1
#define HAVE_negvsi3 (TARGET_32BIT)
#define HAVE_negvdi3 (TARGET_32BIT)
#define HAVE_negsi2 1
#define HAVE_negsf2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_negdf2 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_abssi2 1
#define HAVE_abssf2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_absdf2 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_sqrtsf2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_sqrtdf2 (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_one_cmplsi2 1
#define HAVE_floatsihf2 1
#define HAVE_floatdihf2 1
#define HAVE_floatsisf2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_floatsidf2 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_fix_trunchfsi2 1
#define HAVE_fix_trunchfdi2 1
#define HAVE_fix_truncsfsi2 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_fix_truncdfsi2 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_truncdfsf2 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_truncdfhf2 ((TARGET_EITHER && flag_unsafe_math_optimizations) \
   || (TARGET_32BIT && TARGET_FP16_TO_DOUBLE))
#define HAVE_zero_extendqidi2 (TARGET_32BIT )
#define HAVE_zero_extendhidi2 (TARGET_32BIT && arm_arch6)
#define HAVE_zero_extendsidi2 (TARGET_32BIT )
#define HAVE_extendqidi2 (TARGET_32BIT && arm_arch6)
#define HAVE_extendhidi2 (TARGET_32BIT && arm_arch6)
#define HAVE_extendsidi2 (TARGET_32BIT )
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhisi2_mem (TARGET_ARM)
#define HAVE_extendqihi2 (TARGET_ARM)
#define HAVE_extendqisi2 1
#define HAVE_arm_smlad (TARGET_INT_SIMD)
#define HAVE_arm_smladx (TARGET_INT_SIMD)
#define HAVE_arm_smlsd (TARGET_INT_SIMD)
#define HAVE_arm_smlsdx (TARGET_INT_SIMD)
#define HAVE_arm_smuad (TARGET_INT_SIMD)
#define HAVE_arm_smuadx (TARGET_INT_SIMD)
#define HAVE_arm_ssat16 (TARGET_INT_SIMD)
#define HAVE_arm_usat16 (TARGET_INT_SIMD)
#define HAVE_extendsfdf2 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_extendhfdf2 1
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_calculate_pic_address (flag_pic)
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_storehi (TARGET_ARM)
#define HAVE_storehi_bigend (TARGET_ARM)
#define HAVE_storeinthi (TARGET_ARM)
#define HAVE_storehi_single_op (TARGET_32BIT && arm_arch4)
#define HAVE_movhi 1
#define HAVE_movhi_bytes (TARGET_ARM)
#define HAVE_movhi_bigend (TARGET_ARM)
#define HAVE_reload_outhi 1
#define HAVE_reload_inhi 1
#define HAVE_movqi 1
#define HAVE_movhf 1
#define HAVE_movbf 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_reload_outdf (TARGET_THUMB2)
#define HAVE_load_multiple (TARGET_32BIT)
#define HAVE_store_multiple (TARGET_32BIT)
#define HAVE_setmemsi (TARGET_32BIT)
#define HAVE_cpymemqi 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchsf4 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_cbranchdf4 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_cbranchdi4 (TARGET_32BIT)
#define HAVE_cbranch_cc (TARGET_32BIT)
#define HAVE_cstore_cc (TARGET_32BIT)
#define HAVE_cstoresi4 (TARGET_32BIT || TARGET_THUMB1)
#define HAVE_cstorehf4 (TARGET_VFP_FP16INST)
#define HAVE_cstoresf4 (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_cstoredf4 (TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
#define HAVE_cstoredi4 (TARGET_32BIT)
#define HAVE_movsicc (TARGET_32BIT)
#define HAVE_movhfcc (TARGET_VFP_FP16INST)
#define HAVE_movsfcc (TARGET_32BIT && TARGET_HARD_FLOAT)
#define HAVE_movdfcc (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
#define HAVE_jump 1
#define HAVE_call 1
#define HAVE_call_internal 1
#define HAVE_nonsecure_call_internal (use_cmse)
#define HAVE_call_value 1
#define HAVE_call_value_internal 1
#define HAVE_nonsecure_call_value_internal (use_cmse)
#define HAVE_sibcall_internal 1
#define HAVE_sibcall (TARGET_32BIT)
#define HAVE_sibcall_value_internal 1
#define HAVE_sibcall_value (TARGET_32BIT)
#define HAVE_return ((TARGET_ARM || (TARGET_THUMB2 \
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL \
                   && !IS_STACKALIGN (arm_current_func_type ()))) \
     && USE_RETURN_INSN (FALSE))
#define HAVE_simple_return ((TARGET_ARM || (TARGET_THUMB2 \
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL \
                   && !IS_STACKALIGN (arm_current_func_type ()))) \
     && use_simple_return_p ())
#define HAVE_return_addr_mask (TARGET_ARM)
#define HAVE_untyped_call (TARGET_EITHER && !TARGET_FDPIC)
#define HAVE_untyped_return (TARGET_EITHER && !TARGET_FDPIC)
#define HAVE_stack_protect_combined_set (arm_stack_protector_guard == SSP_GLOBAL)
#define HAVE_stack_protect_combined_test (arm_stack_protector_guard == SSP_GLOBAL)
#define HAVE_stack_protect_set (arm_stack_protector_guard == SSP_TLSREG)
#define HAVE_stack_protect_test (arm_stack_protector_guard == SSP_TLSREG)
#define HAVE_casesi ((TARGET_ARM \
     || (!target_pure_code \
         && (TARGET_THUMB2 || optimize_size || flag_pic))))
#define HAVE_arm_casesi_internal (TARGET_ARM)
#define HAVE_indirect_jump 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue (TARGET_32BIT)
#define HAVE_eh_epilogue 1
#define HAVE_eh_return 1
#define HAVE_get_thread_pointersi 1
#define HAVE_arm_legacy_rev (TARGET_32BIT)
#define HAVE_thumb_legacy_rev (TARGET_THUMB)
#define HAVE_modsi3 (TARGET_32BIT)
#define HAVE_bswapsi2 (TARGET_EITHER && (arm_arch6 || !optimize_size))
#define HAVE_bswaphi2 (arm_arch6)
#define HAVE_copysignsf3 (TARGET_SOFT_FLOAT && arm_arch_thumb2)
#define HAVE_copysigndf3 (TARGET_SOFT_FLOAT && arm_arch_thumb2)
#define HAVE_movmisaligndi (unaligned_access)
#define HAVE_movmisalignhi (unaligned_access)
#define HAVE_movmisalignsi (unaligned_access)
#define HAVE_arm_ldc (arm_coproc_builtin_available (VUNSPEC_LDC))
#define HAVE_arm_ldc2 (arm_coproc_builtin_available (VUNSPEC_LDC2))
#define HAVE_arm_ldcl (arm_coproc_builtin_available (VUNSPEC_LDCL))
#define HAVE_arm_ldc2l (arm_coproc_builtin_available (VUNSPEC_LDC2L))
#define HAVE_arm_stc (arm_coproc_builtin_available (VUNSPEC_STC))
#define HAVE_arm_stc2 (arm_coproc_builtin_available (VUNSPEC_STC2))
#define HAVE_arm_stcl (arm_coproc_builtin_available (VUNSPEC_STCL))
#define HAVE_arm_stc2l (arm_coproc_builtin_available (VUNSPEC_STC2L))
#define HAVE_speculation_barrier 1
#define HAVE_movv16qi (TARGET_NEON \
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_movv8hi (TARGET_NEON \
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_movv4si (TARGET_NEON \
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_movv4sf (TARGET_NEON \
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
#define HAVE_movv2di (TARGET_NEON \
   || (TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
   || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_movv2si (TARGET_NEON)
#define HAVE_movv4hi (TARGET_NEON)
#define HAVE_movv8qi (TARGET_NEON)
#define HAVE_movv2sf (TARGET_NEON)
#define HAVE_movv8hf (TARGET_NEON || TARGET_HAVE_MVE_FLOAT)
#define HAVE_addv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_addv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_addv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_addv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_addv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_addv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_addv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_addv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_addv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_addv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_addv2di3 (ARM_HAVE_V2DI_ARITH)
#define HAVE_subv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_subv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_subv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_subv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_subv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_subv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_subv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_subv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_subv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_subv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_subv2di3 (ARM_HAVE_V2DI_ARITH)
#define HAVE_mulv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_mulv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_mulv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_mulv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_mulv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_mulv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_mulv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_mulv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_mulv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_mulv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_sminv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_sminv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_sminv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_sminv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_sminv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_sminv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_sminv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_sminv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_sminv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_sminv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_uminv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_uminv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_uminv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_uminv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_uminv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_uminv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_smaxv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_smaxv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_smaxv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_smaxv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_smaxv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_smaxv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_smaxv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_smaxv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_smaxv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_smaxv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_umaxv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_umaxv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_umaxv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_umaxv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_umaxv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_umaxv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_fmaxv4hf3 ((TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V4HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_fminv4hf3 ((TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V4HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_fmaxv8hf3 ((TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V8HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_fminv8hf3 ((TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V8HF_ARITH) && (TARGET_NEON_FP16INST))
#define HAVE_fmaxv2sf3 (TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V2SF_ARITH)
#define HAVE_fminv2sf3 (TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V2SF_ARITH)
#define HAVE_fmaxv4sf3 (TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V4SF_ARITH)
#define HAVE_fminv4sf3 (TARGET_NEON && TARGET_VFP5 && ARM_HAVE_V4SF_ARITH)
#define HAVE_vec_permv8qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_permv16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_extractv16qiqi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_extractv8hihi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_extractv8hfhf (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_extractv4sisi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_extractv4sfsf (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_extractv2didi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv16qi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv8hi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv8hf (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv4si (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv4sf (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_vec_setv2di (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_andv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_andv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_andv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_andv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_andv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_andv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_andv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_andv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_andv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_andv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_andv2di3 (ARM_HAVE_V2DI_ARITH)
#define HAVE_iorv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_iorv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_iorv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_iorv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_iorv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_iorv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_iorv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_iorv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_iorv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_iorv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_iorv2di3 (ARM_HAVE_V2DI_ARITH)
#define HAVE_xorv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_xorv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_xorv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_xorv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_xorv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_xorv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_xorv4hf3 (ARM_HAVE_V4HF_ARITH)
#define HAVE_xorv8hf3 (ARM_HAVE_V8HF_ARITH)
#define HAVE_xorv2sf3 (ARM_HAVE_V2SF_ARITH)
#define HAVE_xorv4sf3 (ARM_HAVE_V4SF_ARITH)
#define HAVE_xorv2di3 (ARM_HAVE_V2DI_ARITH)
#define HAVE_one_cmplv8qi2 (ARM_HAVE_V8QI_ARITH)
#define HAVE_one_cmplv16qi2 (ARM_HAVE_V16QI_ARITH)
#define HAVE_one_cmplv4hi2 (ARM_HAVE_V4HI_ARITH)
#define HAVE_one_cmplv8hi2 (ARM_HAVE_V8HI_ARITH)
#define HAVE_one_cmplv2si2 (ARM_HAVE_V2SI_ARITH)
#define HAVE_one_cmplv4si2 (ARM_HAVE_V4SI_ARITH)
#define HAVE_one_cmplv4hf2 (ARM_HAVE_V4HF_ARITH)
#define HAVE_one_cmplv8hf2 (ARM_HAVE_V8HF_ARITH)
#define HAVE_one_cmplv2sf2 (ARM_HAVE_V2SF_ARITH)
#define HAVE_one_cmplv4sf2 (ARM_HAVE_V4SF_ARITH)
#define HAVE_one_cmplv2di2 (ARM_HAVE_V2DI_ARITH)
#define HAVE_absv8qi2 (ARM_HAVE_V8QI_ARITH)
#define HAVE_negv8qi2 (ARM_HAVE_V8QI_ARITH)
#define HAVE_absv16qi2 (ARM_HAVE_V16QI_ARITH)
#define HAVE_negv16qi2 (ARM_HAVE_V16QI_ARITH)
#define HAVE_absv4hi2 (ARM_HAVE_V4HI_ARITH)
#define HAVE_negv4hi2 (ARM_HAVE_V4HI_ARITH)
#define HAVE_absv8hi2 (ARM_HAVE_V8HI_ARITH)
#define HAVE_negv8hi2 (ARM_HAVE_V8HI_ARITH)
#define HAVE_absv2si2 (ARM_HAVE_V2SI_ARITH)
#define HAVE_negv2si2 (ARM_HAVE_V2SI_ARITH)
#define HAVE_absv4si2 (ARM_HAVE_V4SI_ARITH)
#define HAVE_negv4si2 (ARM_HAVE_V4SI_ARITH)
#define HAVE_absv2sf2 (ARM_HAVE_V2SF_ARITH)
#define HAVE_negv2sf2 (ARM_HAVE_V2SF_ARITH)
#define HAVE_absv4sf2 (ARM_HAVE_V4SF_ARITH)
#define HAVE_negv4sf2 (ARM_HAVE_V4SF_ARITH)
#define HAVE_absv8hf2 (ARM_HAVE_V8HF_ARITH)
#define HAVE_negv8hf2 (ARM_HAVE_V8HF_ARITH)
#define HAVE_absv4hf2 (ARM_HAVE_V4HF_ARITH)
#define HAVE_negv4hf2 (ARM_HAVE_V4HF_ARITH)
#define HAVE_cadd90v4hf3 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cadd270v4hf3 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cadd90v8hf3 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cadd270v8hf3 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cadd90v2sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cadd270v2sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cadd90v4sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cadd270v4sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmulv8hf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_cmul_conjv8hf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_cmulv4sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_cmul_conjv4sf3 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla0v4hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla90v4hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla180v4hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla270v4hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla0v8hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla90v8hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla180v8hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla270v8hf (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_arm_vcmla0v2sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla90v2sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla180v2sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla270v2sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla0v4sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla90v4sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla180v4sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_arm_vcmla270v4sf ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmlav4hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmla_conjv4hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmlsv4hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmls_conjv4hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmlav8hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmla_conjv8hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmlsv8hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmls_conjv8hf4 (((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V8HF_ARITH)) && !BYTES_BIG_ENDIAN) && (TARGET_NEON_FP16INST))
#define HAVE_cmlav2sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmla_conjv2sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmlsv2sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmls_conjv2sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V2SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmlav4sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmla_conjv4sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmlsv4sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_cmls_conjv4sf4 ((TARGET_COMPLEX || (TARGET_HAVE_MVE && TARGET_HAVE_MVE_FLOAT \
		      && ARM_HAVE_V4SF_ARITH)) && !BYTES_BIG_ENDIAN)
#define HAVE_movmisalignv8qi (ARM_HAVE_V8QI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv16qi (ARM_HAVE_V16QI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4hi (ARM_HAVE_V4HI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hi (ARM_HAVE_V8HI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv2si (ARM_HAVE_V2SI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4si (ARM_HAVE_V4SI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4hf (ARM_HAVE_V4HF_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv8hf (ARM_HAVE_V8HF_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv2sf (ARM_HAVE_V2SF_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv4sf (ARM_HAVE_V4SF_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_movmisalignv2di (ARM_HAVE_V2DI_LDST && !BYTES_BIG_ENDIAN && unaligned_access)
#define HAVE_vashlv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_vashlv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_vashlv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_vashlv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_vashlv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_vashlv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_vashrv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_vashrv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_vashrv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_vashrv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_vashrv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_vashrv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_vlshrv8qi3 (ARM_HAVE_V8QI_ARITH)
#define HAVE_vlshrv16qi3 (ARM_HAVE_V16QI_ARITH)
#define HAVE_vlshrv4hi3 (ARM_HAVE_V4HI_ARITH)
#define HAVE_vlshrv8hi3 (ARM_HAVE_V8HI_ARITH)
#define HAVE_vlshrv2si3 (ARM_HAVE_V2SI_ARITH)
#define HAVE_vlshrv4si3 (ARM_HAVE_V4SI_ARITH)
#define HAVE_vec_load_lanesoiv16qi (TARGET_NEON)
#define HAVE_vec_load_lanesoiv8hi (TARGET_NEON)
#define HAVE_vec_load_lanesoiv8hf (TARGET_NEON)
#define HAVE_vec_load_lanesoiv4si (TARGET_NEON)
#define HAVE_vec_load_lanesoiv4sf (TARGET_NEON)
#define HAVE_vec_load_lanesv2x16qiv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x16QImode)))
#define HAVE_vec_load_lanesv2x8hiv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HImode)))
#define HAVE_vec_load_lanesv2x4siv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SImode)))
#define HAVE_vec_load_lanesv2x8hfv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HFmode)))
#define HAVE_vec_load_lanesv2x4sfv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SFmode)))
#define HAVE_vec_store_lanesoiv16qi (TARGET_NEON)
#define HAVE_vec_store_lanesoiv8hi (TARGET_NEON)
#define HAVE_vec_store_lanesoiv8hf (TARGET_NEON)
#define HAVE_vec_store_lanesoiv4si (TARGET_NEON)
#define HAVE_vec_store_lanesoiv4sf (TARGET_NEON)
#define HAVE_vec_store_lanesv2x16qiv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x16QImode)))
#define HAVE_vec_store_lanesv2x8hiv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HImode)))
#define HAVE_vec_store_lanesv2x4siv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SImode)))
#define HAVE_vec_store_lanesv2x8hfv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x8HFmode)))
#define HAVE_vec_store_lanesv2x4sfv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V2x4SFmode)))
#define HAVE_vec_load_lanesxiv16qi (TARGET_NEON)
#define HAVE_vec_load_lanesxiv8hi (TARGET_NEON)
#define HAVE_vec_load_lanesxiv8hf (TARGET_NEON)
#define HAVE_vec_load_lanesxiv4si (TARGET_NEON)
#define HAVE_vec_load_lanesxiv4sf (TARGET_NEON)
#define HAVE_vec_load_lanesv4x16qiv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x16QImode)))
#define HAVE_vec_load_lanesv4x8hiv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HImode)))
#define HAVE_vec_load_lanesv4x4siv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SImode)))
#define HAVE_vec_load_lanesv4x8hfv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HFmode)))
#define HAVE_vec_load_lanesv4x4sfv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SFmode)))
#define HAVE_vec_store_lanesxiv16qi (TARGET_NEON)
#define HAVE_vec_store_lanesxiv8hi (TARGET_NEON)
#define HAVE_vec_store_lanesxiv8hf (TARGET_NEON)
#define HAVE_vec_store_lanesxiv4si (TARGET_NEON)
#define HAVE_vec_store_lanesxiv4sf (TARGET_NEON)
#define HAVE_vec_store_lanesv4x16qiv16qi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x16QImode)))
#define HAVE_vec_store_lanesv4x8hiv8hi ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HImode)))
#define HAVE_vec_store_lanesv4x4siv4si ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SImode)))
#define HAVE_vec_store_lanesv4x8hfv8hf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x8HFmode)))
#define HAVE_vec_store_lanesv4x4sfv4sf ((TARGET_HAVE_MVE && VALID_MVE_STRUCT_MODE (V4x4SFmode)))
#define HAVE_reduc_plus_scal_v16qi (ARM_HAVE_V16QI_ARITH \
   && !(TARGET_HAVE_MVE && FLOAT_MODE_P (V16QImode)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_plus_scal_v8hi (ARM_HAVE_V8HI_ARITH \
   && !(TARGET_HAVE_MVE && FLOAT_MODE_P (V8HImode)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_plus_scal_v4si (ARM_HAVE_V4SI_ARITH \
   && !(TARGET_HAVE_MVE && FLOAT_MODE_P (V4SImode)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_plus_scal_v4sf (ARM_HAVE_V4SF_ARITH \
   && !(TARGET_HAVE_MVE && FLOAT_MODE_P (V4SFmode)) \
   && !BYTES_BIG_ENDIAN)
#define HAVE_avgv16qi3_floor (ARM_HAVE_V16QI_ARITH)
#define HAVE_avgv8hi3_floor (ARM_HAVE_V8HI_ARITH)
#define HAVE_avgv4si3_floor (ARM_HAVE_V4SI_ARITH)
#define HAVE_uavgv16qi3_floor (ARM_HAVE_V16QI_ARITH)
#define HAVE_uavgv8hi3_floor (ARM_HAVE_V8HI_ARITH)
#define HAVE_uavgv4si3_floor (ARM_HAVE_V4SI_ARITH)
#define HAVE_avgv16qi3_ceil (ARM_HAVE_V16QI_ARITH)
#define HAVE_avgv8hi3_ceil (ARM_HAVE_V8HI_ARITH)
#define HAVE_avgv4si3_ceil (ARM_HAVE_V4SI_ARITH)
#define HAVE_uavgv16qi3_ceil (ARM_HAVE_V16QI_ARITH)
#define HAVE_uavgv8hi3_ceil (ARM_HAVE_V8HI_ARITH)
#define HAVE_uavgv4si3_ceil (ARM_HAVE_V4SI_ARITH)
#define HAVE_clzv8qi2 (ARM_HAVE_V8QI_ARITH)
#define HAVE_clzv16qi2 (ARM_HAVE_V16QI_ARITH)
#define HAVE_clzv4hi2 (ARM_HAVE_V4HI_ARITH)
#define HAVE_clzv8hi2 (ARM_HAVE_V8HI_ARITH)
#define HAVE_clzv2si2 (ARM_HAVE_V2SI_ARITH)
#define HAVE_clzv4si2 (ARM_HAVE_V4SI_ARITH)
#define HAVE_vec_initv8qiqi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V8QImode)))
#define HAVE_vec_initv16qiqi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V16QImode)))
#define HAVE_vec_initv4hihi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V4HImode)))
#define HAVE_vec_initv8hihi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V8HImode)))
#define HAVE_vec_initv2sisi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V2SImode)))
#define HAVE_vec_initv4sisi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V4SImode)))
#define HAVE_vec_initv4hfhf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V4HFmode)))
#define HAVE_vec_initv8hfhf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V8HFmode)))
#define HAVE_vec_initv4bfbf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V4BFmode)))
#define HAVE_vec_initv8bfbf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V8BFmode)))
#define HAVE_vec_initv2sfsf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V2SFmode)))
#define HAVE_vec_initv4sfsf (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V4SFmode)))
#define HAVE_vec_initdidi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (DImode)))
#define HAVE_vec_initv2didi (TARGET_NEON || (TARGET_HAVE_MVE && VALID_MVE_MODE (V2DImode)))
#define HAVE_neon_vabshf (TARGET_VFP_FP16INST)
#define HAVE_neon_vfmahf (TARGET_VFP_FP16INST)
#define HAVE_neon_vfmshf (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvths_nhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthu_nhf (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvths_nsi (TARGET_VFP_FP16INST)
#define HAVE_neon_vcvthu_nsi (TARGET_VFP_FP16INST)
#define HAVE_thumb_movhi_clobber (TARGET_THUMB1)
#define HAVE_cbranchqi4 (TARGET_THUMB1)
#define HAVE_cbranchsi4_neg_late (TARGET_THUMB1)
#define HAVE_cstoresi_eq0_thumb1 (TARGET_THUMB1)
#define HAVE_cstoresi_ne0_thumb1 (TARGET_THUMB1)
#define HAVE_thumb1_casesi_internal_pic (TARGET_THUMB1)
#define HAVE_tablejump (TARGET_THUMB1)
#define HAVE_thumb2_casesi_internal (TARGET_THUMB2 && !flag_pic)
#define HAVE_thumb2_casesi_internal_pic (TARGET_THUMB2 && flag_pic)
#define HAVE_doloop_end (TARGET_32BIT)
#define HAVE_doloop_begin (TARGET_32BIT && TARGET_HAVE_LOB)
#define HAVE_movti (TARGET_NEON)
#define HAVE_movei ((TARGET_NEON || TARGET_HAVE_MVE) && (!TARGET_HAVE_MVE))
#define HAVE_movoi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_movci ((TARGET_NEON || TARGET_HAVE_MVE) && (!TARGET_HAVE_MVE))
#define HAVE_movxi (TARGET_NEON || TARGET_HAVE_MVE)
#define HAVE_movv2x16qi ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv2x8hi ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv2x4si ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv2x8hf ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE_FLOAT))
#define HAVE_movv2x4sf ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE_FLOAT))
#define HAVE_movv4x16qi ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv4x8hi ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv4x4si ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE))
#define HAVE_movv4x8hf ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE_FLOAT))
#define HAVE_movv4x4sf ((TARGET_NEON || TARGET_HAVE_MVE) && (TARGET_HAVE_MVE_FLOAT))
#define HAVE_movv4hf (TARGET_NEON)
#define HAVE_movv4bf (TARGET_NEON)
#define HAVE_movv8bf (TARGET_NEON)
#define HAVE_cbranchv8qi4 (TARGET_NEON)
#define HAVE_cbranchv16qi4 (TARGET_NEON)
#define HAVE_cbranchv4hi4 (TARGET_NEON)
#define HAVE_cbranchv8hi4 (TARGET_NEON)
#define HAVE_cbranchv2si4 (TARGET_NEON)
#define HAVE_cbranchv4si4 (TARGET_NEON)
#define HAVE_cbranchv2di4 (TARGET_NEON)
#define HAVE_divv2sf3 (ARM_HAVE_NEON_V2SF_ARITH && !optimize_size \
   && flag_reciprocal_math)
#define HAVE_divv4sf3 (ARM_HAVE_NEON_V4SF_ARITH && !optimize_size \
   && flag_reciprocal_math)
#define HAVE_ceilv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_btruncv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_floorv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_rintv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_roundv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_roundevenv2sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_ceilv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_btruncv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_floorv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_rintv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_roundv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_roundevenv4sf2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lceilv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lfloorv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lroundv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lceiluv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lflooruv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lrounduv2sfv2si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lceilv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lfloorv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lroundv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lceiluv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lflooruv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_lrounduv4sfv4si2 (TARGET_NEON && TARGET_VFP5 && flag_unsafe_math_optimizations)
#define HAVE_neon_vabsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vnegv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vabsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vnegv4hf (TARGET_NEON_FP16INST)
#define HAVE_widen_ssumv16qi3 (TARGET_NEON)
#define HAVE_widen_ssumv8hi3 (TARGET_NEON)
#define HAVE_widen_ssumv4si3 (TARGET_NEON)
#define HAVE_widen_usumv16qi3 (TARGET_NEON)
#define HAVE_widen_usumv8hi3 (TARGET_NEON)
#define HAVE_widen_usumv4si3 (TARGET_NEON)
#define HAVE_move_hi_quad_v2di (TARGET_NEON)
#define HAVE_move_hi_quad_v2df (TARGET_NEON)
#define HAVE_move_hi_quad_v16qi (TARGET_NEON)
#define HAVE_move_hi_quad_v8hi (TARGET_NEON)
#define HAVE_move_hi_quad_v4si (TARGET_NEON)
#define HAVE_move_hi_quad_v4sf (TARGET_NEON)
#define HAVE_move_lo_quad_v2di (TARGET_NEON)
#define HAVE_move_lo_quad_v2df (TARGET_NEON)
#define HAVE_move_lo_quad_v16qi (TARGET_NEON)
#define HAVE_move_lo_quad_v8hi (TARGET_NEON)
#define HAVE_move_lo_quad_v4si (TARGET_NEON)
#define HAVE_move_lo_quad_v4sf (TARGET_NEON)
#define HAVE_reduc_plus_scal_v8qi (ARM_HAVE_NEON_V8QI_ARITH)
#define HAVE_reduc_plus_scal_v4hi (ARM_HAVE_NEON_V4HI_ARITH)
#define HAVE_reduc_plus_scal_v2si (ARM_HAVE_NEON_V2SI_ARITH)
#define HAVE_reduc_plus_scal_v2sf (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_reduc_plus_scal_v2di (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smin_scal_v8qi (ARM_HAVE_NEON_V8QI_ARITH)
#define HAVE_reduc_smin_scal_v4hi (ARM_HAVE_NEON_V4HI_ARITH)
#define HAVE_reduc_smin_scal_v2si (ARM_HAVE_NEON_V2SI_ARITH)
#define HAVE_reduc_smin_scal_v2sf (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_reduc_smin_scal_v16qi (ARM_HAVE_NEON_V16QI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smin_scal_v8hi (ARM_HAVE_NEON_V8HI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smin_scal_v4si (ARM_HAVE_NEON_V4SI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smin_scal_v4sf (ARM_HAVE_NEON_V4SF_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smax_scal_v8qi (ARM_HAVE_NEON_V8QI_ARITH)
#define HAVE_reduc_smax_scal_v4hi (ARM_HAVE_NEON_V4HI_ARITH)
#define HAVE_reduc_smax_scal_v2si (ARM_HAVE_NEON_V2SI_ARITH)
#define HAVE_reduc_smax_scal_v2sf (ARM_HAVE_NEON_V2SF_ARITH)
#define HAVE_reduc_smax_scal_v16qi (ARM_HAVE_NEON_V16QI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smax_scal_v8hi (ARM_HAVE_NEON_V8HI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smax_scal_v4si (ARM_HAVE_NEON_V4SI_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_smax_scal_v4sf (ARM_HAVE_NEON_V4SF_ARITH && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umin_scal_v8qi (TARGET_NEON)
#define HAVE_reduc_umin_scal_v4hi (TARGET_NEON)
#define HAVE_reduc_umin_scal_v2si (TARGET_NEON)
#define HAVE_reduc_umin_scal_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umin_scal_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umin_scal_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umax_scal_v8qi (TARGET_NEON)
#define HAVE_reduc_umax_scal_v4hi (TARGET_NEON)
#define HAVE_reduc_umax_scal_v2si (TARGET_NEON)
#define HAVE_reduc_umax_scal_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umax_scal_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_reduc_umax_scal_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_cmpv8qiv8qi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv16qiv16qi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4hiv4hi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv8hiv8hi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv2siv2si (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4siv4si (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv2sfv2si (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4sfv4si (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv8hfv8hi (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4hfv4hi (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpuv8qiv8qi (TARGET_NEON)
#define HAVE_vec_cmpuv16qiv16qi (TARGET_NEON)
#define HAVE_vec_cmpuv4hiv4hi (TARGET_NEON)
#define HAVE_vec_cmpuv8hiv8hi (TARGET_NEON)
#define HAVE_vec_cmpuv2siv2si (TARGET_NEON)
#define HAVE_vec_cmpuv4siv4si (TARGET_NEON)
#define HAVE_vcond_mask_v8qiv8qi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v16qiv16qi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v4hiv4hi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v8hiv8hi (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v2siv2si (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v4siv4si (TARGET_NEON \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v2sfv2si (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v4sfv4si (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v8hfv8hi (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vcond_mask_v4hfv4hi (TARGET_NEON \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_neon_vaddv2sf (TARGET_NEON)
#define HAVE_neon_vaddv4sf (TARGET_NEON)
#define HAVE_neon_vaddv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vaddv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vsubv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vsubv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmlav8qi (TARGET_NEON)
#define HAVE_neon_vmlav16qi (TARGET_NEON)
#define HAVE_neon_vmlav4hi (TARGET_NEON)
#define HAVE_neon_vmlav8hi (TARGET_NEON)
#define HAVE_neon_vmlav2si (TARGET_NEON)
#define HAVE_neon_vmlav4si (TARGET_NEON)
#define HAVE_neon_vmlav2sf (TARGET_NEON)
#define HAVE_neon_vmlav4sf (TARGET_NEON)
#define HAVE_neon_vfmav2sf (TARGET_NEON && TARGET_FMA)
#define HAVE_neon_vfmav4sf (TARGET_NEON && TARGET_FMA)
#define HAVE_neon_vfmav8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vfmav4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vfmsv2sf (TARGET_NEON && TARGET_FMA)
#define HAVE_neon_vfmsv4sf (TARGET_NEON && TARGET_FMA)
#define HAVE_neon_vfmsv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vfmsv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vfmal_lowv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_highv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lowv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_highv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lowv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_highv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lowv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_highv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_lowv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_highv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_lowv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_highv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_lowv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_highv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_lowv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_highv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_lowv8hfv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_highv8hfv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_lowv8hfv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_highv8hfv2sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_lowv4hfv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmal_lane_highv4hfv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_lowv4hfv4sf (TARGET_FP16FML)
#define HAVE_neon_vfmsl_lane_highv4hfv4sf (TARGET_FP16FML)
#define HAVE_neon_vmlsv8qi (TARGET_NEON)
#define HAVE_neon_vmlsv16qi (TARGET_NEON)
#define HAVE_neon_vmlsv4hi (TARGET_NEON)
#define HAVE_neon_vmlsv8hi (TARGET_NEON)
#define HAVE_neon_vmlsv2si (TARGET_NEON)
#define HAVE_neon_vmlsv4si (TARGET_NEON)
#define HAVE_neon_vmlsv2sf (TARGET_NEON)
#define HAVE_neon_vmlsv4sf (TARGET_NEON)
#define HAVE_neon_vsubv2sf (TARGET_NEON)
#define HAVE_neon_vsubv4sf (TARGET_NEON)
#define HAVE_neon_vceqv8qi (TARGET_NEON)
#define HAVE_neon_vcgtv8qi (TARGET_NEON)
#define HAVE_neon_vcgev8qi (TARGET_NEON)
#define HAVE_neon_vclev8qi (TARGET_NEON)
#define HAVE_neon_vcltv8qi (TARGET_NEON)
#define HAVE_neon_vceqv16qi (TARGET_NEON)
#define HAVE_neon_vcgtv16qi (TARGET_NEON)
#define HAVE_neon_vcgev16qi (TARGET_NEON)
#define HAVE_neon_vclev16qi (TARGET_NEON)
#define HAVE_neon_vcltv16qi (TARGET_NEON)
#define HAVE_neon_vceqv4hi (TARGET_NEON)
#define HAVE_neon_vcgtv4hi (TARGET_NEON)
#define HAVE_neon_vcgev4hi (TARGET_NEON)
#define HAVE_neon_vclev4hi (TARGET_NEON)
#define HAVE_neon_vcltv4hi (TARGET_NEON)
#define HAVE_neon_vceqv8hi (TARGET_NEON)
#define HAVE_neon_vcgtv8hi (TARGET_NEON)
#define HAVE_neon_vcgev8hi (TARGET_NEON)
#define HAVE_neon_vclev8hi (TARGET_NEON)
#define HAVE_neon_vcltv8hi (TARGET_NEON)
#define HAVE_neon_vceqv2si (TARGET_NEON)
#define HAVE_neon_vcgtv2si (TARGET_NEON)
#define HAVE_neon_vcgev2si (TARGET_NEON)
#define HAVE_neon_vclev2si (TARGET_NEON)
#define HAVE_neon_vcltv2si (TARGET_NEON)
#define HAVE_neon_vceqv4si (TARGET_NEON)
#define HAVE_neon_vcgtv4si (TARGET_NEON)
#define HAVE_neon_vcgev4si (TARGET_NEON)
#define HAVE_neon_vclev4si (TARGET_NEON)
#define HAVE_neon_vcltv4si (TARGET_NEON)
#define HAVE_neon_vceqv2sf (TARGET_NEON)
#define HAVE_neon_vcgtv2sf (TARGET_NEON)
#define HAVE_neon_vcgev2sf (TARGET_NEON)
#define HAVE_neon_vclev2sf (TARGET_NEON)
#define HAVE_neon_vcltv2sf (TARGET_NEON)
#define HAVE_neon_vceqv4sf (TARGET_NEON)
#define HAVE_neon_vcgtv4sf (TARGET_NEON)
#define HAVE_neon_vcgev4sf (TARGET_NEON)
#define HAVE_neon_vclev4sf (TARGET_NEON)
#define HAVE_neon_vcltv4sf (TARGET_NEON)
#define HAVE_neon_vceqv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vclev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vceqv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vclev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcagtv2sf (TARGET_NEON)
#define HAVE_neon_vcagev2sf (TARGET_NEON)
#define HAVE_neon_vcaltv2sf (TARGET_NEON)
#define HAVE_neon_vcalev2sf (TARGET_NEON)
#define HAVE_neon_vcagtv4sf (TARGET_NEON)
#define HAVE_neon_vcagev4sf (TARGET_NEON)
#define HAVE_neon_vcaltv4sf (TARGET_NEON)
#define HAVE_neon_vcalev4sf (TARGET_NEON)
#define HAVE_neon_vcagtv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcagev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcaltv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcalev8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcagtv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcagev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcaltv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcalev4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vceqzv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtzv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgezv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vclezv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltzv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vceqzv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgtzv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcgezv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vclezv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vcltzv4hf (TARGET_NEON_FP16INST)
#define HAVE_ssadv16qi (TARGET_NEON)
#define HAVE_usadv16qi (TARGET_NEON)
#define HAVE_neon_vpaddv8qi (TARGET_NEON)
#define HAVE_neon_vpaddv4hi (TARGET_NEON)
#define HAVE_neon_vpaddv2si (TARGET_NEON)
#define HAVE_neon_vpaddv2sf (TARGET_NEON)
#define HAVE_neon_vabsv8qi (TARGET_NEON)
#define HAVE_neon_vabsv16qi (TARGET_NEON)
#define HAVE_neon_vabsv4hi (TARGET_NEON)
#define HAVE_neon_vabsv8hi (TARGET_NEON)
#define HAVE_neon_vabsv2si (TARGET_NEON)
#define HAVE_neon_vabsv4si (TARGET_NEON)
#define HAVE_neon_vabsv2sf (TARGET_NEON)
#define HAVE_neon_vabsv4sf (TARGET_NEON)
#define HAVE_neon_vnegv8qi (TARGET_NEON)
#define HAVE_neon_vnegv16qi (TARGET_NEON)
#define HAVE_neon_vnegv4hi (TARGET_NEON)
#define HAVE_neon_vnegv8hi (TARGET_NEON)
#define HAVE_neon_vnegv2si (TARGET_NEON)
#define HAVE_neon_vnegv4si (TARGET_NEON)
#define HAVE_neon_vnegv2sf (TARGET_NEON)
#define HAVE_neon_vnegv4sf (TARGET_NEON)
#define HAVE_cmulv2sf3 (TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
#define HAVE_cmul_conjv2sf3 (TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
#define HAVE_cmulv4hf3 (TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
#define HAVE_cmul_conjv4hf3 (TARGET_COMPLEX && !BYTES_BIG_ENDIAN)
#define HAVE_neon_sdotv2siv8qi (TARGET_DOTPROD)
#define HAVE_neon_udotv2siv8qi (TARGET_DOTPROD)
#define HAVE_neon_sdotv4siv16qi (TARGET_DOTPROD)
#define HAVE_neon_udotv4siv16qi (TARGET_DOTPROD)
#define HAVE_usdot_prodv2siv8qi (TARGET_I8MM)
#define HAVE_usdot_prodv4siv16qi (TARGET_I8MM)
#define HAVE_copysignv2sf3 (TARGET_NEON)
#define HAVE_copysignv4sf3 (TARGET_NEON)
#define HAVE_neon_vcntv8qi (TARGET_NEON)
#define HAVE_neon_vcntv16qi (TARGET_NEON)
#define HAVE_neon_vmvnv8qi (TARGET_NEON)
#define HAVE_neon_vmvnv16qi (TARGET_NEON)
#define HAVE_neon_vmvnv4hi (TARGET_NEON)
#define HAVE_neon_vmvnv8hi (TARGET_NEON)
#define HAVE_neon_vmvnv2si (TARGET_NEON)
#define HAVE_neon_vmvnv4si (TARGET_NEON)
#define HAVE_neon_vget_lanev8qi (TARGET_NEON)
#define HAVE_neon_vget_lanev16qi (TARGET_NEON)
#define HAVE_neon_vget_lanev4hi (TARGET_NEON)
#define HAVE_neon_vget_lanev8hi (TARGET_NEON)
#define HAVE_neon_vget_lanev2si (TARGET_NEON)
#define HAVE_neon_vget_lanev4si (TARGET_NEON)
#define HAVE_neon_vget_lanev2sf (TARGET_NEON)
#define HAVE_neon_vget_lanev4sf (TARGET_NEON)
#define HAVE_neon_vget_laneuv8qi (TARGET_NEON)
#define HAVE_neon_vget_laneuv16qi (TARGET_NEON)
#define HAVE_neon_vget_laneuv4hi (TARGET_NEON)
#define HAVE_neon_vget_laneuv8hi (TARGET_NEON)
#define HAVE_neon_vget_laneuv2si (TARGET_NEON)
#define HAVE_neon_vget_laneuv4si (TARGET_NEON)
#define HAVE_neon_vget_lanedi (TARGET_NEON)
#define HAVE_neon_vget_lanev2di (TARGET_NEON)
#define HAVE_neon_vset_lanev8qi (TARGET_NEON)
#define HAVE_neon_vset_lanev16qi (TARGET_NEON)
#define HAVE_neon_vset_lanev4hi (TARGET_NEON)
#define HAVE_neon_vset_lanev8hi (TARGET_NEON)
#define HAVE_neon_vset_lanev2si (TARGET_NEON)
#define HAVE_neon_vset_lanev4si (TARGET_NEON)
#define HAVE_neon_vset_lanev4hf (TARGET_NEON)
#define HAVE_neon_vset_lanev8hf (TARGET_NEON)
#define HAVE_neon_vset_lanev2sf (TARGET_NEON)
#define HAVE_neon_vset_lanev4sf (TARGET_NEON)
#define HAVE_neon_vset_lanev2di (TARGET_NEON)
#define HAVE_neon_vset_lanedi (TARGET_NEON)
#define HAVE_neon_vcreatev8qi (TARGET_NEON)
#define HAVE_neon_vcreatev4hi (TARGET_NEON)
#define HAVE_neon_vcreatev2si (TARGET_NEON)
#define HAVE_neon_vcreatev2sf (TARGET_NEON)
#define HAVE_neon_vcreatedi (TARGET_NEON)
#define HAVE_neon_vdup_ndi (TARGET_NEON)
#define HAVE_neon_vdup_lanev8qi (TARGET_NEON)
#define HAVE_neon_vdup_lanev16qi (TARGET_NEON)
#define HAVE_neon_vdup_lanev4hi (TARGET_NEON)
#define HAVE_neon_vdup_lanev8hi (TARGET_NEON)
#define HAVE_neon_vdup_lanev2si (TARGET_NEON)
#define HAVE_neon_vdup_lanev4si (TARGET_NEON)
#define HAVE_neon_vdup_lanev2sf (TARGET_NEON)
#define HAVE_neon_vdup_lanev4sf (TARGET_NEON)
#define HAVE_neon_vdup_lanev8hf (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev4hf (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev4bf (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanev8bf (TARGET_NEON && (TARGET_FP16 || TARGET_BF16_SIMD))
#define HAVE_neon_vdup_lanedi (TARGET_NEON)
#define HAVE_neon_vdup_lanev2di (TARGET_NEON)
#define HAVE_neon_vget_highv16qi (TARGET_NEON)
#define HAVE_neon_vget_highv8hi (TARGET_NEON)
#define HAVE_neon_vget_highv8hf (TARGET_NEON)
#define HAVE_neon_vget_highv8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vget_highv4si (TARGET_NEON)
#define HAVE_neon_vget_highv4sf (TARGET_NEON)
#define HAVE_neon_vget_highv2di (TARGET_NEON)
#define HAVE_neon_vget_lowv16qi (TARGET_NEON)
#define HAVE_neon_vget_lowv8hi (TARGET_NEON)
#define HAVE_neon_vget_lowv8hf (TARGET_NEON)
#define HAVE_neon_vget_lowv8bf (TARGET_NEON)
#define HAVE_neon_vget_lowv4si (TARGET_NEON)
#define HAVE_neon_vget_lowv4sf (TARGET_NEON)
#define HAVE_neon_vget_lowv2di (TARGET_NEON)
#define HAVE_neon_vmul_nv4hi (TARGET_NEON)
#define HAVE_neon_vmul_nv2si (TARGET_NEON)
#define HAVE_neon_vmul_nv2sf (TARGET_NEON)
#define HAVE_neon_vmul_nv8hi (TARGET_NEON)
#define HAVE_neon_vmul_nv4si (TARGET_NEON)
#define HAVE_neon_vmul_nv4sf (TARGET_NEON)
#define HAVE_neon_vmul_nv8hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmul_nv4hf (TARGET_NEON_FP16INST)
#define HAVE_neon_vmulls_nv4hi (TARGET_NEON)
#define HAVE_neon_vmulls_nv2si (TARGET_NEON)
#define HAVE_neon_vmullu_nv4hi (TARGET_NEON)
#define HAVE_neon_vmullu_nv2si (TARGET_NEON)
#define HAVE_neon_vqdmull_nv4hi (TARGET_NEON)
#define HAVE_neon_vqdmull_nv2si (TARGET_NEON)
#define HAVE_neon_vqdmulh_nv4hi (TARGET_NEON)
#define HAVE_neon_vqdmulh_nv2si (TARGET_NEON)
#define HAVE_neon_vqrdmulh_nv4hi (TARGET_NEON)
#define HAVE_neon_vqrdmulh_nv2si (TARGET_NEON)
#define HAVE_neon_vqdmulh_nv8hi (TARGET_NEON)
#define HAVE_neon_vqdmulh_nv4si (TARGET_NEON)
#define HAVE_neon_vqrdmulh_nv8hi (TARGET_NEON)
#define HAVE_neon_vqrdmulh_nv4si (TARGET_NEON)
#define HAVE_neon_vmla_nv4hi (TARGET_NEON)
#define HAVE_neon_vmla_nv2si (TARGET_NEON)
#define HAVE_neon_vmla_nv2sf (TARGET_NEON)
#define HAVE_neon_vmla_nv8hi (TARGET_NEON)
#define HAVE_neon_vmla_nv4si (TARGET_NEON)
#define HAVE_neon_vmla_nv4sf (TARGET_NEON)
#define HAVE_neon_vmlals_nv4hi (TARGET_NEON)
#define HAVE_neon_vmlals_nv2si (TARGET_NEON)
#define HAVE_neon_vmlalu_nv4hi (TARGET_NEON)
#define HAVE_neon_vmlalu_nv2si (TARGET_NEON)
#define HAVE_neon_vqdmlal_nv4hi (TARGET_NEON)
#define HAVE_neon_vqdmlal_nv2si (TARGET_NEON)
#define HAVE_neon_vmls_nv4hi (TARGET_NEON)
#define HAVE_neon_vmls_nv2si (TARGET_NEON)
#define HAVE_neon_vmls_nv2sf (TARGET_NEON)
#define HAVE_neon_vmls_nv8hi (TARGET_NEON)
#define HAVE_neon_vmls_nv4si (TARGET_NEON)
#define HAVE_neon_vmls_nv4sf (TARGET_NEON)
#define HAVE_neon_vmlsls_nv4hi (TARGET_NEON)
#define HAVE_neon_vmlsls_nv2si (TARGET_NEON)
#define HAVE_neon_vmlslu_nv4hi (TARGET_NEON)
#define HAVE_neon_vmlslu_nv2si (TARGET_NEON)
#define HAVE_neon_vqdmlsl_nv4hi (TARGET_NEON)
#define HAVE_neon_vqdmlsl_nv2si (TARGET_NEON)
#define HAVE_neon_vbslv8qi (TARGET_NEON)
#define HAVE_neon_vbslv16qi (TARGET_NEON)
#define HAVE_neon_vbslv4hi (TARGET_NEON)
#define HAVE_neon_vbslv8hi (TARGET_NEON)
#define HAVE_neon_vbslv2si (TARGET_NEON)
#define HAVE_neon_vbslv4si (TARGET_NEON)
#define HAVE_neon_vbslv4hf (TARGET_NEON)
#define HAVE_neon_vbslv8hf (TARGET_NEON)
#define HAVE_neon_vbslv4bf (TARGET_NEON)
#define HAVE_neon_vbslv8bf (TARGET_NEON)
#define HAVE_neon_vbslv2sf (TARGET_NEON)
#define HAVE_neon_vbslv4sf (TARGET_NEON)
#define HAVE_neon_vbsldi (TARGET_NEON)
#define HAVE_neon_vbslv2di (TARGET_NEON)
#define HAVE_neon_vtrnv8qi_internal (TARGET_NEON)
#define HAVE_neon_vtrnv16qi_internal (TARGET_NEON)
#define HAVE_neon_vtrnv4hi_internal (TARGET_NEON)
#define HAVE_neon_vtrnv8hi_internal (TARGET_NEON)
#define HAVE_neon_vtrnv2si_internal (TARGET_NEON)
#define HAVE_neon_vtrnv4si_internal (TARGET_NEON)
#define HAVE_neon_vtrnv2sf_internal (TARGET_NEON)
#define HAVE_neon_vtrnv4sf_internal (TARGET_NEON)
#define HAVE_neon_vtrnv8hf_internal (TARGET_NEON)
#define HAVE_neon_vtrnv4hf_internal (TARGET_NEON)
#define HAVE_neon_vzipv8qi_internal (TARGET_NEON)
#define HAVE_neon_vzipv16qi_internal (TARGET_NEON)
#define HAVE_neon_vzipv4hi_internal (TARGET_NEON)
#define HAVE_neon_vzipv8hi_internal (TARGET_NEON)
#define HAVE_neon_vzipv2si_internal (TARGET_NEON)
#define HAVE_neon_vzipv4si_internal (TARGET_NEON)
#define HAVE_neon_vzipv2sf_internal (TARGET_NEON)
#define HAVE_neon_vzipv4sf_internal (TARGET_NEON)
#define HAVE_neon_vzipv8hf_internal (TARGET_NEON)
#define HAVE_neon_vzipv4hf_internal (TARGET_NEON)
#define HAVE_neon_vuzpv8qi_internal (TARGET_NEON)
#define HAVE_neon_vuzpv16qi_internal (TARGET_NEON)
#define HAVE_neon_vuzpv4hi_internal (TARGET_NEON)
#define HAVE_neon_vuzpv8hi_internal (TARGET_NEON)
#define HAVE_neon_vuzpv2si_internal (TARGET_NEON)
#define HAVE_neon_vuzpv4si_internal (TARGET_NEON)
#define HAVE_neon_vuzpv2sf_internal (TARGET_NEON)
#define HAVE_neon_vuzpv4sf_internal (TARGET_NEON)
#define HAVE_neon_vuzpv8hf_internal (TARGET_NEON)
#define HAVE_neon_vuzpv4hf_internal (TARGET_NEON)
#define HAVE_vec_load_lanesv8qiv8qi (TARGET_NEON)
#define HAVE_vec_load_lanesv16qiv16qi (TARGET_NEON)
#define HAVE_vec_load_lanesv4hiv4hi (TARGET_NEON)
#define HAVE_vec_load_lanesv8hiv8hi (TARGET_NEON)
#define HAVE_vec_load_lanesv2siv2si (TARGET_NEON)
#define HAVE_vec_load_lanesv4siv4si (TARGET_NEON)
#define HAVE_vec_load_lanesv4hfv4hf (TARGET_NEON)
#define HAVE_vec_load_lanesv8hfv8hf (TARGET_NEON)
#define HAVE_vec_load_lanesv4bfv4bf (TARGET_NEON)
#define HAVE_vec_load_lanesv8bfv8bf (TARGET_NEON)
#define HAVE_vec_load_lanesv2sfv2sf (TARGET_NEON)
#define HAVE_vec_load_lanesv4sfv4sf (TARGET_NEON)
#define HAVE_vec_load_lanesdidi (TARGET_NEON)
#define HAVE_vec_load_lanesv2div2di (TARGET_NEON)
#define HAVE_neon_vld1q_x3v16qi (TARGET_NEON)
#define HAVE_neon_vld1q_x3v8hi (TARGET_NEON)
#define HAVE_neon_vld1q_x3v8hf (TARGET_NEON)
#define HAVE_neon_vld1q_x3v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1q_x3v4si (TARGET_NEON)
#define HAVE_neon_vld1q_x3v4sf (TARGET_NEON)
#define HAVE_neon_vld1q_x3v2di (TARGET_NEON)
#define HAVE_neon_vld1q_x4v16qi (TARGET_NEON)
#define HAVE_neon_vld1q_x4v8hi (TARGET_NEON)
#define HAVE_neon_vld1q_x4v8hf (TARGET_NEON)
#define HAVE_neon_vld1q_x4v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld1q_x4v4si (TARGET_NEON)
#define HAVE_neon_vld1q_x4v4sf (TARGET_NEON)
#define HAVE_neon_vld1q_x4v2di (TARGET_NEON)
#define HAVE_neon_vld1_dupdi (TARGET_NEON)
#define HAVE_vec_store_lanesv8qiv8qi (TARGET_NEON)
#define HAVE_vec_store_lanesv16qiv16qi (TARGET_NEON)
#define HAVE_vec_store_lanesv4hiv4hi (TARGET_NEON)
#define HAVE_vec_store_lanesv8hiv8hi (TARGET_NEON)
#define HAVE_vec_store_lanesv2siv2si (TARGET_NEON)
#define HAVE_vec_store_lanesv4siv4si (TARGET_NEON)
#define HAVE_vec_store_lanesv4hfv4hf (TARGET_NEON)
#define HAVE_vec_store_lanesv8hfv8hf (TARGET_NEON)
#define HAVE_vec_store_lanesv4bfv4bf (TARGET_NEON)
#define HAVE_vec_store_lanesv8bfv8bf (TARGET_NEON)
#define HAVE_vec_store_lanesv2sfv2sf (TARGET_NEON)
#define HAVE_vec_store_lanesv4sfv4sf (TARGET_NEON)
#define HAVE_vec_store_lanesdidi (TARGET_NEON)
#define HAVE_vec_store_lanesv2div2di (TARGET_NEON)
#define HAVE_neon_vst1q_x3v8qi (TARGET_NEON)
#define HAVE_neon_vst1q_x3v16qi (TARGET_NEON)
#define HAVE_neon_vst1q_x3v4hi (TARGET_NEON)
#define HAVE_neon_vst1q_x3v8hi (TARGET_NEON)
#define HAVE_neon_vst1q_x3v2si (TARGET_NEON)
#define HAVE_neon_vst1q_x3v4si (TARGET_NEON)
#define HAVE_neon_vst1q_x3v4hf (TARGET_NEON)
#define HAVE_neon_vst1q_x3v8hf (TARGET_NEON)
#define HAVE_neon_vst1q_x3v4bf (TARGET_NEON)
#define HAVE_neon_vst1q_x3v8bf (TARGET_NEON)
#define HAVE_neon_vst1q_x3v2sf (TARGET_NEON)
#define HAVE_neon_vst1q_x3v4sf (TARGET_NEON)
#define HAVE_neon_vst1q_x3di (TARGET_NEON)
#define HAVE_neon_vst1q_x3v2di (TARGET_NEON)
#define HAVE_neon_vst1q_x4v16qi (TARGET_NEON)
#define HAVE_neon_vst1q_x4v8hi (TARGET_NEON)
#define HAVE_neon_vst1q_x4v8hf (TARGET_NEON)
#define HAVE_neon_vst1q_x4v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst1q_x4v4si (TARGET_NEON)
#define HAVE_neon_vst1q_x4v4sf (TARGET_NEON)
#define HAVE_neon_vst1q_x4v2di (TARGET_NEON)
#define HAVE_vec_load_lanestiv8qi (TARGET_NEON)
#define HAVE_vec_load_lanestiv4hi (TARGET_NEON)
#define HAVE_vec_load_lanestiv4hf (TARGET_NEON)
#define HAVE_vec_load_lanestiv4bf (TARGET_NEON)
#define HAVE_vec_load_lanestiv2si (TARGET_NEON)
#define HAVE_vec_load_lanestiv2sf (TARGET_NEON)
#define HAVE_vec_load_lanestidi (TARGET_NEON)
#define HAVE_vec_store_lanestiv8qi (TARGET_NEON)
#define HAVE_vec_store_lanestiv4hi (TARGET_NEON)
#define HAVE_vec_store_lanestiv4hf (TARGET_NEON)
#define HAVE_vec_store_lanestiv4bf (TARGET_NEON)
#define HAVE_vec_store_lanestiv2si (TARGET_NEON)
#define HAVE_vec_store_lanestiv2sf (TARGET_NEON)
#define HAVE_vec_store_lanestidi (TARGET_NEON)
#define HAVE_vec_load_laneseiv8qi (TARGET_NEON)
#define HAVE_vec_load_laneseiv4hi (TARGET_NEON)
#define HAVE_vec_load_laneseiv4hf (TARGET_NEON)
#define HAVE_vec_load_laneseiv4bf (TARGET_NEON)
#define HAVE_vec_load_laneseiv2si (TARGET_NEON)
#define HAVE_vec_load_laneseiv2sf (TARGET_NEON)
#define HAVE_vec_load_laneseidi (TARGET_NEON)
#define HAVE_vec_load_lanesciv16qi (TARGET_NEON)
#define HAVE_vec_load_lanesciv8hi (TARGET_NEON)
#define HAVE_vec_load_lanesciv8hf (TARGET_NEON)
#define HAVE_vec_load_lanesciv4si (TARGET_NEON)
#define HAVE_vec_load_lanesciv4sf (TARGET_NEON)
#define HAVE_neon_vld3v16qi (TARGET_NEON)
#define HAVE_neon_vld3v8hi (TARGET_NEON)
#define HAVE_neon_vld3v8hf (TARGET_NEON)
#define HAVE_neon_vld3v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld3v4si (TARGET_NEON)
#define HAVE_neon_vld3v4sf (TARGET_NEON)
#define HAVE_vec_store_laneseiv8qi (TARGET_NEON)
#define HAVE_vec_store_laneseiv4hi (TARGET_NEON)
#define HAVE_vec_store_laneseiv4hf (TARGET_NEON)
#define HAVE_vec_store_laneseiv4bf (TARGET_NEON)
#define HAVE_vec_store_laneseiv2si (TARGET_NEON)
#define HAVE_vec_store_laneseiv2sf (TARGET_NEON)
#define HAVE_vec_store_laneseidi (TARGET_NEON)
#define HAVE_vec_store_lanesciv16qi (TARGET_NEON)
#define HAVE_vec_store_lanesciv8hi (TARGET_NEON)
#define HAVE_vec_store_lanesciv8hf (TARGET_NEON)
#define HAVE_vec_store_lanesciv4si (TARGET_NEON)
#define HAVE_vec_store_lanesciv4sf (TARGET_NEON)
#define HAVE_neon_vst3v16qi (TARGET_NEON)
#define HAVE_neon_vst3v8hi (TARGET_NEON)
#define HAVE_neon_vst3v8hf (TARGET_NEON)
#define HAVE_neon_vst3v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst3v4si (TARGET_NEON)
#define HAVE_neon_vst3v4sf (TARGET_NEON)
#define HAVE_vec_load_lanesoiv8qi (TARGET_NEON)
#define HAVE_vec_load_lanesoiv4hi (TARGET_NEON)
#define HAVE_vec_load_lanesoiv4hf (TARGET_NEON)
#define HAVE_vec_load_lanesoiv4bf (TARGET_NEON)
#define HAVE_vec_load_lanesoiv2si (TARGET_NEON)
#define HAVE_vec_load_lanesoiv2sf (TARGET_NEON)
#define HAVE_vec_load_lanesoidi (TARGET_NEON)
#define HAVE_neon_vld4v16qi (TARGET_NEON)
#define HAVE_neon_vld4v8hi (TARGET_NEON)
#define HAVE_neon_vld4v8hf (TARGET_NEON)
#define HAVE_neon_vld4v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vld4v4si (TARGET_NEON)
#define HAVE_neon_vld4v4sf (TARGET_NEON)
#define HAVE_vec_store_lanesoiv8qi (TARGET_NEON)
#define HAVE_vec_store_lanesoiv4hi (TARGET_NEON)
#define HAVE_vec_store_lanesoiv4hf (TARGET_NEON)
#define HAVE_vec_store_lanesoiv4bf (TARGET_NEON)
#define HAVE_vec_store_lanesoiv2si (TARGET_NEON)
#define HAVE_vec_store_lanesoiv2sf (TARGET_NEON)
#define HAVE_vec_store_lanesoidi (TARGET_NEON)
#define HAVE_neon_vst4v16qi (TARGET_NEON)
#define HAVE_neon_vst4v8hi (TARGET_NEON)
#define HAVE_neon_vst4v8hf (TARGET_NEON)
#define HAVE_neon_vst4v8bf ((TARGET_NEON) && (TARGET_BF16_SIMD))
#define HAVE_neon_vst4v4si (TARGET_NEON)
#define HAVE_neon_vst4v4sf (TARGET_NEON)
#define HAVE_vec_unpacks_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacku_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_smult_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_umult_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_lo_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_lo_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_lo_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_hi_v16qi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_hi_v8hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_sshiftl_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_widen_ushiftl_hi_v4si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_unpacks_lo_v8qi (TARGET_NEON)
#define HAVE_vec_unpacku_lo_v8qi (TARGET_NEON)
#define HAVE_vec_unpacks_lo_v4hi (TARGET_NEON)
#define HAVE_vec_unpacku_lo_v4hi (TARGET_NEON)
#define HAVE_vec_unpacks_lo_v2si (TARGET_NEON)
#define HAVE_vec_unpacku_lo_v2si (TARGET_NEON)
#define HAVE_vec_unpacks_hi_v8qi (TARGET_NEON)
#define HAVE_vec_unpacku_hi_v8qi (TARGET_NEON)
#define HAVE_vec_unpacks_hi_v4hi (TARGET_NEON)
#define HAVE_vec_unpacku_hi_v4hi (TARGET_NEON)
#define HAVE_vec_unpacks_hi_v2si (TARGET_NEON)
#define HAVE_vec_unpacku_hi_v2si (TARGET_NEON)
#define HAVE_vec_widen_smult_hi_v8qi (TARGET_NEON)
#define HAVE_vec_widen_umult_hi_v8qi (TARGET_NEON)
#define HAVE_vec_widen_smult_hi_v4hi (TARGET_NEON)
#define HAVE_vec_widen_umult_hi_v4hi (TARGET_NEON)
#define HAVE_vec_widen_smult_hi_v2si (TARGET_NEON)
#define HAVE_vec_widen_umult_hi_v2si (TARGET_NEON)
#define HAVE_vec_widen_smult_lo_v8qi (TARGET_NEON)
#define HAVE_vec_widen_umult_lo_v8qi (TARGET_NEON)
#define HAVE_vec_widen_smult_lo_v4hi (TARGET_NEON)
#define HAVE_vec_widen_umult_lo_v4hi (TARGET_NEON)
#define HAVE_vec_widen_smult_lo_v2si (TARGET_NEON)
#define HAVE_vec_widen_umult_lo_v2si (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_hi_v8qi (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_hi_v8qi (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_hi_v4hi (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_hi_v4hi (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_hi_v2si (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_hi_v2si (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_lo_v8qi (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_lo_v8qi (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_lo_v4hi (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_lo_v4hi (TARGET_NEON)
#define HAVE_vec_widen_sshiftl_lo_v2si (TARGET_NEON)
#define HAVE_vec_widen_ushiftl_lo_v2si (TARGET_NEON)
#define HAVE_vec_pack_trunc_v4hi (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_pack_trunc_v2si (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_vec_pack_trunc_di (TARGET_NEON && !BYTES_BIG_ENDIAN)
#define HAVE_neon_vbfcvtbf (TARGET_BF16_FP)
#define HAVE_neon_vfmab_laneqv8bf (TARGET_BF16_SIMD)
#define HAVE_neon_vfmat_laneqv8bf (TARGET_BF16_SIMD)
#define HAVE_crypto_aesd (TARGET_CRYPTO)
#define HAVE_crypto_aese (TARGET_CRYPTO)
#define HAVE_crypto_sha1h (TARGET_CRYPTO)
#define HAVE_crypto_sha1c (TARGET_CRYPTO)
#define HAVE_crypto_sha1m (TARGET_CRYPTO)
#define HAVE_crypto_sha1p (TARGET_CRYPTO)
#define HAVE_memory_barrier (TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_loadqi 1
#define HAVE_atomic_loadhi 1
#define HAVE_atomic_loadsi 1
#define HAVE_atomic_storeqi 1
#define HAVE_atomic_storehi 1
#define HAVE_atomic_storesi 1
#define HAVE_atomic_loaddi ((TARGET_HAVE_LDREXD || TARGET_HAVE_LPAE || TARGET_HAVE_LDACQEXD) \
   && ARM_DOUBLEWORD_ALIGN)
#define HAVE_atomic_compare_and_swapqi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_compare_and_swaphi (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_compare_and_swapsi (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_atomic_compare_and_swapdi (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN \
	&& TARGET_HAVE_MEMORY_BARRIER)
#define HAVE_addv4qq3 (TARGET_INT_SIMD)
#define HAVE_addv2hq3 (TARGET_INT_SIMD)
#define HAVE_addv2ha3 (TARGET_INT_SIMD)
#define HAVE_ssaddv4qq3 (TARGET_INT_SIMD)
#define HAVE_ssaddv2hq3 (TARGET_INT_SIMD)
#define HAVE_ssaddqq3 (TARGET_INT_SIMD)
#define HAVE_ssaddhq3 (TARGET_INT_SIMD)
#define HAVE_ssaddv2ha3 (TARGET_INT_SIMD)
#define HAVE_ssaddha3 (TARGET_INT_SIMD)
#define HAVE_ssaddsq3 (TARGET_INT_SIMD)
#define HAVE_ssaddsa3 (TARGET_INT_SIMD)
#define HAVE_subv4qq3 (TARGET_INT_SIMD)
#define HAVE_subv2hq3 (TARGET_INT_SIMD)
#define HAVE_subv2ha3 (TARGET_INT_SIMD)
#define HAVE_sssubv4qq3 (TARGET_INT_SIMD)
#define HAVE_sssubv2hq3 (TARGET_INT_SIMD)
#define HAVE_sssubqq3 (TARGET_INT_SIMD)
#define HAVE_sssubhq3 (TARGET_INT_SIMD)
#define HAVE_sssubv2ha3 (TARGET_INT_SIMD)
#define HAVE_sssubha3 (TARGET_INT_SIMD)
#define HAVE_sssubsq3 (TARGET_INT_SIMD)
#define HAVE_sssubsa3 (TARGET_INT_SIMD)
#define HAVE_mulqq3 (TARGET_DSP_MULTIPLY && arm_arch_thumb2)
#define HAVE_mulhq3 (TARGET_DSP_MULTIPLY && arm_arch_thumb2)
#define HAVE_mulsq3 (TARGET_32BIT)
#define HAVE_mulsa3 (TARGET_32BIT)
#define HAVE_mulusa3 (TARGET_32BIT)
#define HAVE_ssmulsa3 (TARGET_32BIT && arm_arch6)
#define HAVE_usmulusa3 (TARGET_32BIT && arm_arch6)
#define HAVE_mulha3 (TARGET_DSP_MULTIPLY && arm_arch_thumb2)
#define HAVE_muluha3 (TARGET_DSP_MULTIPLY)
#define HAVE_ssmulha3 (TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
#define HAVE_usmuluha3 (TARGET_INT_SIMD)
#define HAVE_mve_vmvnq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vmvnq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vclzq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vandq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vbicq_sv4si (TARGET_HAVE_MVE)
#define HAVE_cadd90v16qi3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_cadd270v16qi3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_cadd90v8hi3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_cadd270v8hi3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_cadd90v4si3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_cadd270v4si3 (TARGET_HAVE_MVE && !BYTES_BIG_ENDIAN)
#define HAVE_mve_veorq_sv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_sv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_veorq_sv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vornq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_vorrq_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_wb_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_n_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_n_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_n_uv4si (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv16qi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv8hi (TARGET_HAVE_MVE)
#define HAVE_mve_viwdupq_m_wb_uv4si (TARGET_HAVE_MVE)
#define HAVE_movv16bi (TARGET_HAVE_MVE)
#define HAVE_movv8bi (TARGET_HAVE_MVE)
#define HAVE_movv4bi (TARGET_HAVE_MVE)
#define HAVE_movv2qi (TARGET_HAVE_MVE)
#define HAVE_vec_cmpv16qiv16bi (TARGET_HAVE_MVE \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv8hiv8bi (TARGET_HAVE_MVE \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4siv4bi (TARGET_HAVE_MVE \
   && (!false || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv8hfv8bi (TARGET_HAVE_MVE \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpv4sfv4bi (TARGET_HAVE_MVE \
   && (!true || flag_unsafe_math_optimizations))
#define HAVE_vec_cmpuv16qiv16bi (TARGET_HAVE_MVE)
#define HAVE_vec_cmpuv8hiv8bi (TARGET_HAVE_MVE)
#define HAVE_vec_cmpuv4siv4bi (TARGET_HAVE_MVE)
#define HAVE_vcond_mask_v16qiv16bi (TARGET_HAVE_MVE)
#define HAVE_vcond_mask_v8hiv8bi (TARGET_HAVE_MVE)
#define HAVE_vcond_mask_v4siv4bi (TARGET_HAVE_MVE)
#define HAVE_vcond_mask_v8hfv8bi (TARGET_HAVE_MVE)
#define HAVE_vcond_mask_v4sfv4bi (TARGET_HAVE_MVE)
#define HAVE_arm_mve_reinterpretv16qi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V16QImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V16QImode)))
#define HAVE_arm_mve_reinterpretv8hi ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HImode)))
#define HAVE_arm_mve_reinterpretv4si ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SImode)))
#define HAVE_arm_mve_reinterpretv2di ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V2DImode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V2DImode)))
#define HAVE_arm_mve_reinterpretv8hf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V8HFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V8HFmode)))
#define HAVE_arm_mve_reinterpretv4sf ((TARGET_HAVE_MVE && VALID_MVE_SI_MODE (V4SFmode)) \
    || (TARGET_HAVE_MVE_FLOAT && VALID_MVE_SF_MODE (V4SFmode)))
extern rtx        gen_addsi3_compareV_reg                              (rtx, rtx, rtx);
extern rtx        gen_subvsi3_intmin                                   (rtx, rtx);
extern rtx        gen_addsi3_compareV_imm                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_compareV_imm_nosum                        (rtx, rtx);
extern rtx        gen_addsi3_compare0                                  (rtx, rtx, rtx);
extern rtx        gen_cmpsi2_addneg                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_compare_op1                               (rtx, rtx, rtx);
extern rtx        gen_addsi3_carryin                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_add0si3_carryin                                  (rtx, rtx, rtx);
extern rtx        gen_subsi3_compare1                                  (rtx, rtx, rtx);
extern rtx        gen_subvsi3                                          (rtx, rtx, rtx);
extern rtx        gen_subvsi3_imm1                                     (rtx, rtx, rtx);
extern rtx        gen_subsi3_carryin                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_rsbsi_carryin_reg                                (rtx, rtx, rtx);
extern rtx        gen_add_not_shift_cin                                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi3_carryin_CC_NVout                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi3_carryin_CC_Bout                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi3_imm_carryin_CC_NVout                      (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi3_imm_carryin_CC_Bout                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi3_0_carryin_CC_NVout                        (rtx, rtx, rtx);
extern rtx        gen_cmpsi3_0_carryin_CC_Bout                         (rtx, rtx, rtx);
extern rtx        gen_subsi3_compare0                                  (rtx, rtx, rtx);
extern rtx        gen_subsi3_compare                                   (rtx, rtx, rtx);
extern rtx        gen_rsb_imm_compare                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_rsb_imm_compare_scratch                          (rtx, rtx, rtx);
extern rtx        gen_rscsi3_CC_NVout_scratch                          (rtx, rtx, rtx, rtx);
extern rtx        gen_rscsi3_CC_Bout_scratch                           (rtx, rtx, rtx, rtx);
extern rtx        gen_usubvsi3_borrow                                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_usubvsi3_borrow_imm                              (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subvsi3_borrow                                   (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subvsi3_borrow_imm                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_smull                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_umull                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_smlal                                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_umlal                                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mulhisi3                                         (rtx, rtx, rtx);
extern rtx        gen_arm_smlabb_setq                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_maddhisi4tb                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlatb_setq                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_maddhisi4tt                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlatt_setq                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_maddhidi4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawb_insn                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawb_setq_insn                             (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawt_insn                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawt_setq_insn                             (rtx, rtx, rtx, rtx);
extern rtx        gen_insv_zero                                        (rtx, rtx, rtx);
extern rtx        gen_insv_t2                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi_notsi_si                                   (rtx, rtx, rtx);
extern rtx        gen_andsi_not_shiftsi_si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_andsi_not_shiftsi_si_scc_no_reuse                (rtx, rtx, rtx, rtx);
extern rtx        gen_andsi_not_shiftsi_si_scc                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_qadd_insn                                    (rtx, rtx, rtx);
extern rtx        gen_arm_qadd_setq_insn                               (rtx, rtx, rtx);
extern rtx        gen_arm_qsub_insn                                    (rtx, rtx, rtx);
extern rtx        gen_arm_qsub_setq_insn                               (rtx, rtx, rtx);
extern rtx        gen_arm_get_apsr                                     (rtx);
extern rtx        gen_arm_set_apsr                                     (rtx);
extern rtx        gen_satsi_smin                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_satsi_smin_setq                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_satsi_smax                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_satsi_smax_setq                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx1si                                        (rtx, rtx, rtx);
extern rtx        gen_arm_cx1di                                        (rtx, rtx, rtx);
extern rtx        gen_arm_cx1asi                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx1adi                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx2si                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx2di                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx2asi                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx2adi                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx3si                                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx3di                                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx3asi                                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cx3adi                                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_unaligned_loaddi                                 (rtx, rtx);
extern rtx        gen_unaligned_loadsi                                 (rtx, rtx);
extern rtx        gen_unaligned_loadhis                                (rtx, rtx);
extern rtx        gen_unaligned_loadhiu                                (rtx, rtx);
extern rtx        gen_unaligned_storedi                                (rtx, rtx);
extern rtx        gen_unaligned_storesi                                (rtx, rtx);
extern rtx        gen_unaligned_storehi                                (rtx, rtx);
extern rtx        gen_extzv_t2                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_divsi3                                           (rtx, rtx, rtx);
extern rtx        gen_udivsi3                                          (rtx, rtx, rtx);
extern rtx        gen_negsi2_0compare                                  (rtx, rtx);
extern rtx        gen_negsi2_carryin                                   (rtx, rtx, rtx);
extern rtx        gen_arm_sxtb16                                       (rtx, rtx);
extern rtx        gen_arm_uxtb16                                       (rtx, rtx);
extern rtx        gen_arm_qadd8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_qsub8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_shadd8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_shsub8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uhadd8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uhsub8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uqadd8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uqsub8                                       (rtx, rtx, rtx);
extern rtx        gen_arm_qadd16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_qasx                                         (rtx, rtx, rtx);
extern rtx        gen_arm_qsax                                         (rtx, rtx, rtx);
extern rtx        gen_arm_qsub16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_shadd16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_shasx                                        (rtx, rtx, rtx);
extern rtx        gen_arm_shsax                                        (rtx, rtx, rtx);
extern rtx        gen_arm_shsub16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_uhadd16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_uhasx                                        (rtx, rtx, rtx);
extern rtx        gen_arm_uhsax                                        (rtx, rtx, rtx);
extern rtx        gen_arm_uhsub16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_uqadd16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_uqasx                                        (rtx, rtx, rtx);
extern rtx        gen_arm_uqsax                                        (rtx, rtx, rtx);
extern rtx        gen_arm_uqsub16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_smusd                                        (rtx, rtx, rtx);
extern rtx        gen_arm_smusdx                                       (rtx, rtx, rtx);
extern rtx        gen_arm_sxtab16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_uxtab16                                      (rtx, rtx, rtx);
extern rtx        gen_arm_usad8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_usada8                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlald                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlaldx                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsld                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsldx                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_sadd8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_ssub8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_uadd8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_usub8                                        (rtx, rtx, rtx);
extern rtx        gen_arm_sadd16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_sasx                                         (rtx, rtx, rtx);
extern rtx        gen_arm_ssax                                         (rtx, rtx, rtx);
extern rtx        gen_arm_ssub16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uadd16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_uasx                                         (rtx, rtx, rtx);
extern rtx        gen_arm_usax                                         (rtx, rtx, rtx);
extern rtx        gen_arm_usub16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_smlad_insn                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlad_setq_insn                              (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smladx_insn                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smladx_setq_insn                             (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsd_insn                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsd_setq_insn                              (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsdx_insn                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsdx_setq_insn                             (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smuad_insn                                   (rtx, rtx, rtx);
extern rtx        gen_arm_smuad_setq_insn                              (rtx, rtx, rtx);
extern rtx        gen_arm_smuadx_insn                                  (rtx, rtx, rtx);
extern rtx        gen_arm_smuadx_setq_insn                             (rtx, rtx, rtx);
extern rtx        gen_arm_ssat16_insn                                  (rtx, rtx, rtx);
extern rtx        gen_arm_ssat16_setq_insn                             (rtx, rtx, rtx);
extern rtx        gen_arm_usat16_insn                                  (rtx, rtx, rtx);
extern rtx        gen_arm_usat16_setq_insn                             (rtx, rtx, rtx);
extern rtx        gen_arm_sel                                          (rtx, rtx, rtx);
extern rtx        gen_pic_load_addr_unified                            (rtx, rtx, rtx);
extern rtx        gen_pic_load_addr_32bit                              (rtx, rtx);
extern rtx        gen_pic_load_addr_thumb1                             (rtx, rtx);
extern rtx        gen_pic_add_dot_plus_four                            (rtx, rtx, rtx);
extern rtx        gen_pic_add_dot_plus_eight                           (rtx, rtx, rtx);
extern rtx        gen_tls_load_dot_plus_eight                          (rtx, rtx, rtx);
static inline rtx gen_pic_offset_arm                                   (rtx, rtx, rtx);
static inline rtx
gen_pic_offset_arm(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c))
{
  return 0;
}
extern rtx        gen_arm_cond_branch                                  (rtx, rtx, rtx);
extern rtx        gen_restore_pic_register_after_call                  (rtx, rtx);
extern rtx        gen_blockage                                         (void);
extern rtx        gen_probe_stack                                      (rtx);
extern rtx        gen_probe_stack_range                                (rtx, rtx, rtx);
extern rtx        gen_arm_stack_protect_test_insn                      (rtx, rtx, rtx);
extern rtx        gen_stack_protect_set_tls                            (rtx, rtx);
extern rtx        gen_stack_protect_test_tls                           (rtx, rtx);
extern rtx        gen_nop                                              (void);
extern rtx        gen_trap                                             (void);
extern rtx        gen_movcond_addsi                                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movcond                                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_stack_tie                                        (rtx, rtx);
extern rtx        gen_align_4                                          (void);
extern rtx        gen_align_8                                          (void);
extern rtx        gen_consttable_end                                   (void);
extern rtx        gen_consttable_1                                     (rtx);
extern rtx        gen_consttable_2                                     (rtx);
extern rtx        gen_consttable_4                                     (rtx);
extern rtx        gen_consttable_8                                     (rtx);
extern rtx        gen_consttable_16                                    (rtx);
extern rtx        gen_clzsi2                                           (rtx, rtx);
extern rtx        gen_arm_rbit                                         (rtx, rtx);
extern rtx        gen_ctzsi2                                           (rtx, rtx);
extern rtx        gen_prefetch                                         (rtx, rtx, rtx);
extern rtx        gen_force_register_use                               (rtx);
extern rtx        gen_arm_eh_return                                    (rtx);
extern rtx        gen_load_tp_hard                                     (rtx);
extern rtx        gen_reload_tp_hard                                   (rtx);
extern rtx        gen_load_tp_soft_fdpic                               (void);
extern rtx        gen_load_tp_soft                                     (void);
extern rtx        gen_tlscall                                          (rtx, rtx);
extern rtx        gen_arm_rev16si2_alt1                                (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_rev16si2                                     (rtx, rtx);
extern rtx        gen_arm_crc32b                                       (rtx, rtx, rtx);
extern rtx        gen_arm_crc32h                                       (rtx, rtx, rtx);
extern rtx        gen_arm_crc32w                                       (rtx, rtx, rtx);
extern rtx        gen_arm_crc32cb                                      (rtx, rtx, rtx);
extern rtx        gen_arm_crc32ch                                      (rtx, rtx, rtx);
extern rtx        gen_arm_crc32cw                                      (rtx, rtx, rtx);
extern rtx        gen_arm_cdp                                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_cdp2                                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mcr                                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mcr2                                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mrc                                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mrc2                                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mcrr                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mcrr2                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mrrc                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mrrc2                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_pac_nop                                          (void);
extern rtx        gen_pacbti_nop                                       (void);
extern rtx        gen_aut_nop                                          (void);
extern rtx        gen_bti_nop                                          (void);
extern rtx        gen_mve_vshlq_sv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_sv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_sv2si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv2si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_abshf2                                           (rtx, rtx);
extern rtx        gen_neghf2                                           (rtx, rtx);
extern rtx        gen_neon_vrndhf                                      (rtx, rtx);
extern rtx        gen_neon_vrndahf                                     (rtx, rtx);
extern rtx        gen_neon_vrndmhf                                     (rtx, rtx);
extern rtx        gen_neon_vrndnhf                                     (rtx, rtx);
extern rtx        gen_neon_vrndphf                                     (rtx, rtx);
extern rtx        gen_neon_vrndxhf                                     (rtx, rtx);
extern rtx        gen_neon_vrndihf                                     (rtx, rtx);
extern rtx        gen_addhf3                                           (rtx, rtx, rtx);
extern rtx        gen_subhf3                                           (rtx, rtx, rtx);
extern rtx        gen_divhf3                                           (rtx, rtx, rtx);
extern rtx        gen_mulhf3                                           (rtx, rtx, rtx);
extern rtx        gen_fmahf4                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fmasf4                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsubhf4_fp16                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_extendhfsf2                                      (rtx, rtx);
extern rtx        gen_truncsfhf2                                       (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                                (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                                (rtx, rtx);
extern rtx        gen_floatunssisf2                                    (rtx, rtx);
extern rtx        gen_floatunssidf2                                    (rtx, rtx);
extern rtx        gen_neon_vsqrthf                                     (rtx, rtx);
extern rtx        gen_neon_vrsqrtshf                                   (rtx, rtx, rtx);
extern rtx        gen_push_fpsysreg_insn                               (rtx, rtx);
extern rtx        gen_pop_fpsysreg_insn                                (rtx, rtx);
extern rtx        gen_lazy_store_multiple_insn                         (rtx);
extern rtx        gen_lazy_load_multiple_insn                          (rtx);
extern rtx        gen_neon_vcvthshf                                    (rtx, rtx);
extern rtx        gen_neon_vcvthuhf                                    (rtx, rtx);
extern rtx        gen_neon_vcvthssi                                    (rtx, rtx);
extern rtx        gen_neon_vcvthusi                                    (rtx, rtx);
extern rtx        gen_neon_vcvths_nhf_unspec                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcvthu_nhf_unspec                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcvths_nsi_unspec                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcvthu_nsi_unspec                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtahssi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtahusi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtmhssi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtmhusi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtnhssi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtnhusi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtphssi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtphusi                                   (rtx, rtx);
extern rtx        gen_btruncsf2                                        (rtx, rtx);
extern rtx        gen_ceilsf2                                          (rtx, rtx);
extern rtx        gen_floorsf2                                         (rtx, rtx);
extern rtx        gen_nearbyintsf2                                     (rtx, rtx);
extern rtx        gen_rintsf2                                          (rtx, rtx);
extern rtx        gen_roundsf2                                         (rtx, rtx);
extern rtx        gen_btruncdf2                                        (rtx, rtx);
extern rtx        gen_ceildf2                                          (rtx, rtx);
extern rtx        gen_floordf2                                         (rtx, rtx);
extern rtx        gen_nearbyintdf2                                     (rtx, rtx);
extern rtx        gen_rintdf2                                          (rtx, rtx);
extern rtx        gen_rounddf2                                         (rtx, rtx);
extern rtx        gen_lceilsfsi2                                       (rtx, rtx);
extern rtx        gen_lfloorsfsi2                                      (rtx, rtx);
extern rtx        gen_lroundsfsi2                                      (rtx, rtx);
extern rtx        gen_lceilusfsi2                                      (rtx, rtx);
extern rtx        gen_lfloorusfsi2                                     (rtx, rtx);
extern rtx        gen_lroundusfsi2                                     (rtx, rtx);
extern rtx        gen_lceildfsi2                                       (rtx, rtx);
extern rtx        gen_lfloordfsi2                                      (rtx, rtx);
extern rtx        gen_lrounddfsi2                                      (rtx, rtx);
extern rtx        gen_lceiludfsi2                                      (rtx, rtx);
extern rtx        gen_lfloorudfsi2                                     (rtx, rtx);
extern rtx        gen_lroundudfsi2                                     (rtx, rtx);
extern rtx        gen_smaxsf3                                          (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                                          (rtx, rtx, rtx);
extern rtx        gen_sminsf3                                          (rtx, rtx, rtx);
extern rtx        gen_smindf3                                          (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxnmhf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vminnmhf                                    (rtx, rtx, rtx);
extern rtx        gen_fmaxsf3                                          (rtx, rtx, rtx);
extern rtx        gen_fminsf3                                          (rtx, rtx, rtx);
extern rtx        gen_fmaxdf3                                          (rtx, rtx, rtx);
extern rtx        gen_fmindf3                                          (rtx, rtx, rtx);
extern rtx        gen_set_fpscr                                        (rtx);
extern rtx        gen_get_fpscr                                        (rtx);
extern rtx        gen_no_literal_pool_df_immediate                     (rtx, rtx, rtx);
extern rtx        gen_no_literal_pool_sf_immediate                     (rtx, rtx, rtx);
extern rtx        gen_arm_vcx1si                                       (rtx, rtx, rtx);
extern rtx        gen_arm_vcx1di                                       (rtx, rtx, rtx);
extern rtx        gen_arm_vcx1asi                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx1adi                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2si                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2di                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2asi                                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2adi                                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3si                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3di                                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3asi                                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3adi                                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_thumb1_subsi3_insn                               (rtx, rtx, rtx);
extern rtx        gen_thumb1_bicsi3                                    (rtx, rtx, rtx);
extern rtx        gen_thumb1_extendhisi2                               (rtx, rtx);
extern rtx        gen_thumb1_extendqisi2                               (rtx, rtx);
extern rtx        gen_cpymem12b                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cpymem8b                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_thumb1_cbz                                       (rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_insn                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_scratch                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi_nltu_thumb1                             (rtx, rtx, rtx);
extern rtx        gen_cstoresi_ltu_thumb1                              (rtx, rtx, rtx);
extern rtx        gen_thumb1_addsi3_addgeu                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_thumb1_casesi_dispatch                           (rtx);
extern rtx        gen_prologue_thumb1_interwork                        (void);
extern rtx        gen_thumb_eh_return                                  (rtx);
extern rtx        gen_thumb1_stack_protect_test_insn                   (rtx, rtx, rtx);
extern rtx        gen_tls_load_dot_plus_four                           (rtx, rtx, rtx, rtx);
extern rtx        gen_thumb2_zero_extendqisi2_v6                       (rtx, rtx);
extern rtx        gen_thumb2_eh_return                                 (rtx);
extern rtx        gen_thumb2_addsi3_compare0                           (rtx, rtx, rtx);
extern rtx        gen_thumb2_asrl                                      (rtx, rtx);
extern rtx        gen_thumb2_lsll                                      (rtx, rtx);
extern rtx        gen_thumb2_lsrl                                      (rtx, rtx);
extern rtx        gen_dls_insn                                         (rtx);
extern rtx        gen_unaligned_storev8qi                              (rtx, rtx);
extern rtx        gen_vec_setv8qi_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4hi_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4hf_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4bf_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2si_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2sf_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi_internal                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv8hf_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4si_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_setv2di_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_extractv8qiqi                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4hihi                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4hfhf                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4bfbf                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sisi                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sfsf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv16qiqi                          (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv8hihi                           (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv8hfhf                           (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv4sisi                           (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv4sfsf                           (rtx, rtx, rtx);
extern rtx        gen_neon_vec_extractv2didi                           (rtx, rtx, rtx);
extern rtx        gen_mulv8qi3addv8qi_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv16qi3addv16qi_neon                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4hi3addv4hi_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv8hi3addv8hi_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2si3addv2si_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4si3addv4si_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2sf3addv2sf_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4sf3addv4sf_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv8hf3addv8hf_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4hf3addv4hf_neon                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv8qi3negv8qiaddv8qi_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv16qi3negv16qiaddv16qi_neon                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4hi3negv4hiaddv4hi_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv8hi3negv8hiaddv8hi_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2si3negv2siaddv2si_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4si3negv4siaddv4si_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv2sf3negv2sfaddv2sf_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_mulv4sf3negv4sfaddv4sf_neon                      (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2sf4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4sf4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2sf4_intrinsic                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4sf4_intrinsic                               (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav8hf4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4hf4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsubv2sf4_intrinsic                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsubv4sf4_intrinsic                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsubv8hf4_intrinsic                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsubv4hf4_intrinsic                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrintpv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintzv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintmv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintxv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintav2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintnv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintpv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintzv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintmv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintxv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintav4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrintnv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtpv2sfv2si                               (rtx, rtx);
extern rtx        gen_neon_vcvtmv2sfv2si                               (rtx, rtx);
extern rtx        gen_neon_vcvtav2sfv2si                               (rtx, rtx);
extern rtx        gen_neon_vcvtpuv2sfv2si                              (rtx, rtx);
extern rtx        gen_neon_vcvtmuv2sfv2si                              (rtx, rtx);
extern rtx        gen_neon_vcvtauv2sfv2si                              (rtx, rtx);
extern rtx        gen_neon_vcvtpv4sfv4si                               (rtx, rtx);
extern rtx        gen_neon_vcvtmv4sfv4si                               (rtx, rtx);
extern rtx        gen_neon_vcvtav4sfv4si                               (rtx, rtx);
extern rtx        gen_neon_vcvtpuv4sfv4si                              (rtx, rtx);
extern rtx        gen_neon_vcvtmuv4sfv4si                              (rtx, rtx);
extern rtx        gen_neon_vcvtauv4sfv4si                              (rtx, rtx);
extern rtx        gen_iorv8qi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3_neon                                   (rtx, rtx, rtx);
extern rtx        gen_iorv4hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv2si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv4si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv4hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv8hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv2sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv4sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_iorv2di3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv8qi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv16qi3_neon                                   (rtx, rtx, rtx);
extern rtx        gen_andv4hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv8hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv2si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv4si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv4hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv8hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv2sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv4sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_andv2di3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv8qi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv16qi3_neon                                   (rtx, rtx, rtx);
extern rtx        gen_ornv4hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv8hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv2si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv4si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv4hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv8hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv2sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv4sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_ornv2di3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv8qi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv16qi3_neon                                   (rtx, rtx, rtx);
extern rtx        gen_bicv4hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv8hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv2si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv4si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv4hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv8hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv2sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv4sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_bicv2di3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv8qi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3_neon                                   (rtx, rtx, rtx);
extern rtx        gen_xorv4hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv2si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv4si3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv4hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv8hf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv2sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_xorv2di3_neon                                    (rtx, rtx, rtx);
extern rtx        gen_one_cmplv8qi2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv16qi2_neon                              (rtx, rtx);
extern rtx        gen_one_cmplv4hi2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv8hi2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv2si2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv4si2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv4hf2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv8hf2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv2sf2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv4sf2_neon                               (rtx, rtx);
extern rtx        gen_one_cmplv2di2_neon                               (rtx, rtx);
extern rtx        gen_neon_absv8qi2                                    (rtx, rtx);
extern rtx        gen_neon_absv16qi2                                   (rtx, rtx);
extern rtx        gen_neon_absv4hi2                                    (rtx, rtx);
extern rtx        gen_neon_absv8hi2                                    (rtx, rtx);
extern rtx        gen_neon_absv2si2                                    (rtx, rtx);
extern rtx        gen_neon_absv4si2                                    (rtx, rtx);
extern rtx        gen_neon_absv2sf2                                    (rtx, rtx);
extern rtx        gen_neon_absv4sf2                                    (rtx, rtx);
extern rtx        gen_neon_negv8qi2                                    (rtx, rtx);
extern rtx        gen_neon_negv16qi2                                   (rtx, rtx);
extern rtx        gen_neon_negv4hi2                                    (rtx, rtx);
extern rtx        gen_neon_negv8hi2                                    (rtx, rtx);
extern rtx        gen_neon_negv2si2                                    (rtx, rtx);
extern rtx        gen_neon_negv4si2                                    (rtx, rtx);
extern rtx        gen_neon_negv2sf2                                    (rtx, rtx);
extern rtx        gen_neon_negv4sf2                                    (rtx, rtx);
extern rtx        gen_neon_absv8hf2                                    (rtx, rtx);
extern rtx        gen_neon_negv8hf2                                    (rtx, rtx);
extern rtx        gen_neon_absv4hf2                                    (rtx, rtx);
extern rtx        gen_neon_negv4hf2                                    (rtx, rtx);
extern rtx        gen_neon_vrndv8hf                                    (rtx, rtx);
extern rtx        gen_neon_vrndav8hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndmv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndnv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndpv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndxv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndv4hf                                    (rtx, rtx);
extern rtx        gen_neon_vrndav4hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndmv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndnv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndpv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vrndxv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vrsqrtev8hf                                 (rtx, rtx);
extern rtx        gen_neon_vrsqrtev4hf                                 (rtx, rtx);
extern rtx        gen_vashrv8qi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vashrv16qi3_imm                                  (rtx, rtx, rtx);
extern rtx        gen_vashrv4hi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vashrv2si3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv8qi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv16qi3_imm                                  (rtx, rtx, rtx);
extern rtx        gen_vlshrv4hi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv2si3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3_imm                                   (rtx, rtx, rtx);
extern rtx        gen_ashlv8qi3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv16qi3_signed                                (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv8hi3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv4si3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv2di3_signed                                 (rtx, rtx, rtx);
extern rtx        gen_ashlv8qi3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_ashlv16qi3_unsigned                              (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_ashlv8hi3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_ashlv4si3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_ashlv2di3_unsigned                               (rtx, rtx, rtx);
extern rtx        gen_neon_load_count                                  (rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_lov16qiv8qi3                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_lov8hiv4hi3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_lov4siv2si3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_hiv16qiv8qi3                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_hiv8hiv4hi3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_ssum_hiv4siv2si3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_widen_ssumv8qi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv4hi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv2si3                                  (rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_lov16qiv8qi3                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_lov8hiv4hi3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_lov4siv2si3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_hiv16qiv8qi3                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_hiv8hiv4hi3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sel_widen_usum_hiv4siv2si3                   (rtx, rtx, rtx, rtx);
extern rtx        gen_widen_usumv8qi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_usumv4hi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_usumv2si3                                  (rtx, rtx, rtx);
extern rtx        gen_quad_halves_plusv4si                             (rtx, rtx);
extern rtx        gen_quad_halves_sminv4si                             (rtx, rtx);
extern rtx        gen_quad_halves_smaxv4si                             (rtx, rtx);
extern rtx        gen_quad_halves_uminv4si                             (rtx, rtx);
extern rtx        gen_quad_halves_umaxv4si                             (rtx, rtx);
extern rtx        gen_quad_halves_plusv4sf                             (rtx, rtx);
extern rtx        gen_quad_halves_sminv4sf                             (rtx, rtx);
extern rtx        gen_quad_halves_smaxv4sf                             (rtx, rtx);
extern rtx        gen_quad_halves_plusv8hi                             (rtx, rtx);
extern rtx        gen_quad_halves_sminv8hi                             (rtx, rtx);
extern rtx        gen_quad_halves_smaxv8hi                             (rtx, rtx);
extern rtx        gen_quad_halves_uminv8hi                             (rtx, rtx);
extern rtx        gen_quad_halves_umaxv8hi                             (rtx, rtx);
extern rtx        gen_quad_halves_plusv16qi                            (rtx, rtx);
extern rtx        gen_quad_halves_sminv16qi                            (rtx, rtx);
extern rtx        gen_quad_halves_smaxv16qi                            (rtx, rtx);
extern rtx        gen_quad_halves_uminv16qi                            (rtx, rtx);
extern rtx        gen_quad_halves_umaxv16qi                            (rtx, rtx);
extern rtx        gen_arm_reduc_plus_internal_v2di                     (rtx, rtx);
extern rtx        gen_neon_vpadd_internalv8qi                          (rtx, rtx, rtx);
extern rtx        gen_neon_vpadd_internalv4hi                          (rtx, rtx, rtx);
extern rtx        gen_neon_vpadd_internalv2si                          (rtx, rtx, rtx);
extern rtx        gen_neon_vpadd_internalv2sf                          (rtx, rtx, rtx);
extern rtx        gen_neon_vpaddv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vpsminv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsminv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsminv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsminv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsmaxv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsmaxv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsmaxv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpsmaxv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpuminv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpuminv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpuminv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpumaxv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpumaxv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpumaxv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddv2sf_unspec                             (rtx, rtx, rtx);
extern rtx        gen_neon_vaddv4sf_unspec                             (rtx, rtx, rtx);
extern rtx        gen_neon_vaddlsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddlsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddlsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddwuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrhaddsv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrhadduv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhaddsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhadduv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsdi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddudi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqaddsv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqadduv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vaddhnv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vraddhnv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vaddhnv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vraddhnv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vaddhnv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vraddhnv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vmulpv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmulpv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmulfv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmulfv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmulfv8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmulfv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_vfmal_lowv2sf_intrinsic                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lowv4sf_intrinsic                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_highv2sf_intrinsic                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_highv4sf_intrinsic                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_highv2sf_intrinsic                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_highv4sf_intrinsic                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lowv2sf_intrinsic                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lowv4sf_intrinsic                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_lowv2sf_intrinsic                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_lowv4sf_intrinsic                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_lowv8hfv2sf_intrinsic                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_lowv4hfv4sf_intrinsic                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_highv8hfv2sf_intrinsic                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_highv4hfv4sf_intrinsic                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_highv2sf_intrinsic                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmal_lane_highv4sf_intrinsic                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_lowv2sf_intrinsic                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_lowv4sf_intrinsic                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_lowv8hfv2sf_intrinsic                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_lowv4hfv4sf_intrinsic                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_highv8hfv2sf_intrinsic                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_highv4hfv4sf_intrinsic                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_highv2sf_intrinsic                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfmsl_lane_highv4sf_intrinsic                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav8qi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav16qi_unspec                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4hi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav8hi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav2si_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4si_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav2sf_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4sf_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalsv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlaluv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalsv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlaluv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalsv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlaluv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv8qi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv16qi_unspec                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4hi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv8hi_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv2si_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4si_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv2sf_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4sf_unspec                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslsv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsluv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslsv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsluv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslsv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsluv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulhv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulhv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulhv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulhv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulhv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulhv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulhv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulhv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlahv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlshv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlahv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlshv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlahv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlshv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlahv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlshv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlalv4hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlalv2si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlslv4hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlslv2si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmullsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmulluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmullpv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmullsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmulluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmullpv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmullsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmulluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmullpv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmullv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmullv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vsubv2sf_unspec                             (rtx, rtx, rtx);
extern rtx        gen_neon_vsubv4sf_unspec                             (rtx, rtx, rtx);
extern rtx        gen_neon_vsublsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsublsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsublsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubwuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsdi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubudi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubsv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqsubuv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vhsubuv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vsubhnv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrsubhnv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vsubhnv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrsubhnv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vsubhnv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrsubhnv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8qi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8qi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8qi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8qi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8qi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv16qi_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv16qi_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev16qi_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vclev16qi_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv16qi_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8hi_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv2si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv2si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev2si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev2si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv2si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4si_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv2sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv2sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev2sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev2sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv2sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4sf_insn                               (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv2sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv2sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev2sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv2sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vclev2sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4sf_insn_unspec                        (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4hf_fp16insn                           (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4hf_fp16insn_unspec                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtuv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgeuv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv2sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev2sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv2sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev2sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4sf_insn                              (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev2sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv2sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev2sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv2sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4sf_insn_unspec                       (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv8hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev8hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv8hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev8hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4hf_fp16insn                          (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev8hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv8hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev8hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv8hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4hf_fp16insn_unspec                   (rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev8qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev4hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev2si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtst_combinev4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdsv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabduv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vabdfv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdfv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabdlsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdlsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdlsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabasv8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabasv16qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv16qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabasv4hi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv4hi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabasv8hi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv8hi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabasv2si                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv2si                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabasv4si                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabauv4si                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabalsv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabaluv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabalsv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabaluv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabalsv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vabaluv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxsv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxuv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminsv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminuv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxfv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminfv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxfv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminfv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxfv8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminfv8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxfv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vminfv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxfv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminfv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxnmv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminnmv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxnmv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminnmv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxnmv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminnmv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmaxnmv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vminnmv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpaddlsv8qi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddluv8qi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddlsv16qi                                (rtx, rtx);
extern rtx        gen_neon_vpaddluv16qi                                (rtx, rtx);
extern rtx        gen_neon_vpaddlsv4hi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddluv4hi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddlsv8hi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddluv8hi                                 (rtx, rtx);
extern rtx        gen_neon_vpaddlsv2si                                 (rtx, rtx);
extern rtx        gen_neon_vpaddluv2si                                 (rtx, rtx);
extern rtx        gen_neon_vpaddlsv4si                                 (rtx, rtx);
extern rtx        gen_neon_vpaddluv4si                                 (rtx, rtx);
extern rtx        gen_neon_vpadalsv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadalsv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vpadalsv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadalsv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadalsv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadalsv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpadaluv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminuv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminuv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminuv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxfv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminfv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpmaxfv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vpminfv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrecpsv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrecpsv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrecpsv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrecpsv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrsqrtsv2sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrsqrtsv4sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrsqrtsv8hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrsqrtsv4hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqabsv8qi                                   (rtx, rtx);
extern rtx        gen_neon_vqabsv16qi                                  (rtx, rtx);
extern rtx        gen_neon_vqabsv4hi                                   (rtx, rtx);
extern rtx        gen_neon_vqabsv8hi                                   (rtx, rtx);
extern rtx        gen_neon_vqabsv2si                                   (rtx, rtx);
extern rtx        gen_neon_vqabsv4si                                   (rtx, rtx);
extern rtx        gen_neon_bswapv4hi                                   (rtx, rtx);
extern rtx        gen_neon_bswapv8hi                                   (rtx, rtx);
extern rtx        gen_neon_bswapv2si                                   (rtx, rtx);
extern rtx        gen_neon_bswapv4si                                   (rtx, rtx);
extern rtx        gen_neon_bswapv2di                                   (rtx, rtx);
extern rtx        gen_neon_vcadd90v4hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd270v4hf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd90v8hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd270v8hf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd90v2sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd270v2sf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd90v4sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcadd270v4sf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcmla0v4hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla90v4hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla180v4hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla270v4hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla0v8hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla90v8hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla180v8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla270v8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla0v2sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla90v2sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla180v2sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla270v2sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla0v4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla90v4sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla180v4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla270v4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane0v4hf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane90v4hf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane180v4hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane270v4hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane0v8hf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane90v8hf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane180v8hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane270v8hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane0v2sf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane90v2sf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane180v2sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane270v2sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane0v4sf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane90v4sf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane180v4sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_lane270v4sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq0v2sf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq90v2sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq180v2sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq270v2sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq0v4hf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq90v4hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq180v4hf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmla_laneq270v4hf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane0v8hf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane90v8hf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane180v8hf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane270v8hf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane0v4sf                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane90v4sf                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane180v4sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcmlaq_lane270v4sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sdot_prodv2siv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv2siv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_sdot_prodv4siv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_udot_prodv4siv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdotv2siv8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdotv4siv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sdot_lanev8qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udot_lanev8qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sdot_lanev16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udot_lanev16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sdot_laneqv8qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udot_laneqv8qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sdot_laneqv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udot_laneqv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdot_lanev8qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sudot_lanev8qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdot_lanev16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sudot_lanev16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdot_laneqv8qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sudot_laneqv8qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usdot_laneqv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sudot_laneqv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqnegv8qi                                   (rtx, rtx);
extern rtx        gen_neon_vqnegv16qi                                  (rtx, rtx);
extern rtx        gen_neon_vqnegv4hi                                   (rtx, rtx);
extern rtx        gen_neon_vqnegv8hi                                   (rtx, rtx);
extern rtx        gen_neon_vqnegv2si                                   (rtx, rtx);
extern rtx        gen_neon_vqnegv4si                                   (rtx, rtx);
extern rtx        gen_neon_vclsv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vclsv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vclsv4hi                                    (rtx, rtx);
extern rtx        gen_neon_vclsv8hi                                    (rtx, rtx);
extern rtx        gen_neon_vclsv2si                                    (rtx, rtx);
extern rtx        gen_neon_vclsv4si                                    (rtx, rtx);
extern rtx        gen_neon_vclzv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vclzv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vclzv4hi                                    (rtx, rtx);
extern rtx        gen_neon_vclzv8hi                                    (rtx, rtx);
extern rtx        gen_neon_vclzv2si                                    (rtx, rtx);
extern rtx        gen_neon_vclzv4si                                    (rtx, rtx);
extern rtx        gen_popcountv8qi2                                    (rtx, rtx);
extern rtx        gen_popcountv16qi2                                   (rtx, rtx);
extern rtx        gen_neon_vrecpev8hf                                  (rtx, rtx);
extern rtx        gen_neon_vrecpev4hf                                  (rtx, rtx);
extern rtx        gen_neon_vrecpev2si                                  (rtx, rtx);
extern rtx        gen_neon_vrecpev2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrecpev4si                                  (rtx, rtx);
extern rtx        gen_neon_vrecpev4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrsqrtev2si                                 (rtx, rtx);
extern rtx        gen_neon_vrsqrtev2sf                                 (rtx, rtx);
extern rtx        gen_neon_vrsqrtev4si                                 (rtx, rtx);
extern rtx        gen_neon_vrsqrtev4sf                                 (rtx, rtx);
extern rtx        gen_neon_vget_lanev8qi_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4hi_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2si_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2sf_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8qi_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4hi_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2si_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2sf_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev16qi_sext_internal                (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8hi_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8hf_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4si_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4sf_sext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev16qi_zext_internal                (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8hi_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8hf_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4si_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4sf_zext_internal                 (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_nv8qi                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv4hi                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv16qi                                 (rtx, rtx);
extern rtx        gen_neon_vdup_nv8hi                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv4bf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv8bf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv2si                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv2sf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv4si                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vdup_nv2di                                  (rtx, rtx);
extern rtx        gen_neon_vdup_lanev8qi_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev16qi_internal                     (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4hi_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8hi_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev2si_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4si_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev2sf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4sf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8hf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4hf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4bf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8bf_internal                      (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev4hf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev4bf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev2sf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinedi                                  (rtx, rtx, rtx);
extern rtx        gen_floatv2siv2sf2                                   (rtx, rtx);
extern rtx        gen_floatv4siv4sf2                                   (rtx, rtx);
extern rtx        gen_floatunsv2siv2sf2                                (rtx, rtx);
extern rtx        gen_floatunsv4siv4sf2                                (rtx, rtx);
extern rtx        gen_fix_truncv2sfv2si2                               (rtx, rtx);
extern rtx        gen_fix_truncv4sfv4si2                               (rtx, rtx);
extern rtx        gen_fixuns_truncv2sfv2si2                            (rtx, rtx);
extern rtx        gen_fixuns_truncv4sfv4si2                            (rtx, rtx);
extern rtx        gen_neon_vcvtsv2sf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv2sf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv4sf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv4sf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv2si                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv2si                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv4si                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv4si                                   (rtx, rtx);
extern rtx        gen_neon_vcvtv4sfv4hf                                (rtx, rtx);
extern rtx        gen_neon_vcvtv4hfv4sf                                (rtx, rtx);
extern rtx        gen_neon_vcvtsv4hi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv4hi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv8hi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv8hi                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtsv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vcvtuv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vcvts_nv2sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv2sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv4sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv4sf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv8hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv8hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv4hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv4hf                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvts_nv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtu_nv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vcvtasv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtauv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtmsv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtmuv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtnsv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtnuv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtpsv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtpuv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtasv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtauv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtmsv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtmuv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtnsv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtnuv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtpsv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vcvtpuv4hf                                  (rtx, rtx);
extern rtx        gen_neon_vmovnv8hi                                   (rtx, rtx);
extern rtx        gen_neon_vmovnv4si                                   (rtx, rtx);
extern rtx        gen_neon_vmovnv2di                                   (rtx, rtx);
extern rtx        gen_neon_vqmovnsv8hi                                 (rtx, rtx);
extern rtx        gen_neon_vqmovnuv8hi                                 (rtx, rtx);
extern rtx        gen_neon_vqmovnsv4si                                 (rtx, rtx);
extern rtx        gen_neon_vqmovnuv4si                                 (rtx, rtx);
extern rtx        gen_neon_vqmovnsv2di                                 (rtx, rtx);
extern rtx        gen_neon_vqmovnuv2di                                 (rtx, rtx);
extern rtx        gen_neon_vqmovunv8hi                                 (rtx, rtx);
extern rtx        gen_neon_vqmovunv4si                                 (rtx, rtx);
extern rtx        gen_neon_vqmovunv2di                                 (rtx, rtx);
extern rtx        gen_neon_vmovlsv8qi                                  (rtx, rtx);
extern rtx        gen_neon_vmovluv8qi                                  (rtx, rtx);
extern rtx        gen_neon_vmovlsv4hi                                  (rtx, rtx);
extern rtx        gen_neon_vmovluv4hi                                  (rtx, rtx);
extern rtx        gen_neon_vmovlsv2si                                  (rtx, rtx);
extern rtx        gen_neon_vmovluv2si                                  (rtx, rtx);
extern rtx        gen_neon_vmul_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmul_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmulls_lanev4hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmullu_lanev4hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmulls_lanev2si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmullu_lanev2si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmull_lanev4hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmull_lanev2si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_lanev8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_lanev8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_lanev4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_lanev4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_lanev4hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_lanev4hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_lanev2si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_lanev2si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlah_lanev8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlsh_lanev8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlah_lanev4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlsh_lanev4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlah_lanev4hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlsh_lanev4hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlah_lanev2si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmlsh_lanev2si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev4hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev2si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev2sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_lanev4sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlals_lanev4hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalu_lanev4hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlals_lanev2si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalu_lanev2si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlal_lanev4hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlal_lanev2si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev4hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev2si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev2sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_lanev4sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsls_lanev4hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslu_lanev4hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsls_lanev2si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslu_lanev2si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlsl_lanev4hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlsl_lanev2si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv8qi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv16qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv4hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv8hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv2si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv4si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv4hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv8hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv4bf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv8bf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextdi                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vextv2di                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrev64v8qi                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v16qi                                 (rtx, rtx);
extern rtx        gen_neon_vrev64v4hi                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v8hi                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v2si                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v4si                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v4hf                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v8hf                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v2sf                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v4sf                                  (rtx, rtx);
extern rtx        gen_neon_vrev64v2di                                  (rtx, rtx);
extern rtx        gen_neon_vrev32v8qi                                  (rtx, rtx);
extern rtx        gen_neon_vrev32v4hi                                  (rtx, rtx);
extern rtx        gen_neon_vrev32v16qi                                 (rtx, rtx);
extern rtx        gen_neon_vrev32v8hi                                  (rtx, rtx);
extern rtx        gen_neon_vrev16v8qi                                  (rtx, rtx);
extern rtx        gen_neon_vrev16v16qi                                 (rtx, rtx);
extern rtx        gen_neon_vbslv8qi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv16qi_internal                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4bf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8bf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbsldi_internal                             (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2di_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv8hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv4si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsdi                                     (rtx, rtx, rtx);
extern rtx        gen_neon_vshludi                                     (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsdi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vrshludi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vshlsv2di                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshluv2di                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshlsv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshluv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsdi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqshludi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsdi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshludi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlsv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshluv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshlsv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshluv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv8qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv16qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv4hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv2si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_ndi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_ndi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_ndi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_ndi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshrs_nv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshru_nv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrs_nv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vrshru_nv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrn_nv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrn_nv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrn_nv4si                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrn_nv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshrn_nv2di                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vrshrn_nv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrns_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrnu_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrns_nv8hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrnu_nv8hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrns_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrnu_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrns_nv4si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrnu_nv4si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrns_nv2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrnu_nv2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrns_nv2di                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrnu_nv2di                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrun_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrun_nv8hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrun_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrun_nv4si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshrun_nv2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrshrun_nv2di                              (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv8qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_ndi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vshl_nv2di                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv16qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv16qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_ndi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_ndi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_s_nv2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshl_u_nv2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_ndi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vqshlu_nv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshlls_nv8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshllu_nv8qi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshlls_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshllu_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshlls_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vshllu_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv8qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv8qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv4hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv4hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv2si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv2si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_ndi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_ndi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_ndi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_ndi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsras_nv2di                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsrau_nv2di                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsras_nv2di                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vrsrau_nv2di                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv16qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_ndi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsri_nv2di                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv16qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_ndi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsli_nv2di                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtbl1v8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vtbl2v8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vtbl3v8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vtbl4v8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vtbl1v16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vtbl2v16qi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcombinev16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vtbx1v8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtbx2v8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtbx3v8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtbx4v8qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vld1v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vld1v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vld1v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vld1v2si                                    (rtx, rtx);
extern rtx        gen_neon_vld1v4si                                    (rtx, rtx);
extern rtx        gen_neon_vld1v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vld1v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vld1v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vld1v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vld1v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vld1v4sf                                    (rtx, rtx);
extern rtx        gen_neon_vld1di                                      (rtx, rtx);
extern rtx        gen_neon_vld1v2di                                    (rtx, rtx);
extern rtx        gen_neon_vld1_x2v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v8qi                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v16qi                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1_x2v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v4hi                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v2si                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v2si                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v4si                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v4si                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v4hf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v4bf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v8bf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v2sf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1_x2di                                   (rtx, rtx);
extern rtx        gen_neon_vld1q_x2di                                  (rtx, rtx);
extern rtx        gen_neon_vld1_x2v2di                                 (rtx, rtx);
extern rtx        gen_neon_vld1q_x2v2di                                (rtx, rtx);
extern rtx        gen_neon_vld1_x3v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v16qi                                (rtx, rtx);
extern rtx        gen_neon_vld1_x3v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v2si                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v4si                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x3di                                   (rtx, rtx);
extern rtx        gen_neon_vld1_x3v2di                                 (rtx, rtx);
extern rtx        gen_neon_vld1x3qav16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1x3qav8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qav8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qav8bf                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qav4si                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qav4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qav2di                                (rtx, rtx);
extern rtx        gen_neon_vld1x3qbv16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv8hf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv8bf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv4sf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x3qbv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1_x4v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v16qi                                (rtx, rtx);
extern rtx        gen_neon_vld1_x4v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v2si                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v4si                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vld1_x4di                                   (rtx, rtx);
extern rtx        gen_neon_vld1_x4v2di                                 (rtx, rtx);
extern rtx        gen_neon_vld1x4qav16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1x4qav8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qav8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qav8bf                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qav4si                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qav4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qav2di                                (rtx, rtx);
extern rtx        gen_neon_vld1x4qbv16qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv8hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv8hf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv8bf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv4si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv4sf                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1x4qbv2di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev4bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanedi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev8bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_lanev2di                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld1_dupv8qi                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv4hi                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv4hf                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv4bf                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv2si                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv2sf                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1_dupv8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv4si                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupv2di                                (rtx, rtx);
extern rtx        gen_neon_vst1v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vst1v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vst1v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vst1v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vst1v2si                                    (rtx, rtx);
extern rtx        gen_neon_vst1v4si                                    (rtx, rtx);
extern rtx        gen_neon_vst1v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vst1v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vst1v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vst1v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vst1v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vst1v4sf                                    (rtx, rtx);
extern rtx        gen_neon_vst1di                                      (rtx, rtx);
extern rtx        gen_neon_vst1v2di                                    (rtx, rtx);
extern rtx        gen_neon_vst1_x2v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v8qi                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v16qi                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1_x2v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v4hi                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v2si                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v2si                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v4si                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v4si                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v4hf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v4bf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v2sf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1_x2di                                   (rtx, rtx);
extern rtx        gen_neon_vst1q_x2di                                  (rtx, rtx);
extern rtx        gen_neon_vst1_x2v2di                                 (rtx, rtx);
extern rtx        gen_neon_vst1q_x2v2di                                (rtx, rtx);
extern rtx        gen_neon_vst1_x3v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v16qi                                (rtx, rtx);
extern rtx        gen_neon_vst1_x3v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v2si                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v4si                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x3di                                   (rtx, rtx);
extern rtx        gen_neon_vst1_x3v2di                                 (rtx, rtx);
extern rtx        gen_neon_vst1x3qav8qi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1x3qav4hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav2si                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav4si                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav4hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav4bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav2sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qav4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qadi                                  (rtx, rtx);
extern rtx        gen_neon_vst1x3qav2di                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv8qi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv4hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv2si                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv4si                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv4hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv4bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv2sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x3qbdi                                  (rtx, rtx);
extern rtx        gen_neon_vst1x3qbv2di                                (rtx, rtx);
extern rtx        gen_neon_vst1_x4v8qi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v16qi                                (rtx, rtx);
extern rtx        gen_neon_vst1_x4v4hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v8hi                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v2si                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v4si                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v4hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v8hf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v4bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v8bf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v2sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4v4sf                                 (rtx, rtx);
extern rtx        gen_neon_vst1_x4di                                   (rtx, rtx);
extern rtx        gen_neon_vst1_x4v2di                                 (rtx, rtx);
extern rtx        gen_neon_vst1x4qav16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1x4qav8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qav8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qav8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qav4si                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qav4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qav2di                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv4si                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1x4qbv2di                                (rtx, rtx);
extern rtx        gen_neon_vst1_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev4hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev4bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanedi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev16qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev8hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev8bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst1_lanev2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vld2v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vld2v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vld2v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vld2v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vld2v2si                                    (rtx, rtx);
extern rtx        gen_neon_vld2v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vld2di                                      (rtx, rtx);
extern rtx        gen_neon_vld2v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vld2v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vld2v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vld2v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vld2v4si                                    (rtx, rtx);
extern rtx        gen_neon_vld2v4sf                                    (rtx, rtx);
extern rtx        gen_neon_vld2_lanev8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev4bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_lanev8bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld2_dupv8qi                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupv4hi                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupv4hf                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupv4bf                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupv2si                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupv2sf                                (rtx, rtx);
extern rtx        gen_neon_vld2_dupdi                                  (rtx, rtx);
extern rtx        gen_neon_vld2_dupv8bf                                (rtx, rtx);
extern rtx        gen_neon_vst2v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vst2v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vst2v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vst2v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vst2v2si                                    (rtx, rtx);
extern rtx        gen_neon_vst2v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vst2di                                      (rtx, rtx);
extern rtx        gen_neon_vst2v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vst2v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vst2v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vst2v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vst2v4si                                    (rtx, rtx);
extern rtx        gen_neon_vst2v4sf                                    (rtx, rtx);
extern rtx        gen_neon_vst2_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev4hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev4bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev8hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst2_lanev8bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vld3v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vld3v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vld3v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vld3v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vld3v2si                                    (rtx, rtx);
extern rtx        gen_neon_vld3v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vld3di                                      (rtx, rtx);
extern rtx        gen_neon_vld3qav16qi                                 (rtx, rtx);
extern rtx        gen_neon_vld3qav8hi                                  (rtx, rtx);
extern rtx        gen_neon_vld3qav8hf                                  (rtx, rtx);
extern rtx        gen_neon_vld3qav8bf                                  (rtx, rtx);
extern rtx        gen_neon_vld3qav4si                                  (rtx, rtx);
extern rtx        gen_neon_vld3qav4sf                                  (rtx, rtx);
extern rtx        gen_neon_vld3qbv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vld3qbv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld3qbv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld3qbv8bf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld3qbv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld3qbv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev4bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_lanev8bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld3_dupv8qi                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupv4hi                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupv4hf                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupv4bf                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupv2si                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupv2sf                                (rtx, rtx);
extern rtx        gen_neon_vld3_dupdi                                  (rtx, rtx);
extern rtx        gen_neon_vld3_dupv8bf                                (rtx, rtx);
extern rtx        gen_neon_vst3v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vst3v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vst3v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vst3v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vst3v2si                                    (rtx, rtx);
extern rtx        gen_neon_vst3v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vst3di                                      (rtx, rtx);
extern rtx        gen_neon_vst3qav16qi                                 (rtx, rtx);
extern rtx        gen_neon_vst3qav8hi                                  (rtx, rtx);
extern rtx        gen_neon_vst3qav8hf                                  (rtx, rtx);
extern rtx        gen_neon_vst3qav8bf                                  (rtx, rtx);
extern rtx        gen_neon_vst3qav4si                                  (rtx, rtx);
extern rtx        gen_neon_vst3qav4sf                                  (rtx, rtx);
extern rtx        gen_neon_vst3qbv16qi                                 (rtx, rtx);
extern rtx        gen_neon_vst3qbv8hi                                  (rtx, rtx);
extern rtx        gen_neon_vst3qbv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vst3qbv8bf                                  (rtx, rtx);
extern rtx        gen_neon_vst3qbv4si                                  (rtx, rtx);
extern rtx        gen_neon_vst3qbv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vst3_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev4hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev4bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev8hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst3_lanev8bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vld4v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vld4v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vld4v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vld4v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vld4v2si                                    (rtx, rtx);
extern rtx        gen_neon_vld4v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vld4di                                      (rtx, rtx);
extern rtx        gen_neon_vld4qav16qi                                 (rtx, rtx);
extern rtx        gen_neon_vld4qav8hi                                  (rtx, rtx);
extern rtx        gen_neon_vld4qav8hf                                  (rtx, rtx);
extern rtx        gen_neon_vld4qav8bf                                  (rtx, rtx);
extern rtx        gen_neon_vld4qav4si                                  (rtx, rtx);
extern rtx        gen_neon_vld4qav4sf                                  (rtx, rtx);
extern rtx        gen_neon_vld4qbv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vld4qbv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld4qbv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld4qbv8bf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld4qbv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld4qbv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev4bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_lanev8bf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vld4_dupv8qi                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupv4hi                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupv4hf                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupv4bf                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupv2si                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupv2sf                                (rtx, rtx);
extern rtx        gen_neon_vld4_dupdi                                  (rtx, rtx);
extern rtx        gen_neon_vld4_dupv8bf                                (rtx, rtx);
extern rtx        gen_neon_vst4v8qi                                    (rtx, rtx);
extern rtx        gen_neon_vst4v4hi                                    (rtx, rtx);
extern rtx        gen_neon_vst4v4hf                                    (rtx, rtx);
extern rtx        gen_neon_vst4v4bf                                    (rtx, rtx);
extern rtx        gen_neon_vst4v2si                                    (rtx, rtx);
extern rtx        gen_neon_vst4v2sf                                    (rtx, rtx);
extern rtx        gen_neon_vst4di                                      (rtx, rtx);
extern rtx        gen_neon_vst4qav16qi                                 (rtx, rtx);
extern rtx        gen_neon_vst4qav8hi                                  (rtx, rtx);
extern rtx        gen_neon_vst4qav8hf                                  (rtx, rtx);
extern rtx        gen_neon_vst4qav8bf                                  (rtx, rtx);
extern rtx        gen_neon_vst4qav4si                                  (rtx, rtx);
extern rtx        gen_neon_vst4qav4sf                                  (rtx, rtx);
extern rtx        gen_neon_vst4qbv16qi                                 (rtx, rtx);
extern rtx        gen_neon_vst4qbv8hi                                  (rtx, rtx);
extern rtx        gen_neon_vst4qbv8hf                                  (rtx, rtx);
extern rtx        gen_neon_vst4qbv8bf                                  (rtx, rtx);
extern rtx        gen_neon_vst4qbv4si                                  (rtx, rtx);
extern rtx        gen_neon_vst4qbv4sf                                  (rtx, rtx);
extern rtx        gen_neon_vst4_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev4hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev4bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev8hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vst4_lanev8bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_lo_v16qi                        (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_lo_v16qi                        (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_lo_v8hi                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_lo_v8hi                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_lo_v4si                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_lo_v4si                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_hi_v16qi                        (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_hi_v16qi                        (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_hi_v8hi                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_hi_v8hi                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacks_hi_v4si                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_unpacku_hi_v4si                         (rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_lo_v16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_lo_v16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_lo_v8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_lo_v8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_lo_v4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_lo_v4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_hi_v16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_hi_v16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_hi_v8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_hi_v8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_hi_v4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_hi_v4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vec_sshiftl_v8qi                            (rtx, rtx, rtx);
extern rtx        gen_neon_vec_ushiftl_v8qi                            (rtx, rtx, rtx);
extern rtx        gen_neon_vec_sshiftl_v4hi                            (rtx, rtx, rtx);
extern rtx        gen_neon_vec_ushiftl_v4hi                            (rtx, rtx, rtx);
extern rtx        gen_neon_vec_sshiftl_v2si                            (rtx, rtx, rtx);
extern rtx        gen_neon_vec_ushiftl_v2si                            (rtx, rtx, rtx);
extern rtx        gen_neon_unpacks_v8qi                                (rtx, rtx);
extern rtx        gen_neon_unpacku_v8qi                                (rtx, rtx);
extern rtx        gen_neon_unpacks_v4hi                                (rtx, rtx);
extern rtx        gen_neon_unpacku_v4hi                                (rtx, rtx);
extern rtx        gen_neon_unpacks_v2si                                (rtx, rtx);
extern rtx        gen_neon_unpacku_v2si                                (rtx, rtx);
extern rtx        gen_neon_vec_smult_v8qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_v8qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_v4hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_v4hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_smult_v2si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_umult_v2si                              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v8hi                              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4si                              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2di                              (rtx, rtx, rtx);
extern rtx        gen_neon_vec_pack_trunc_v8hi                         (rtx, rtx);
extern rtx        gen_neon_vec_pack_trunc_v4si                         (rtx, rtx);
extern rtx        gen_neon_vec_pack_trunc_v2di                         (rtx, rtx);
extern rtx        gen_neon_vabdv4hf_2                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv8hf_2                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv2sf_2                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv4sf_2                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv4hf_3                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv8hf_3                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv2sf_3                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vabdv4sf_3                                  (rtx, rtx, rtx);
extern rtx        gen_neon_smmlav16qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_ummlav16qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_usmmlav16qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdotv2sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdotv4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdot_lanev4bfv2sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdot_lanev4bfv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdot_lanev8bfv2sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfdot_lanev8bfv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbfcvtv4sfv4bf                              (rtx, rtx);
extern rtx        gen_neon_vbfcvtv4sfv8bf                              (rtx, rtx);
extern rtx        gen_neon_vbfcvtv4sf_highv8bf                         (rtx, rtx, rtx);
extern rtx        gen_neon_vbfcvtsf                                    (rtx, rtx);
extern rtx        gen_neon_vbfcvtv4bf                                  (rtx, rtx);
extern rtx        gen_neon_vbfcvtv8bf                                  (rtx, rtx);
extern rtx        gen_neon_vbfcvt_highv8bf                             (rtx, rtx);
extern rtx        gen_neon_vbfcvtbf_cvtmodev2si                        (rtx, rtx);
extern rtx        gen_neon_vbfcvtbf_cvtmodesf                          (rtx, rtx);
extern rtx        gen_neon_vmmlav8bf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmabv8bf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmatv8bf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmab_lanev8bf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmat_lanev8bf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_aesmc                                     (rtx, rtx);
extern rtx        gen_crypto_aesimc                                    (rtx, rtx);
extern rtx        gen_aes_op_protect                                   (rtx, rtx);
extern rtx        gen_aes_op_protect_neon_vld1v16qi                    (rtx, rtx);
extern rtx        gen_crypto_sha1su1                                   (rtx, rtx, rtx);
extern rtx        gen_crypto_sha256su0                                 (rtx, rtx, rtx);
extern rtx        gen_crypto_sha1su0                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha256h                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha256h2                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha256su1                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha1h_lb                                  (rtx, rtx, rtx);
extern rtx        gen_crypto_vmullp64                                  (rtx, rtx, rtx);
extern rtx        gen_crypto_sha1c_lb                                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha1m_lb                                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha1p_lb                                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_atomic_loadqi                                (rtx, rtx);
extern rtx        gen_arm_atomic_loadhi                                (rtx, rtx);
extern rtx        gen_arm_atomic_loadsi                                (rtx, rtx);
extern rtx        gen_arm_atomic_load_acquireqi                        (rtx, rtx);
extern rtx        gen_arm_atomic_load_acquirehi                        (rtx, rtx);
extern rtx        gen_arm_atomic_load_acquiresi                        (rtx, rtx);
extern rtx        gen_arm_atomic_storeqi                               (rtx, rtx);
extern rtx        gen_arm_atomic_storehi                               (rtx, rtx);
extern rtx        gen_arm_atomic_storesi                               (rtx, rtx);
extern rtx        gen_arm_atomic_store_releaseqi                       (rtx, rtx);
extern rtx        gen_arm_atomic_store_releasehi                       (rtx, rtx);
extern rtx        gen_arm_atomic_store_releasesi                       (rtx, rtx);
extern rtx        gen_arm_atomic_loaddi2_ldrd                          (rtx, rtx);
extern rtx        gen_atomic_compare_and_swap32qi_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapt1qi_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swap32hi_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapt1hi_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swap32si_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapt1si_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swap32di_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapt1di_1                    (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeqi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangehi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangedi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_addqi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_subqi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_orqi                                      (rtx, rtx, rtx);
extern rtx        gen_atomic_xorqi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_andqi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_addhi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_subhi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_orhi                                      (rtx, rtx, rtx);
extern rtx        gen_atomic_xorhi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_andhi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_addsi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_subsi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_orsi                                      (rtx, rtx, rtx);
extern rtx        gen_atomic_xorsi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_andsi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_adddi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_subdi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_ordi                                      (rtx, rtx, rtx);
extern rtx        gen_atomic_xordi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_anddi                                     (rtx, rtx, rtx);
extern rtx        gen_atomic_nandqi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_nandhi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_nandsi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_nanddi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orqi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orhi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subdi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandqi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandhi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandsi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nanddi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchqi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchqi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchhi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchhi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchsi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchsi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchdi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchdi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchdi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchdi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchdi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchqi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchhi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchsi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchdi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_load_exclusiveqi                             (rtx, rtx);
extern rtx        gen_arm_load_exclusivehi                             (rtx, rtx);
extern rtx        gen_arm_load_acquire_exclusiveqi                     (rtx, rtx);
extern rtx        gen_arm_load_acquire_exclusivehi                     (rtx, rtx);
extern rtx        gen_arm_load_exclusivesi                             (rtx, rtx);
extern rtx        gen_arm_load_acquire_exclusivesi                     (rtx, rtx);
extern rtx        gen_arm_load_exclusivedi                             (rtx, rtx);
extern rtx        gen_arm_load_acquire_exclusivedi                     (rtx, rtx);
extern rtx        gen_arm_store_exclusiveqi                            (rtx, rtx, rtx);
extern rtx        gen_arm_store_exclusivehi                            (rtx, rtx, rtx);
extern rtx        gen_arm_store_exclusivesi                            (rtx, rtx, rtx);
extern rtx        gen_arm_store_exclusivedi                            (rtx, rtx, rtx);
extern rtx        gen_arm_store_release_exclusivedi                    (rtx, rtx, rtx);
extern rtx        gen_arm_store_release_exclusiveqi                    (rtx, rtx, rtx);
extern rtx        gen_arm_store_release_exclusivehi                    (rtx, rtx, rtx);
extern rtx        gen_arm_store_release_exclusivesi                    (rtx, rtx, rtx);
extern rtx        gen_addqq3                                           (rtx, rtx, rtx);
extern rtx        gen_addhq3                                           (rtx, rtx, rtx);
extern rtx        gen_addsq3                                           (rtx, rtx, rtx);
extern rtx        gen_adduqq3                                          (rtx, rtx, rtx);
extern rtx        gen_adduhq3                                          (rtx, rtx, rtx);
extern rtx        gen_addusq3                                          (rtx, rtx, rtx);
extern rtx        gen_addha3                                           (rtx, rtx, rtx);
extern rtx        gen_addsa3                                           (rtx, rtx, rtx);
extern rtx        gen_adduha3                                          (rtx, rtx, rtx);
extern rtx        gen_addusa3                                          (rtx, rtx, rtx);
extern rtx        gen_usaddv4uqq3                                      (rtx, rtx, rtx);
extern rtx        gen_usaddv2uhq3                                      (rtx, rtx, rtx);
extern rtx        gen_usadduqq3                                        (rtx, rtx, rtx);
extern rtx        gen_usadduhq3                                        (rtx, rtx, rtx);
extern rtx        gen_usaddv2uha3                                      (rtx, rtx, rtx);
extern rtx        gen_usadduha3                                        (rtx, rtx, rtx);
extern rtx        gen_subqq3                                           (rtx, rtx, rtx);
extern rtx        gen_subhq3                                           (rtx, rtx, rtx);
extern rtx        gen_subsq3                                           (rtx, rtx, rtx);
extern rtx        gen_subuqq3                                          (rtx, rtx, rtx);
extern rtx        gen_subuhq3                                          (rtx, rtx, rtx);
extern rtx        gen_subusq3                                          (rtx, rtx, rtx);
extern rtx        gen_subha3                                           (rtx, rtx, rtx);
extern rtx        gen_subsa3                                           (rtx, rtx, rtx);
extern rtx        gen_subuha3                                          (rtx, rtx, rtx);
extern rtx        gen_subusa3                                          (rtx, rtx, rtx);
extern rtx        gen_ussubv4uqq3                                      (rtx, rtx, rtx);
extern rtx        gen_ussubv2uhq3                                      (rtx, rtx, rtx);
extern rtx        gen_ussubuqq3                                        (rtx, rtx, rtx);
extern rtx        gen_ussubuhq3                                        (rtx, rtx, rtx);
extern rtx        gen_ussubv2uha3                                      (rtx, rtx, rtx);
extern rtx        gen_ussubuha3                                        (rtx, rtx, rtx);
extern rtx        gen_arm_ssatsihi_shift                               (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_usatsihi                                     (rtx, rtx);
extern rtx        gen_mve_movv16qi                                     (rtx, rtx);
extern rtx        gen_mve_movv8hi                                      (rtx, rtx);
extern rtx        gen_mve_movv4si                                      (rtx, rtx);
extern rtx        gen_mve_movv2di                                      (rtx, rtx);
extern rtx        gen_mve_movti                                        (rtx, rtx);
extern rtx        gen_mve_movv8hf                                      (rtx, rtx);
extern rtx        gen_mve_movv4sf                                      (rtx, rtx);
extern rtx        gen_mve_movv2df                                      (rtx, rtx);
extern rtx        gen_mve_vdupq_nv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vdupq_nv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vdupq_nv4si                                  (rtx, rtx);
extern rtx        gen_mve_vdupq_nv8hf                                  (rtx, rtx);
extern rtx        gen_mve_vdupq_nv4sf                                  (rtx, rtx);
extern rtx        gen_mve_vst4qv16qi                                   (rtx, rtx);
extern rtx        gen_mve_vst4qv8hi                                    (rtx, rtx);
extern rtx        gen_mve_vst4qv4si                                    (rtx, rtx);
extern rtx        gen_mve_vst4qv8hf                                    (rtx, rtx);
extern rtx        gen_mve_vst4qv4sf                                    (rtx, rtx);
extern rtx        gen_mve_vrndq_fv8hf                                  (rtx, rtx);
extern rtx        gen_mve_vrndaq_fv8hf                                 (rtx, rtx);
extern rtx        gen_mve_vrndmq_fv8hf                                 (rtx, rtx);
extern rtx        gen_mve_vrndnq_fv8hf                                 (rtx, rtx);
extern rtx        gen_mve_vrndpq_fv8hf                                 (rtx, rtx);
extern rtx        gen_mve_vrndxq_fv8hf                                 (rtx, rtx);
extern rtx        gen_mve_vrndq_fv4sf                                  (rtx, rtx);
extern rtx        gen_mve_vrndaq_fv4sf                                 (rtx, rtx);
extern rtx        gen_mve_vrndmq_fv4sf                                 (rtx, rtx);
extern rtx        gen_mve_vrndnq_fv4sf                                 (rtx, rtx);
extern rtx        gen_mve_vrndpq_fv4sf                                 (rtx, rtx);
extern rtx        gen_mve_vrndxq_fv4sf                                 (rtx, rtx);
extern rtx        gen_mve_vrev64q_fv8hf                                (rtx, rtx);
extern rtx        gen_mve_vrev64q_fv4sf                                (rtx, rtx);
extern rtx        gen_mve_vabsq_fv8hf                                  (rtx, rtx);
extern rtx        gen_mve_vnegq_fv8hf                                  (rtx, rtx);
extern rtx        gen_mve_vabsq_fv4sf                                  (rtx, rtx);
extern rtx        gen_mve_vnegq_fv4sf                                  (rtx, rtx);
extern rtx        gen_mve_vrev32q_fv8hf                                (rtx, rtx);
extern rtx        gen_mve_vcvtbq_f32_f16v4sf                           (rtx, rtx);
extern rtx        gen_mve_vcvttq_f32_f16v4sf                           (rtx, rtx);
extern rtx        gen_mve_vcvtq_to_f_sv8hf                             (rtx, rtx);
extern rtx        gen_mve_vcvtq_to_f_uv8hf                             (rtx, rtx);
extern rtx        gen_mve_vcvtq_to_f_sv4sf                             (rtx, rtx);
extern rtx        gen_mve_vcvtq_to_f_uv4sf                             (rtx, rtx);
extern rtx        gen_mve_vrev64q_sv16qi                               (rtx, rtx);
extern rtx        gen_mve_vrev64q_uv16qi                               (rtx, rtx);
extern rtx        gen_mve_vrev64q_sv8hi                                (rtx, rtx);
extern rtx        gen_mve_vrev64q_uv8hi                                (rtx, rtx);
extern rtx        gen_mve_vrev64q_sv4si                                (rtx, rtx);
extern rtx        gen_mve_vrev64q_uv4si                                (rtx, rtx);
extern rtx        gen_mve_vcvtq_from_f_sv8hi                           (rtx, rtx);
extern rtx        gen_mve_vcvtq_from_f_uv8hi                           (rtx, rtx);
extern rtx        gen_mve_vcvtq_from_f_sv4si                           (rtx, rtx);
extern rtx        gen_mve_vcvtq_from_f_uv4si                           (rtx, rtx);
extern rtx        gen_mve_vabsq_sv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vnegq_sv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vabsq_sv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vnegq_sv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vabsq_sv4si                                  (rtx, rtx);
extern rtx        gen_mve_vnegq_sv4si                                  (rtx, rtx);
extern rtx        gen_mve_vmvnq_uv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vmvnq_uv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vmvnq_uv4si                                  (rtx, rtx);
extern rtx        gen_mve_vclzq_sv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vclzq_sv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vclzq_sv4si                                  (rtx, rtx);
extern rtx        gen_mve_vclsq_sv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vqabsq_sv16qi                                (rtx, rtx);
extern rtx        gen_mve_vqnegq_sv16qi                                (rtx, rtx);
extern rtx        gen_mve_vclsq_sv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vqabsq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vqnegq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vclsq_sv4si                                  (rtx, rtx);
extern rtx        gen_mve_vqabsq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vqnegq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vaddvq_uv16qi                                (rtx, rtx);
extern rtx        gen_mve_vaddvq_sv16qi                                (rtx, rtx);
extern rtx        gen_mve_vaddvq_uv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vaddvq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vaddvq_uv4si                                 (rtx, rtx);
extern rtx        gen_mve_vaddvq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vrev32q_uv16qi                               (rtx, rtx);
extern rtx        gen_mve_vrev32q_sv16qi                               (rtx, rtx);
extern rtx        gen_mve_vrev32q_uv8hi                                (rtx, rtx);
extern rtx        gen_mve_vrev32q_sv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmovlbq_sv16qi                               (rtx, rtx);
extern rtx        gen_mve_vmovlbq_uv16qi                               (rtx, rtx);
extern rtx        gen_mve_vmovltq_uv16qi                               (rtx, rtx);
extern rtx        gen_mve_vmovltq_sv16qi                               (rtx, rtx);
extern rtx        gen_mve_vmovlbq_sv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmovlbq_uv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmovltq_uv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmovltq_sv8hi                                (rtx, rtx);
extern rtx        gen_mve_vcvtaq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtaq_uv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtmq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtmq_uv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtnq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtnq_uv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtpq_sv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtpq_uv8hi                                 (rtx, rtx);
extern rtx        gen_mve_vcvtaq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtaq_uv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtmq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtmq_uv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtnq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtnq_uv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtpq_sv4si                                 (rtx, rtx);
extern rtx        gen_mve_vcvtpq_uv4si                                 (rtx, rtx);
extern rtx        gen_mve_vmvnq_n_uv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmvnq_n_sv8hi                                (rtx, rtx);
extern rtx        gen_mve_vmvnq_n_uv4si                                (rtx, rtx);
extern rtx        gen_mve_vmvnq_n_sv4si                                (rtx, rtx);
extern rtx        gen_mve_vrev16q_uv16qi                               (rtx, rtx);
extern rtx        gen_mve_vrev16q_sv16qi                               (rtx, rtx);
extern rtx        gen_mve_vaddlvq_uv4si                                (rtx, rtx);
extern rtx        gen_mve_vaddlvq_sv4si                                (rtx, rtx);
extern rtx        gen_mve_vctp8qv16bi                                  (rtx, rtx);
extern rtx        gen_mve_vctp16qv8bi                                  (rtx, rtx);
extern rtx        gen_mve_vctp32qv4bi                                  (rtx, rtx);
extern rtx        gen_mve_vctp64qv2qi                                  (rtx, rtx);
extern rtx        gen_mve_vpnotv16bi                                   (rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_to_f_sv8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_to_f_uv8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_to_f_sv4sf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_to_f_uv4sf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_uv2di                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcreateq_sv2di                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv16qi_imm                           (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv8hi_imm                            (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_sv4si_imm                            (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv16qi_imm                           (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv8hi_imm                            (rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_n_uv4si_imm                            (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_from_f_sv8hi                         (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_from_f_uv8hi                         (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_from_f_sv4si                         (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_n_from_f_uv4si                         (rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvq_p_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvq_p_uv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_n_v16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_n_v8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_n_v4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddvq_p_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_v16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_v16qi                          (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_sv16qi                         (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_sv16qi                        (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_v8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_v8hi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_sv8hi                          (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_sv8hi                         (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_v4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_v4si                           (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_sv4si                          (rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_sv4si                         (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_n_sv16qi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_n_sv16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_n_sv8hi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_n_sv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_n_sv4si                             (rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_n_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vminq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_sv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_uv16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_sv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_uv8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_uv16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_sv16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_uv16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_sv16qi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_uv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_sv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_uv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_sv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_uv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_uv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vaddqv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_mve_vsubqv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_mve_vmulqv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_mve_vaddqv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vsubqv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vmulqv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vaddqv4si                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vsubqv4si                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vmulqv4si                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_uv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_uv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_n_uv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_n_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_sv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_uv16qi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_sv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_uv16qi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_r_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_r_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_n_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_n_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_n_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvaq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvaq_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_n_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_n_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_n_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_fv8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_fv8hf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_fv8hf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot90_fv8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot180_fv8hf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot270_fv8hf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_fv4sf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_fv4sf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_fv4sf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot90_fv4sf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot180_fv4sf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot270_fv4sf                          (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_n_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_n_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vctp8q_mv16bi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vctp16q_mv8bi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vctp32q_mv4bi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vctp64q_mv2qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vcvtbq_f16_f32v8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcvttq_f16_f32v8hf                           (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmaq_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmaq_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmaq_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmaq_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmavq_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmvq_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmavq_fv8hf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmvq_fv8hf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmavq_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmvq_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmavq_fv4sf                              (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmvq_fv4sf                               (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmq_fv8hf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vminnmq_fv4sf                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_uv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavxq_sv8hi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavxq_sv8hi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_uv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavxq_sv4si                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavxq_sv4si                             (rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_sv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_uv8hi                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovunbq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovuntq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_sv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_uv4si                               (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovunbq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqmovuntq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_fv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_fv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_n_sv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_n_uv8hi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_n_sv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_n_uv4si                                (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_n_sv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_n_sv8hi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_n_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_n_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_sv4si                              (rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhq_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhq_uv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhxq_sv4si                           (rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhq_sv4si                            (rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhxq_sv4si                           (rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_n_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_n_uv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_n_sv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_n_uv16qi                             (rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_n_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_n_uv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_n_sv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_n_uv8hi                              (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_poly_pv16qi                          (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_poly_pv16qi                          (rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_poly_pv8hi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_poly_pv8hi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtaq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtaq_m_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtmq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtmq_m_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtnq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtnq_m_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtpq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtpq_m_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtaq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtaq_m_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtmq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtmq_m_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtnq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtnq_m_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtpq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtpq_m_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_to_f_sv8hf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_to_f_uv8hf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_to_f_sv4sf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_to_f_uv4sf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrunbq_n_sv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshruntq_n_sv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_n_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_n_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrunbq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshruntq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_n_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_n_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrunbq_n_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshruntq_n_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_n_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_n_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrunbq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshruntq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_n_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_n_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaq_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaq_uv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaxq_sv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhaq_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhaxq_sv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_sv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_uv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_sv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_uv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_sv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_uv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_sv16qi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_uv16qi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_sv8hi                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_uv8hi                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_sv4si                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_uv4si                                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabsq_m_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclsq_m_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_uv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vnegq_m_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqabsq_m_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqnegq_m_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabsq_m_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclsq_m_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_uv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vnegq_m_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqabsq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqnegq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabsq_m_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclsq_m_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vclzq_m_uv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vnegq_m_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqabsq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqnegq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddvaq_p_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_n_uv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_uv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_n_uv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_uv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpcsq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmphiq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_m_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_m_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_m_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxaq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminaq_m_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_p_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_uv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_p_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_uv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_p_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_p_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxavq_p_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxvq_p_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminavq_p_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminvq_p_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_uv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_p_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_p_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_p_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_p_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_p_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_p_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavq_p_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavxq_p_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavq_p_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavxq_p_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_uv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_sv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_uv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_n_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_n_sv16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_uv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_sv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_uv8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_n_sv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_n_uv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_sv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_n_uv4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_n_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_uv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_uv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_uv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_sv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_uv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_sv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_uv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_sv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_uv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_sv2di                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_uv2di                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_sv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_uv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_uv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_n_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_n_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_sv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_uv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_r_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_r_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_uv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_uv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_n_uv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_sv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_uv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_sv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_uv8hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_sv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_n_uv4si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabsq_m_fv8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vnegq_m_fv8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndaq_m_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndmq_m_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndnq_m_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndpq_m_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndq_m_fv8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndxq_m_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabsq_m_fv4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vnegq_m_fv4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndaq_m_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndmq_m_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndnq_m_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndpq_m_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndq_m_fv4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrndxq_m_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvaq_p_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddlvaq_p_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_fv8hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot90_fv8hf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot180_fv8hf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot270_fv8hf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_fv4sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot90_fv4sf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot180_fv4sf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot270_fv4sf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpeqq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgeq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpgtq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpleq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpltq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmpneq_m_n_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtbq_m_f16_f32v8hf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvttq_m_f16_f32v8hf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtbq_m_f32_f16v4sf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvttq_m_f32_f16v4sf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdupq_m_n_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_fv8hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmsq_fv8hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_fv4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmsq_fv4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_n_fv8hf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmasq_n_fv8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_n_fv4sf                                (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmasq_n_fv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmaq_m_fv8hf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmaq_m_fv8hf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmaq_m_fv4sf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmaq_m_fv4sf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmavq_p_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmvq_p_fv8hf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmavq_p_fv8hf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmvq_p_fv8hf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmavq_p_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmvq_p_fv4sf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmavq_p_fv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmvq_p_fv4sf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaxq_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaq_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaxq_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaxq_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaq_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaxq_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_p_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_p_uv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavxq_p_sv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavq_p_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavxq_p_sv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_p_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavq_p_uv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavxq_p_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavq_p_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavxq_p_sv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovlbq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovlbq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovltq_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovltq_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovlbq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovlbq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovltq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovltq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_m_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_m_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_m_sv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_m_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovunbq_m_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovuntq_m_sv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovnbq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_m_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmovntq_m_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_m_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovnbq_m_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_m_sv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovntq_m_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovunbq_m_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqmovuntq_m_sv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_m_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_n_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_n_sv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_fv8hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vpselq_fv4sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev32q_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev32q_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev32q_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev32q_m_sv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev32q_m_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_fv8hf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev64q_m_fv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhq_p_sv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhq_p_uv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhxq_p_sv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhq_p_sv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhxq_p_sv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_from_f_sv8hi                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_from_f_uv8hi                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_from_f_sv4si                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_from_f_uv4si                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev16q_m_sv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrev16q_m_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_from_f_uv8hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_from_f_sv8hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_from_f_uv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_from_f_sv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabavq_p_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_m_n_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_m_n_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshluq_m_n_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsriq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_to_f_uv8hf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_to_f_sv8hf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_to_f_uv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcvtq_m_n_to_f_sv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_m_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_m_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_m_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_m_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_m_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_m_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_m_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_m_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_m_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_m_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_m_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_m_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_m_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_m_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_m_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_m_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulhq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhq_m_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmladhxq_m_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhq_m_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlsdhxq_m_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhq_m_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmladhxq_m_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhq_m_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlsdhxq_m_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshlq_m_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrhaddq_m_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmulhq_m_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshlq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_sv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_uv16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_sv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_uv8hi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_m_sv16qi                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_m_sv16qi                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_m_v16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_m_v16qi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_m_sv8hi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_m_sv8hi                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_m_v8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_m_v8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot90_m_sv4si                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhcaddq_rot270_m_sv4si                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_m_v4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_m_v4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_m_n_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_m_n_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_m_n_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_m_n_sv16qi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_n_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_n_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_m_n_sv8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhaddq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vhsubq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlasq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlahq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmlashq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlahq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmlashq_m_n_sv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqaddq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqsubq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulhq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrdmulhq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_uv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_p_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_p_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_p_sv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_uv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_p_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_p_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_p_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaq_p_uv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaxq_p_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsdavaq_p_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmladavaxq_p_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_uv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_uv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_sv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_uv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_uv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_uv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_int_m_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_uv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_int_m_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshlq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_sv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_uv16qi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_sv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_uv8hi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_sv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrq_m_n_uv4si                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_uv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_sv16qi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_uv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_sv8hi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_uv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsliq_m_n_sv4si                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_p_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_p_uv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaxq_p_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaq_p_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaxq_p_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_p_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaq_p_uv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlaldavaxq_p_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaq_p_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmlsldavaxq_p_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_m_n_uv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_m_n_uv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrunbq_m_n_sv8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshruntq_m_n_sv8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_m_n_uv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_m_n_uv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrunbq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshruntq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_m_n_uv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_m_n_sv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_m_n_uv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_m_n_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_m_n_uv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_m_n_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_m_n_uv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrnbq_m_n_uv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrntq_m_n_uv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshrunbq_m_n_sv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqrshruntq_m_n_sv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrnbq_m_n_uv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrntq_m_n_uv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshrunbq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqshruntq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrnbq_m_n_uv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_m_n_sv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrshrntq_m_n_uv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_m_n_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrnbq_m_n_uv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_m_n_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshrntq_m_n_uv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaq_p_sv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaq_p_uv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlaldavhaxq_p_sv4si                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhaq_p_sv4si                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vrmlsldavhaxq_p_sv4si                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_m_n_uv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_m_n_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_m_n_uv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_m_n_sv16qi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_m_n_uv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshllbq_m_n_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_m_n_uv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlltq_m_n_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_poly_m_pv16qi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_poly_m_pv16qi                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmullbq_poly_m_pv8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulltq_poly_m_pv8hi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_m_n_sv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_m_n_sv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_m_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_m_sv8hi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmullbq_m_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vqdmulltq_m_sv4si                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmsq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmq_m_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmq_m_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vabdq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmsq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmaxnmq_m_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vminnmq_m_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_m_n_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmasq_m_n_fv8hf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_fv8hf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vaddq_m_n_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmaq_m_n_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vfmasq_m_n_fv4sf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vmulq_m_n_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsubq_m_n_fv4sf                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_fv8hf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vandq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_veorq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vornq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_m_fv4sf                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_fv8hf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vbrsrq_m_n_fv4sf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_m_fv8hf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_m_fv8hf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_m_fv8hf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot90_m_fv8hf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot180_m_fv8hf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot270_m_fv8hf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot90_m_fv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcaddq_rot270_m_fv4sf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_m_fv4sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot90_m_fv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot180_m_fv4sf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmulq_rot270_m_fv4sf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_m_fv8hf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot90_m_fv8hf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot180_m_fv8hf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot270_m_fv8hf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_m_fv4sf                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot90_m_fv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot180_m_fv4sf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vcmlaq_rot270_m_fv4sf                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_v16qi                                  (rtx, rtx);
extern rtx        gen_mve_vstrq_v8hi                                   (rtx, rtx);
extern rtx        gen_mve_vstrq_v4si                                   (rtx, rtx);
extern rtx        gen_mve_vstrq_v8hf                                   (rtx, rtx);
extern rtx        gen_mve_vstrq_v4sf                                   (rtx, rtx);
extern rtx        gen_mve_vstrq_p_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_v8hf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_v4sf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_v8qi                          (rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_v4qi                          (rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_v4hi                          (rtx, rtx);
extern rtx        gen_mve_vstrq_p_truncate_v8qi                        (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_truncate_v4qi                        (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_p_truncate_v4hi                        (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_v16qi                                  (rtx, rtx);
extern rtx        gen_mve_vldrq_v8hi                                   (rtx, rtx);
extern rtx        gen_mve_vldrq_v4si                                   (rtx, rtx);
extern rtx        gen_mve_vldrq_v8hf                                   (rtx, rtx);
extern rtx        gen_mve_vldrq_v4sf                                   (rtx, rtx);
extern rtx        gen_mve_vldrq_z_v16qi                                (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_v8hi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_v4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_v8hf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_v4sf                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v8qis                           (rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v8qiu                           (rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v4qis                           (rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v4qiu                           (rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v4his                           (rtx, rtx);
extern rtx        gen_mve_vldrq_extend_v4hiu                           (rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v8qis                         (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v8qiu                         (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v4qis                         (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v4qiu                         (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v4his                         (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_z_extend_v4hiu                         (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v16qi                   (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v8hi                    (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v4si                    (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v8hf                    (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v4sf                    (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_v2di                    (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v16qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v8hi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v4si                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v8hf                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v4sf                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_offset_p_v2di                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_v8qi           (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_v4qi           (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_v4hi           (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_p_v8qi         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_p_v4qi         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_offset_p_v4hi         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_v4si                      (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_v4sf                      (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_v2di                      (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v16qi                    (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v8hi                     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v4si                     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v8hf                     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v4sf                     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_v2di                     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v8qis             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v8qiu             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v4qis             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v4qiu             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v4his             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_extend_v4hiu             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v16qi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v8hi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v4si                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v8hf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v4sf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_v2di                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v8qis           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v8qiu           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v4qis           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v4qiu           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v4his           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_offset_z_extend_v4hiu           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_p_v4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_p_v4sf                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_p_v2di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_v4si                       (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_v4sf                       (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_v2di                       (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_z_v4si                     (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_z_v4sf                     (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_z_v2di                     (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_v8hi             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_v4si             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_v8hf             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_v4sf             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_v2di             (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_extend_v4sis     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_extend_v4siu     (rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_v8hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_v4si           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_v8hf           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_v4sf           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_v2di           (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_extend_v4sis   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_shifted_offset_z_extend_v4siu   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_v8hi            (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_v4si            (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_v8hf            (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_v4sf            (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_v2di            (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_shifted_offset_v4si   (rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_p_v8hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_p_v4si          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_p_v8hf          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_p_v4sf          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_shifted_offset_p_v2di          (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_truncate_scatter_shifted_offset_p_v4si (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_uv16qi_insn                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_uv16qi_insn                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_uv8hi_insn                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_uv8hi_insn                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_uv4si_insn                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_uv4si_insn                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_m_wb_uv16qi_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_m_wb_uv16qi_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_m_wb_uv8hi_insn                       (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_m_wb_uv8hi_insn                       (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vidupq_m_wb_uv4si_insn                       (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vddupq_m_wb_uv4si_insn                       (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv16qi_insn                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_wb_uv16qi_insn                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv8hi_insn                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_wb_uv8hi_insn                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv4si_insn                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_wb_uv4si_insn                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv16qi_insn                     (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_m_wb_uv16qi_insn                     (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv8hi_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_m_wb_uv8hi_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv4si_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vdwdupq_m_wb_uv4si_insn                      (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_v4si                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_v4sf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_v2di                   (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_p_v4si                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_p_v4sf                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vstrq_scatter_base_wb_p_v2di                 (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_v4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_v4sf                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_v2di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_z_v4si                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_z_v4sf                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vldrq_gather_base_wb_z_v2di                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_get_fpscr_nzcvqc                                 (rtx);
extern rtx        gen_set_fpscr_nzcvqc                                 (rtx);
extern rtx        gen_mve_vadciq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vadciq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vsbciq_uv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vsbciq_sv4si                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vadciq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vadciq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsbciq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsbciq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vadcq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vadcq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vsbcq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vsbcq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vadcq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vadcq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsbcq_m_uv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vsbcq_m_sv4si                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vst2qv16qi                                   (rtx, rtx);
extern rtx        gen_mve_vst2qv8hi                                    (rtx, rtx);
extern rtx        gen_mve_vst2qv4si                                    (rtx, rtx);
extern rtx        gen_mve_vst2qv8hf                                    (rtx, rtx);
extern rtx        gen_mve_vst2qv4sf                                    (rtx, rtx);
extern rtx        gen_mve_vld2qv16qi                                   (rtx, rtx);
extern rtx        gen_mve_vld2qv8hi                                    (rtx, rtx);
extern rtx        gen_mve_vld2qv4si                                    (rtx, rtx);
extern rtx        gen_mve_vld2qv8hf                                    (rtx, rtx);
extern rtx        gen_mve_vld2qv4sf                                    (rtx, rtx);
extern rtx        gen_mve_vld4qv16qi                                   (rtx, rtx);
extern rtx        gen_mve_vld4qv8hi                                    (rtx, rtx);
extern rtx        gen_mve_vld4qv4si                                    (rtx, rtx);
extern rtx        gen_mve_vld4qv8hf                                    (rtx, rtx);
extern rtx        gen_mve_vld4qv4sf                                    (rtx, rtx);
extern rtx        gen_mve_vec_extractv16qiqi                           (rtx, rtx, rtx);
extern rtx        gen_mve_vec_extractv8hihi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vec_extractv4sisi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vec_extractv8hfhf                            (rtx, rtx, rtx);
extern rtx        gen_mve_vec_extractv4sfsf                            (rtx, rtx, rtx);
extern rtx        gen_mve_vec_extractv2didi                            (rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv16qi_internal                        (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv8hi_internal                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv8hf_internal                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv4si_internal                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv4sf_internal                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vec_setv2di_internal                         (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_uqrshll_sat64_di                             (rtx, rtx, rtx);
extern rtx        gen_mve_uqrshll_sat48_di                             (rtx, rtx, rtx);
extern rtx        gen_mve_sqrshrl_sat64_di                             (rtx, rtx, rtx);
extern rtx        gen_mve_sqrshrl_sat48_di                             (rtx, rtx, rtx);
extern rtx        gen_mve_uqrshl_si                                    (rtx, rtx, rtx);
extern rtx        gen_mve_sqrshr_si                                    (rtx, rtx, rtx);
extern rtx        gen_mve_uqshll_di                                    (rtx, rtx, rtx);
extern rtx        gen_mve_urshrl_di                                    (rtx, rtx, rtx);
extern rtx        gen_mve_uqshl_si                                     (rtx, rtx, rtx);
extern rtx        gen_mve_urshr_si                                     (rtx, rtx, rtx);
extern rtx        gen_mve_sqshl_si                                     (rtx, rtx, rtx);
extern rtx        gen_mve_srshr_si                                     (rtx, rtx, rtx);
extern rtx        gen_mve_srshrl_di                                    (rtx, rtx, rtx);
extern rtx        gen_mve_sqshll_di                                    (rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_sv16qi                              (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_uv16qi                              (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_sv8hi                               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_uv8hi                               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_sv4si                               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_vshlcq_m_uv4si                               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx1qv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_arm_vcx1qav16qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2qv16qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2qav16qi                                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3qv16qi                                   (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3qav16qi                                  (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx1q_p_v16qi                                (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx1qa_p_v16qi                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2q_p_v16qi                                (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx2qa_p_v16qi                               (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3q_p_v16qi                                (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcx3qa_p_v16qi                               (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movmisalignv16qi_mve_store                       (rtx, rtx);
extern rtx        gen_movmisalignv8hi_mve_store                        (rtx, rtx);
extern rtx        gen_movmisalignv4si_mve_store                        (rtx, rtx);
extern rtx        gen_movmisalignv8hf_mve_store                        (rtx, rtx);
extern rtx        gen_movmisalignv4sf_mve_store                        (rtx, rtx);
extern rtx        gen_movmisalignv16qi_mve_load                        (rtx, rtx);
extern rtx        gen_movmisalignv8hi_mve_load                         (rtx, rtx);
extern rtx        gen_movmisalignv4si_mve_load                         (rtx, rtx);
extern rtx        gen_movmisalignv8hf_mve_load                         (rtx, rtx);
extern rtx        gen_movmisalignv4sf_mve_load                         (rtx, rtx);
extern rtx        gen_predicated_doloop_end_internal16                 (rtx);
extern rtx        gen_predicated_doloop_end_internal8                  (rtx);
extern rtx        gen_predicated_doloop_end_internal4                  (rtx);
extern rtx        gen_predicated_doloop_end_internal2                  (rtx);
extern rtx        gen_dlstp8_insn                                      (rtx);
extern rtx        gen_dlstp16_insn                                     (rtx);
extern rtx        gen_dlstp32_insn                                     (rtx);
extern rtx        gen_dlstp64_insn                                     (rtx);
extern rtx        gen_adddi3                                           (rtx, rtx, rtx);
extern rtx        gen_addvsi4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addvdi4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_vout_reg                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_vout_imm                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_vout_0                                (rtx, rtx);
extern rtx        gen_uaddvsi4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_uaddvdi4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_cout_reg                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_cout_imm                              (rtx, rtx, rtx);
extern rtx        gen_addsi3_cin_cout_0                                (rtx, rtx);
extern rtx        gen_addsi3                                           (rtx, rtx, rtx);
extern rtx        gen_subvsi4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_subvdi4                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_usubvsi4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_usubvdi4                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_addsf3                                           (rtx, rtx, rtx);
extern rtx        gen_adddf3                                           (rtx, rtx, rtx);
extern rtx        gen_subdi3                                           (rtx, rtx, rtx);
extern rtx        gen_subsi3                                           (rtx, rtx, rtx);
extern rtx        gen_subsf3                                           (rtx, rtx, rtx);
extern rtx        gen_subdf3                                           (rtx, rtx, rtx);
extern rtx        gen_mulhi3                                           (rtx, rtx, rtx);
extern rtx        gen_mulsi3                                           (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                                         (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                                        (rtx, rtx, rtx);
extern rtx        gen_maddsidi4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart                                 (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart                                 (rtx, rtx, rtx);
extern rtx        gen_maddhisi4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlabb                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlatb                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlatt                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawb                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlawt                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_mulsf3                                           (rtx, rtx, rtx);
extern rtx        gen_muldf3                                           (rtx, rtx, rtx);
extern rtx        gen_divsf3                                           (rtx, rtx, rtx);
extern rtx        gen_divdf3                                           (rtx, rtx, rtx);
extern rtx        gen_anddi3                                           (rtx, rtx, rtx);
extern rtx        gen_iordi3                                           (rtx, rtx, rtx);
extern rtx        gen_xordi3                                           (rtx, rtx, rtx);
extern rtx        gen_one_cmpldi2                                      (rtx, rtx);
extern rtx        gen_andsi3                                           (rtx, rtx, rtx);
extern rtx        gen_insv                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_iorsi3                                           (rtx, rtx, rtx);
extern rtx        gen_xorsi3                                           (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                                          (rtx, rtx, rtx);
extern rtx        gen_sminsi3                                          (rtx, rtx, rtx);
extern rtx        gen_umaxsi3                                          (rtx, rtx, rtx);
extern rtx        gen_uminsi3                                          (rtx, rtx, rtx);
extern rtx        gen_arm_qadd                                         (rtx, rtx, rtx);
extern rtx        gen_arm_qsub                                         (rtx, rtx, rtx);
extern rtx        gen_arm_ssat                                         (rtx, rtx, rtx);
extern rtx        gen_arm_usat                                         (rtx, rtx, rtx);
extern rtx        gen_arm_saturation_occurred                          (rtx);
extern rtx        gen_arm_set_saturation                               (rtx);
extern rtx        gen_ashldi3                                          (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                                          (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                                          (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                                          (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                                          (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                                          (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                                          (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                                          (rtx, rtx, rtx);
extern rtx        gen_extzv                                            (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv_t1                                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_extv                                             (rtx, rtx, rtx, rtx);
extern rtx        gen_extv_regsi                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_negvsi3                                          (rtx, rtx, rtx);
extern rtx        gen_negvdi3                                          (rtx, rtx, rtx);
extern rtx        gen_negsi2                                           (rtx, rtx);
extern rtx        gen_negsf2                                           (rtx, rtx);
extern rtx        gen_negdf2                                           (rtx, rtx);
extern rtx        gen_abssi2                                           (rtx, rtx);
extern rtx        gen_abssf2                                           (rtx, rtx);
extern rtx        gen_absdf2                                           (rtx, rtx);
extern rtx        gen_sqrtsf2                                          (rtx, rtx);
extern rtx        gen_sqrtdf2                                          (rtx, rtx);
extern rtx        gen_one_cmplsi2                                      (rtx, rtx);
extern rtx        gen_floatsihf2                                       (rtx, rtx);
extern rtx        gen_floatdihf2                                       (rtx, rtx);
extern rtx        gen_floatsisf2                                       (rtx, rtx);
extern rtx        gen_floatsidf2                                       (rtx, rtx);
extern rtx        gen_fix_trunchfsi2                                   (rtx, rtx);
extern rtx        gen_fix_trunchfdi2                                   (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                                   (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                                   (rtx, rtx);
extern rtx        gen_truncdfsf2                                       (rtx, rtx);
extern rtx        gen_truncdfhf2                                       (rtx, rtx);
extern rtx        gen_zero_extendqidi2                                 (rtx, rtx);
extern rtx        gen_zero_extendhidi2                                 (rtx, rtx);
extern rtx        gen_zero_extendsidi2                                 (rtx, rtx);
extern rtx        gen_extendqidi2                                      (rtx, rtx);
extern rtx        gen_extendhidi2                                      (rtx, rtx);
extern rtx        gen_extendsidi2                                      (rtx, rtx);
extern rtx        gen_zero_extendhisi2                                 (rtx, rtx);
extern rtx        gen_zero_extendqisi2                                 (rtx, rtx);
extern rtx        gen_extendhisi2                                      (rtx, rtx);
extern rtx        gen_extendhisi2_mem                                  (rtx, rtx);
extern rtx        gen_extendqihi2                                      (rtx, rtx);
extern rtx        gen_extendqisi2                                      (rtx, rtx);
extern rtx        gen_arm_smlad                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smladx                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsd                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smlsdx                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_smuad                                        (rtx, rtx, rtx);
extern rtx        gen_arm_smuadx                                       (rtx, rtx, rtx);
extern rtx        gen_arm_ssat16                                       (rtx, rtx, rtx);
extern rtx        gen_arm_usat16                                       (rtx, rtx, rtx);
extern rtx        gen_extendsfdf2                                      (rtx, rtx);
extern rtx        gen_extendhfdf2                                      (rtx, rtx);
extern rtx        gen_movdi                                            (rtx, rtx);
extern rtx        gen_movsi                                            (rtx, rtx);
extern rtx        gen_calculate_pic_address                            (rtx, rtx, rtx);
extern rtx        gen_builtin_setjmp_receiver                          (rtx);
extern rtx        gen_storehi                                          (rtx, rtx);
extern rtx        gen_storehi_bigend                                   (rtx, rtx);
extern rtx        gen_storeinthi                                       (rtx, rtx);
extern rtx        gen_storehi_single_op                                (rtx, rtx);
extern rtx        gen_movhi                                            (rtx, rtx);
extern rtx        gen_movhi_bytes                                      (rtx, rtx);
extern rtx        gen_movhi_bigend                                     (rtx, rtx);
extern rtx        gen_reload_outhi                                     (rtx, rtx, rtx);
extern rtx        gen_reload_inhi                                      (rtx, rtx, rtx);
extern rtx        gen_movqi                                            (rtx, rtx);
extern rtx        gen_movhf                                            (rtx, rtx);
extern rtx        gen_movbf                                            (rtx, rtx);
extern rtx        gen_movsf                                            (rtx, rtx);
extern rtx        gen_movdf                                            (rtx, rtx);
extern rtx        gen_reload_outdf                                     (rtx, rtx, rtx);
extern rtx        gen_load_multiple                                    (rtx, rtx, rtx);
extern rtx        gen_store_multiple                                   (rtx, rtx, rtx);
extern rtx        gen_setmemsi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cpymemqi                                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranch_cc                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cstore_cc                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorehf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movhfcc                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                                          (rtx, rtx, rtx, rtx);
extern rtx        gen_jump                                             (rtx);
extern rtx        gen_call                                             (rtx, rtx, rtx);
extern rtx        gen_call_internal                                    (rtx, rtx, rtx);
extern rtx        gen_nonsecure_call_internal                          (rtx, rtx, rtx);
extern rtx        gen_call_value                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_call_value_internal                              (rtx, rtx, rtx, rtx);
extern rtx        gen_nonsecure_call_value_internal                    (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_internal                                 (rtx, rtx, rtx);
extern rtx        gen_sibcall                                          (rtx, rtx, rtx);
extern rtx        gen_sibcall_value_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_value                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_return                                           (void);
extern rtx        gen_simple_return                                    (void);
extern rtx        gen_return_addr_mask                                 (rtx);
extern rtx        gen_untyped_call                                     (rtx, rtx, rtx);
extern rtx        gen_untyped_return                                   (rtx, rtx);
extern rtx        gen_stack_protect_combined_set                       (rtx, rtx);
extern rtx        gen_stack_protect_combined_test                      (rtx, rtx, rtx);
extern rtx        gen_stack_protect_set                                (rtx, rtx);
extern rtx        gen_stack_protect_test                               (rtx, rtx, rtx);
extern rtx        gen_casesi                                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_arm_casesi_internal                              (rtx, rtx, rtx, rtx);
extern rtx        gen_indirect_jump                                    (rtx);
extern rtx        gen_prologue                                         (void);
extern rtx        gen_epilogue                                         (void);
extern rtx        gen_sibcall_epilogue                                 (void);
extern rtx        gen_eh_epilogue                                      (rtx, rtx, rtx);
extern rtx        gen_eh_return                                        (rtx);
extern rtx        gen_get_thread_pointersi                             (rtx);
extern rtx        gen_arm_legacy_rev                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_thumb_legacy_rev                                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_modsi3                                           (rtx, rtx, rtx);
extern rtx        gen_bswapsi2                                         (rtx, rtx);
extern rtx        gen_bswaphi2                                         (rtx, rtx);
extern rtx        gen_copysignsf3                                      (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                                      (rtx, rtx, rtx);
extern rtx        gen_movmisaligndi                                    (rtx, rtx);
extern rtx        gen_movmisalignhi                                    (rtx, rtx);
extern rtx        gen_movmisalignsi                                    (rtx, rtx);
extern rtx        gen_arm_ldc                                          (rtx, rtx, rtx);
extern rtx        gen_arm_ldc2                                         (rtx, rtx, rtx);
extern rtx        gen_arm_ldcl                                         (rtx, rtx, rtx);
extern rtx        gen_arm_ldc2l                                        (rtx, rtx, rtx);
extern rtx        gen_arm_stc                                          (rtx, rtx, rtx);
extern rtx        gen_arm_stc2                                         (rtx, rtx, rtx);
extern rtx        gen_arm_stcl                                         (rtx, rtx, rtx);
extern rtx        gen_arm_stc2l                                        (rtx, rtx, rtx);
extern rtx        gen_speculation_barrier                              (void);
extern rtx        gen_movv16qi                                         (rtx, rtx);
extern rtx        gen_movv8hi                                          (rtx, rtx);
extern rtx        gen_movv4si                                          (rtx, rtx);
extern rtx        gen_movv4sf                                          (rtx, rtx);
extern rtx        gen_movv2di                                          (rtx, rtx);
extern rtx        gen_movv2si                                          (rtx, rtx);
extern rtx        gen_movv4hi                                          (rtx, rtx);
extern rtx        gen_movv8qi                                          (rtx, rtx);
extern rtx        gen_movv2sf                                          (rtx, rtx);
extern rtx        gen_movv8hf                                          (rtx, rtx);
extern rtx        gen_addv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_addv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_addv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_addv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_addv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_addv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_addv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_addv2di3                                         (rtx, rtx, rtx);
extern rtx        gen_subv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_subv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_subv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_subv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_subv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_subv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_subv2di3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_mulv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_mulv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_sminv8qi3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv16qi3                                       (rtx, rtx, rtx);
extern rtx        gen_sminv4hi3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv8hi3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv2si3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv4si3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv2sf3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv4sf3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv8hf3                                        (rtx, rtx, rtx);
extern rtx        gen_sminv4hf3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv2si3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv4hi3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv8qi3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv4si3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv8hi3                                        (rtx, rtx, rtx);
extern rtx        gen_uminv16qi3                                       (rtx, rtx, rtx);
extern rtx        gen_smaxv8qi3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv16qi3                                       (rtx, rtx, rtx);
extern rtx        gen_smaxv4hi3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv8hi3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4si3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv2sf3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4sf3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv8hf3                                        (rtx, rtx, rtx);
extern rtx        gen_smaxv4hf3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv2si3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv4hi3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv8qi3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv4si3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv8hi3                                        (rtx, rtx, rtx);
extern rtx        gen_umaxv16qi3                                       (rtx, rtx, rtx);
extern rtx        gen_fmaxv4hf3                                        (rtx, rtx, rtx);
extern rtx        gen_fminv4hf3                                        (rtx, rtx, rtx);
extern rtx        gen_fmaxv8hf3                                        (rtx, rtx, rtx);
extern rtx        gen_fminv8hf3                                        (rtx, rtx, rtx);
extern rtx        gen_fmaxv2sf3                                        (rtx, rtx, rtx);
extern rtx        gen_fminv2sf3                                        (rtx, rtx, rtx);
extern rtx        gen_fmaxv4sf3                                        (rtx, rtx, rtx);
extern rtx        gen_fminv4sf3                                        (rtx, rtx, rtx);
extern rtx        gen_vec_permv8qi                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv16qi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_extractv16qiqi                               (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hihi                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hfhf                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sisi                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sfsf                                (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2didi                                (rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi                                     (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi                                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hf                                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv4si                                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                                      (rtx, rtx, rtx);
extern rtx        gen_vec_setv2di                                      (rtx, rtx, rtx);
extern rtx        gen_andv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_andv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_andv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_andv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_andv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_andv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_andv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_andv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_andv2di3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_iorv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_iorv2di3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv8qi3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3                                        (rtx, rtx, rtx);
extern rtx        gen_xorv4hi3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv2si3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv4hf3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv8hf3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_xorv2di3                                         (rtx, rtx, rtx);
extern rtx        gen_one_cmplv8qi2                                    (rtx, rtx);
extern rtx        gen_one_cmplv16qi2                                   (rtx, rtx);
extern rtx        gen_one_cmplv4hi2                                    (rtx, rtx);
extern rtx        gen_one_cmplv8hi2                                    (rtx, rtx);
extern rtx        gen_one_cmplv2si2                                    (rtx, rtx);
extern rtx        gen_one_cmplv4si2                                    (rtx, rtx);
extern rtx        gen_one_cmplv4hf2                                    (rtx, rtx);
extern rtx        gen_one_cmplv8hf2                                    (rtx, rtx);
extern rtx        gen_one_cmplv2sf2                                    (rtx, rtx);
extern rtx        gen_one_cmplv4sf2                                    (rtx, rtx);
extern rtx        gen_one_cmplv2di2                                    (rtx, rtx);
extern rtx        gen_absv8qi2                                         (rtx, rtx);
extern rtx        gen_negv8qi2                                         (rtx, rtx);
extern rtx        gen_absv16qi2                                        (rtx, rtx);
extern rtx        gen_negv16qi2                                        (rtx, rtx);
extern rtx        gen_absv4hi2                                         (rtx, rtx);
extern rtx        gen_negv4hi2                                         (rtx, rtx);
extern rtx        gen_absv8hi2                                         (rtx, rtx);
extern rtx        gen_negv8hi2                                         (rtx, rtx);
extern rtx        gen_absv2si2                                         (rtx, rtx);
extern rtx        gen_negv2si2                                         (rtx, rtx);
extern rtx        gen_absv4si2                                         (rtx, rtx);
extern rtx        gen_negv4si2                                         (rtx, rtx);
extern rtx        gen_absv2sf2                                         (rtx, rtx);
extern rtx        gen_negv2sf2                                         (rtx, rtx);
extern rtx        gen_absv4sf2                                         (rtx, rtx);
extern rtx        gen_negv4sf2                                         (rtx, rtx);
extern rtx        gen_absv8hf2                                         (rtx, rtx);
extern rtx        gen_negv8hf2                                         (rtx, rtx);
extern rtx        gen_absv4hf2                                         (rtx, rtx);
extern rtx        gen_negv4hf2                                         (rtx, rtx);
extern rtx        gen_cadd90v4hf3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v4hf3                                     (rtx, rtx, rtx);
extern rtx        gen_cadd90v8hf3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v8hf3                                     (rtx, rtx, rtx);
extern rtx        gen_cadd90v2sf3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v2sf3                                     (rtx, rtx, rtx);
extern rtx        gen_cadd90v4sf3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v4sf3                                     (rtx, rtx, rtx);
extern rtx        gen_cmulv8hf3                                        (rtx, rtx, rtx);
extern rtx        gen_cmul_conjv8hf3                                   (rtx, rtx, rtx);
extern rtx        gen_cmulv4sf3                                        (rtx, rtx, rtx);
extern rtx        gen_cmul_conjv4sf3                                   (rtx, rtx, rtx);
extern rtx        gen_arm_vcmla0v4hf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla90v4hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla180v4hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla270v4hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla0v8hf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla90v8hf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla180v8hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla270v8hf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla0v2sf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla90v2sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla180v2sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla270v2sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla0v4sf                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla90v4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla180v4sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_vcmla270v4sf                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlav4hf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmla_conjv4hf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlsv4hf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmls_conjv4hf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlav8hf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmla_conjv8hf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlsv8hf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmls_conjv8hf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlav2sf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmla_conjv2sf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlsv2sf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmls_conjv2sf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlav4sf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmla_conjv4sf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_cmlsv4sf4                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_cmls_conjv4sf4                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_movmisalignv8qi                                  (rtx, rtx);
extern rtx        gen_movmisalignv16qi                                 (rtx, rtx);
extern rtx        gen_movmisalignv4hi                                  (rtx, rtx);
extern rtx        gen_movmisalignv8hi                                  (rtx, rtx);
extern rtx        gen_movmisalignv2si                                  (rtx, rtx);
extern rtx        gen_movmisalignv4si                                  (rtx, rtx);
extern rtx        gen_movmisalignv4hf                                  (rtx, rtx);
extern rtx        gen_movmisalignv8hf                                  (rtx, rtx);
extern rtx        gen_movmisalignv2sf                                  (rtx, rtx);
extern rtx        gen_movmisalignv4sf                                  (rtx, rtx);
extern rtx        gen_movmisalignv2di                                  (rtx, rtx);
extern rtx        gen_vashlv8qi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashlv16qi3                                      (rtx, rtx, rtx);
extern rtx        gen_vashlv4hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashlv8hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashlv2si3                                       (rtx, rtx, rtx);
extern rtx        gen_vashlv4si3                                       (rtx, rtx, rtx);
extern rtx        gen_vashrv8qi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashrv16qi3                                      (rtx, rtx, rtx);
extern rtx        gen_vashrv4hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vashrv2si3                                       (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3                                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv8qi3                                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv16qi3                                      (rtx, rtx, rtx);
extern rtx        gen_vlshrv4hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3                                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv2si3                                       (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3                                       (rtx, rtx, rtx);
extern rtx        gen_vec_load_lanesoiv16qi                            (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv8hi                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv8hf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4si                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4sf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesv2x16qiv16qi                       (rtx, rtx);
extern rtx        gen_vec_load_lanesv2x8hiv8hi                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv2x4siv4si                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv2x8hfv8hf                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv2x4sfv4sf                         (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv16qi                           (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv8hi                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv8hf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4si                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4sf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesv2x16qiv16qi                      (rtx, rtx);
extern rtx        gen_vec_store_lanesv2x8hiv8hi                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv2x4siv4si                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv2x8hfv8hf                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv2x4sfv4sf                        (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv16qi                            (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv8hi                             (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv8hf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv4si                             (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv4sf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesv4x16qiv16qi                       (rtx, rtx);
extern rtx        gen_vec_load_lanesv4x8hiv8hi                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv4x4siv4si                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv4x8hfv8hf                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv4x4sfv4sf                         (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv16qi                           (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv8hi                            (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv8hf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv4si                            (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv4sf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesv4x16qiv16qi                      (rtx, rtx);
extern rtx        gen_vec_store_lanesv4x8hiv8hi                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv4x4siv4si                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv4x8hfv8hf                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv4x4sfv4sf                        (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v16qi                            (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v8hi                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4si                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4sf                             (rtx, rtx);
extern rtx        gen_avgv16qi3_floor                                  (rtx, rtx, rtx);
extern rtx        gen_avgv8hi3_floor                                   (rtx, rtx, rtx);
extern rtx        gen_avgv4si3_floor                                   (rtx, rtx, rtx);
extern rtx        gen_uavgv16qi3_floor                                 (rtx, rtx, rtx);
extern rtx        gen_uavgv8hi3_floor                                  (rtx, rtx, rtx);
extern rtx        gen_uavgv4si3_floor                                  (rtx, rtx, rtx);
extern rtx        gen_avgv16qi3_ceil                                   (rtx, rtx, rtx);
extern rtx        gen_avgv8hi3_ceil                                    (rtx, rtx, rtx);
extern rtx        gen_avgv4si3_ceil                                    (rtx, rtx, rtx);
extern rtx        gen_uavgv16qi3_ceil                                  (rtx, rtx, rtx);
extern rtx        gen_uavgv8hi3_ceil                                   (rtx, rtx, rtx);
extern rtx        gen_uavgv4si3_ceil                                   (rtx, rtx, rtx);
extern rtx        gen_clzv8qi2                                         (rtx, rtx);
extern rtx        gen_clzv16qi2                                        (rtx, rtx);
extern rtx        gen_clzv4hi2                                         (rtx, rtx);
extern rtx        gen_clzv8hi2                                         (rtx, rtx);
extern rtx        gen_clzv2si2                                         (rtx, rtx);
extern rtx        gen_clzv4si2                                         (rtx, rtx);
extern rtx        gen_vec_initv8qiqi                                   (rtx, rtx);
extern rtx        gen_vec_initv16qiqi                                  (rtx, rtx);
extern rtx        gen_vec_initv4hihi                                   (rtx, rtx);
extern rtx        gen_vec_initv8hihi                                   (rtx, rtx);
extern rtx        gen_vec_initv2sisi                                   (rtx, rtx);
extern rtx        gen_vec_initv4sisi                                   (rtx, rtx);
extern rtx        gen_vec_initv4hfhf                                   (rtx, rtx);
extern rtx        gen_vec_initv8hfhf                                   (rtx, rtx);
extern rtx        gen_vec_initv4bfbf                                   (rtx, rtx);
extern rtx        gen_vec_initv8bfbf                                   (rtx, rtx);
extern rtx        gen_vec_initv2sfsf                                   (rtx, rtx);
extern rtx        gen_vec_initv4sfsf                                   (rtx, rtx);
extern rtx        gen_vec_initdidi                                     (rtx, rtx);
extern rtx        gen_vec_initv2didi                                   (rtx, rtx);
extern rtx        gen_neon_vabshf                                      (rtx, rtx);
extern rtx        gen_neon_vfmahf                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmshf                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcvths_nhf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcvthu_nhf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcvths_nsi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vcvthu_nsi                                  (rtx, rtx, rtx);
extern rtx        gen_thumb_movhi_clobber                              (rtx, rtx, rtx);
extern rtx        gen_cbranchqi4                                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_neg_late                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi_eq0_thumb1                              (rtx, rtx);
extern rtx        gen_cstoresi_ne0_thumb1                              (rtx, rtx);
extern rtx        gen_thumb1_casesi_internal_pic                       (rtx, rtx, rtx, rtx);
extern rtx        gen_tablejump                                        (rtx, rtx);
extern rtx        gen_thumb2_casesi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_thumb2_casesi_internal_pic                       (rtx, rtx, rtx, rtx);
extern rtx        gen_doloop_end                                       (rtx, rtx);
extern rtx        gen_doloop_begin                                     (rtx, rtx);
extern rtx        gen_movti                                            (rtx, rtx);
extern rtx        gen_movei                                            (rtx, rtx);
extern rtx        gen_movoi                                            (rtx, rtx);
extern rtx        gen_movci                                            (rtx, rtx);
extern rtx        gen_movxi                                            (rtx, rtx);
extern rtx        gen_movv2x16qi                                       (rtx, rtx);
extern rtx        gen_movv2x8hi                                        (rtx, rtx);
extern rtx        gen_movv2x4si                                        (rtx, rtx);
extern rtx        gen_movv2x8hf                                        (rtx, rtx);
extern rtx        gen_movv2x4sf                                        (rtx, rtx);
extern rtx        gen_movv4x16qi                                       (rtx, rtx);
extern rtx        gen_movv4x8hi                                        (rtx, rtx);
extern rtx        gen_movv4x4si                                        (rtx, rtx);
extern rtx        gen_movv4x8hf                                        (rtx, rtx);
extern rtx        gen_movv4x4sf                                        (rtx, rtx);
extern rtx        gen_movv4hf                                          (rtx, rtx);
extern rtx        gen_movv4bf                                          (rtx, rtx);
extern rtx        gen_movv8bf                                          (rtx, rtx);
extern rtx        gen_cbranchv8qi4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv16qi4                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv4hi4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv8hi4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv2si4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv4si4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchv2di4                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_divv2sf3                                         (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                                         (rtx, rtx, rtx);
extern rtx        gen_ceilv2sf2                                        (rtx, rtx);
extern rtx        gen_btruncv2sf2                                      (rtx, rtx);
extern rtx        gen_floorv2sf2                                       (rtx, rtx);
extern rtx        gen_rintv2sf2                                        (rtx, rtx);
extern rtx        gen_roundv2sf2                                       (rtx, rtx);
extern rtx        gen_roundevenv2sf2                                   (rtx, rtx);
extern rtx        gen_ceilv4sf2                                        (rtx, rtx);
extern rtx        gen_btruncv4sf2                                      (rtx, rtx);
extern rtx        gen_floorv4sf2                                       (rtx, rtx);
extern rtx        gen_rintv4sf2                                        (rtx, rtx);
extern rtx        gen_roundv4sf2                                       (rtx, rtx);
extern rtx        gen_roundevenv4sf2                                   (rtx, rtx);
extern rtx        gen_lceilv2sfv2si2                                   (rtx, rtx);
extern rtx        gen_lfloorv2sfv2si2                                  (rtx, rtx);
extern rtx        gen_lroundv2sfv2si2                                  (rtx, rtx);
extern rtx        gen_lceiluv2sfv2si2                                  (rtx, rtx);
extern rtx        gen_lflooruv2sfv2si2                                 (rtx, rtx);
extern rtx        gen_lrounduv2sfv2si2                                 (rtx, rtx);
extern rtx        gen_lceilv4sfv4si2                                   (rtx, rtx);
extern rtx        gen_lfloorv4sfv4si2                                  (rtx, rtx);
extern rtx        gen_lroundv4sfv4si2                                  (rtx, rtx);
extern rtx        gen_lceiluv4sfv4si2                                  (rtx, rtx);
extern rtx        gen_lflooruv4sfv4si2                                 (rtx, rtx);
extern rtx        gen_lrounduv4sfv4si2                                 (rtx, rtx);
extern rtx        gen_neon_vabsv8hf                                    (rtx, rtx);
extern rtx        gen_neon_vnegv8hf                                    (rtx, rtx);
extern rtx        gen_neon_vabsv4hf                                    (rtx, rtx);
extern rtx        gen_neon_vnegv4hf                                    (rtx, rtx);
extern rtx        gen_widen_ssumv16qi3                                 (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv8hi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_ssumv4si3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_usumv16qi3                                 (rtx, rtx, rtx);
extern rtx        gen_widen_usumv8hi3                                  (rtx, rtx, rtx);
extern rtx        gen_widen_usumv4si3                                  (rtx, rtx, rtx);
extern rtx        gen_move_hi_quad_v2di                                (rtx, rtx);
extern rtx        gen_move_hi_quad_v2df                                (rtx, rtx);
extern rtx        gen_move_hi_quad_v16qi                               (rtx, rtx);
extern rtx        gen_move_hi_quad_v8hi                                (rtx, rtx);
extern rtx        gen_move_hi_quad_v4si                                (rtx, rtx);
extern rtx        gen_move_hi_quad_v4sf                                (rtx, rtx);
extern rtx        gen_move_lo_quad_v2di                                (rtx, rtx);
extern rtx        gen_move_lo_quad_v2df                                (rtx, rtx);
extern rtx        gen_move_lo_quad_v16qi                               (rtx, rtx);
extern rtx        gen_move_lo_quad_v8hi                                (rtx, rtx);
extern rtx        gen_move_lo_quad_v4si                                (rtx, rtx);
extern rtx        gen_move_lo_quad_v4sf                                (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v8qi                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v4hi                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2si                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2sf                             (rtx, rtx);
extern rtx        gen_reduc_plus_scal_v2di                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v8qi                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v4hi                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v2si                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v2sf                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v16qi                            (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v8hi                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v4si                             (rtx, rtx);
extern rtx        gen_reduc_smin_scal_v4sf                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v8qi                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v4hi                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v2si                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v2sf                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v16qi                            (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v8hi                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v4si                             (rtx, rtx);
extern rtx        gen_reduc_smax_scal_v4sf                             (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v8qi                             (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v4hi                             (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v2si                             (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v16qi                            (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v8hi                             (rtx, rtx);
extern rtx        gen_reduc_umin_scal_v4si                             (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v8qi                             (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v4hi                             (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v2si                             (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v16qi                            (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v8hi                             (rtx, rtx);
extern rtx        gen_reduc_umax_scal_v4si                             (rtx, rtx);
extern rtx        gen_vec_cmpv8qiv8qi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv16qiv16qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4hiv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv8hiv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv2siv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4siv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv2sfv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4sfv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv8hfv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4hfv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv8qiv8qi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv16qiv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv4hiv4hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv8hiv8hi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv2siv2si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv4siv4si                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8qiv8qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v16qiv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4hiv4hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8hiv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2siv2si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4siv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2sfv2si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4sfv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8hfv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4hfv4hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vaddv2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vaddv4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vaddv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vaddv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vsubv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vsubv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vmlav8qi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav16qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav8hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav2si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlav4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmav2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmav4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmav8hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmav4hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsv2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsv4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsv8hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsv4hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lowv2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_highv2sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lowv2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_highv2sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lowv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_highv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lowv4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_highv4sf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_lowv2sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_highv2sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_lowv2sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_highv2sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_lowv4sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_highv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_lowv4sf                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_highv4sf                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_lowv8hfv2sf                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_highv8hfv2sf                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_lowv8hfv2sf                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_highv8hfv2sf                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_lowv4hfv4sf                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmal_lane_highv4hfv4sf                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_lowv4hfv4sf                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmsl_lane_highv4hfv4sf                     (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv8qi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv16qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv8hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv2si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsv4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vsubv2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vsubv4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8qi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8qi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8qi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8qi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8qi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev16qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vclev16qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv16qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8hi                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv2si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv2si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev2si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev2si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv2si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4si                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv2sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4sf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv8hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vceqv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgtv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcgev4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vclev4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcltv4hf                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev8hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagtv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcagev4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcaltv4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vcalev4hf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vceqzv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vcgtzv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vcgezv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vclezv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vcltzv8hf                                   (rtx, rtx);
extern rtx        gen_neon_vceqzv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vcgtzv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vcgezv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vclezv4hf                                   (rtx, rtx);
extern rtx        gen_neon_vcltzv4hf                                   (rtx, rtx);
extern rtx        gen_ssadv16qi                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_usadv16qi                                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vpaddv8qi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vpaddv4hi                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vpaddv2si                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vpaddv2sf                                   (rtx, rtx, rtx);
extern rtx        gen_neon_vabsv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vabsv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vabsv4hi                                    (rtx, rtx);
extern rtx        gen_neon_vabsv8hi                                    (rtx, rtx);
extern rtx        gen_neon_vabsv2si                                    (rtx, rtx);
extern rtx        gen_neon_vabsv4si                                    (rtx, rtx);
extern rtx        gen_neon_vabsv2sf                                    (rtx, rtx);
extern rtx        gen_neon_vabsv4sf                                    (rtx, rtx);
extern rtx        gen_neon_vnegv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vnegv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vnegv4hi                                    (rtx, rtx);
extern rtx        gen_neon_vnegv8hi                                    (rtx, rtx);
extern rtx        gen_neon_vnegv2si                                    (rtx, rtx);
extern rtx        gen_neon_vnegv4si                                    (rtx, rtx);
extern rtx        gen_neon_vnegv2sf                                    (rtx, rtx);
extern rtx        gen_neon_vnegv4sf                                    (rtx, rtx);
extern rtx        gen_cmulv2sf3                                        (rtx, rtx, rtx);
extern rtx        gen_cmul_conjv2sf3                                   (rtx, rtx, rtx);
extern rtx        gen_cmulv4hf3                                        (rtx, rtx, rtx);
extern rtx        gen_cmul_conjv4hf3                                   (rtx, rtx, rtx);
extern rtx        gen_neon_sdotv2siv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udotv2siv8qi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_sdotv4siv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_udotv4siv16qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_usdot_prodv2siv8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_usdot_prodv4siv16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_copysignv2sf3                                    (rtx, rtx, rtx);
extern rtx        gen_copysignv4sf3                                    (rtx, rtx, rtx);
extern rtx        gen_neon_vcntv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vcntv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vmvnv8qi                                    (rtx, rtx);
extern rtx        gen_neon_vmvnv16qi                                   (rtx, rtx);
extern rtx        gen_neon_vmvnv4hi                                    (rtx, rtx);
extern rtx        gen_neon_vmvnv8hi                                    (rtx, rtx);
extern rtx        gen_neon_vmvnv2si                                    (rtx, rtx);
extern rtx        gen_neon_vmvnv4si                                    (rtx, rtx);
extern rtx        gen_neon_vget_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev16qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv8qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv16qi                             (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv4hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv8hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv2si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_laneuv4si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanedi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vget_lanev2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev8qi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev16qi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev8hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev4si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev4hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev8hf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev2sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev4sf                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanev2di                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vset_lanedi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vcreatev8qi                                 (rtx, rtx);
extern rtx        gen_neon_vcreatev4hi                                 (rtx, rtx);
extern rtx        gen_neon_vcreatev2si                                 (rtx, rtx);
extern rtx        gen_neon_vcreatev2sf                                 (rtx, rtx);
extern rtx        gen_neon_vcreatedi                                   (rtx, rtx);
extern rtx        gen_neon_vdup_ndi                                    (rtx, rtx);
extern rtx        gen_neon_vdup_lanev8qi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev16qi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev2sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4sf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4hf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev4bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev8bf                               (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanedi                                 (rtx, rtx, rtx);
extern rtx        gen_neon_vdup_lanev2di                               (rtx, rtx, rtx);
extern rtx        gen_neon_vget_highv16qi                              (rtx, rtx);
extern rtx        gen_neon_vget_highv8hi                               (rtx, rtx);
extern rtx        gen_neon_vget_highv8hf                               (rtx, rtx);
extern rtx        gen_neon_vget_highv8bf                               (rtx, rtx);
extern rtx        gen_neon_vget_highv4si                               (rtx, rtx);
extern rtx        gen_neon_vget_highv4sf                               (rtx, rtx);
extern rtx        gen_neon_vget_highv2di                               (rtx, rtx);
extern rtx        gen_neon_vget_lowv16qi                               (rtx, rtx);
extern rtx        gen_neon_vget_lowv8hi                                (rtx, rtx);
extern rtx        gen_neon_vget_lowv8hf                                (rtx, rtx);
extern rtx        gen_neon_vget_lowv8bf                                (rtx, rtx);
extern rtx        gen_neon_vget_lowv4si                                (rtx, rtx);
extern rtx        gen_neon_vget_lowv4sf                                (rtx, rtx);
extern rtx        gen_neon_vget_lowv2di                                (rtx, rtx);
extern rtx        gen_neon_vmul_nv4hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv2si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv2sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv4si                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv4sf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv8hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmul_nv4hf                                  (rtx, rtx, rtx);
extern rtx        gen_neon_vmulls_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vmulls_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vmullu_nv4hi                                (rtx, rtx, rtx);
extern rtx        gen_neon_vmullu_nv2si                                (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmull_nv4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmull_nv2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_nv4hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_nv2si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_nv4hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_nv2si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_nv8hi                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqdmulh_nv4si                               (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_nv8hi                              (rtx, rtx, rtx);
extern rtx        gen_neon_vqrdmulh_nv4si                              (rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv2sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmla_nv4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlals_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlals_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalu_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlalu_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlal_nv4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlal_nv2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv4hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv2si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv2sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv8hi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv4si                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmls_nv4sf                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsls_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlsls_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslu_nv4hi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vmlslu_nv2si                                (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlsl_nv4hi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vqdmlsl_nv2si                               (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8qi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv16qi                                   (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8hi                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4si                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8hf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4bf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv8bf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv4sf                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbsldi                                      (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vbslv2di                                    (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv8qi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv16qi_internal                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv4hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv8hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv2si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv4si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv2sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv4sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv8hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vtrnv4hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv8qi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv16qi_internal                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv4hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv8hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv2si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv4si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv2sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv4sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv8hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vzipv4hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv8qi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv16qi_internal                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv4hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv8hi_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv2si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv4si_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv2sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv4sf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv8hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vuzpv4hf_internal                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_load_lanesv8qiv8qi                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv16qiv16qi                         (rtx, rtx);
extern rtx        gen_vec_load_lanesv4hiv4hi                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv8hiv8hi                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv2siv2si                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv4siv4si                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv4hfv4hf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv8hfv8hf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv4bfv4bf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv8bfv8bf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv2sfv2sf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesv4sfv4sf                           (rtx, rtx);
extern rtx        gen_vec_load_lanesdidi                               (rtx, rtx);
extern rtx        gen_vec_load_lanesv2div2di                           (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v8bf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v4si                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x3v2di                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v16qi                               (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v8hi                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v8hf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v8bf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v4si                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v4sf                                (rtx, rtx);
extern rtx        gen_neon_vld1q_x4v2di                                (rtx, rtx);
extern rtx        gen_neon_vld1_dupdi                                  (rtx, rtx);
extern rtx        gen_vec_store_lanesv8qiv8qi                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv16qiv16qi                        (rtx, rtx);
extern rtx        gen_vec_store_lanesv4hiv4hi                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv8hiv8hi                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv2siv2si                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv4siv4si                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv4hfv4hf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv8hfv8hf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv4bfv4bf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv8bfv8bf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv2sfv2sf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesv4sfv4sf                          (rtx, rtx);
extern rtx        gen_vec_store_lanesdidi                              (rtx, rtx);
extern rtx        gen_vec_store_lanesv2div2di                          (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v8qi                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v4hi                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v2si                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v4si                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v4hf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v4bf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v2sf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x3di                                  (rtx, rtx);
extern rtx        gen_neon_vst1q_x3v2di                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v16qi                               (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v8hi                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v8hf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v8bf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v4si                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v4sf                                (rtx, rtx);
extern rtx        gen_neon_vst1q_x4v2di                                (rtx, rtx);
extern rtx        gen_vec_load_lanestiv8qi                             (rtx, rtx);
extern rtx        gen_vec_load_lanestiv4hi                             (rtx, rtx);
extern rtx        gen_vec_load_lanestiv4hf                             (rtx, rtx);
extern rtx        gen_vec_load_lanestiv4bf                             (rtx, rtx);
extern rtx        gen_vec_load_lanestiv2si                             (rtx, rtx);
extern rtx        gen_vec_load_lanestiv2sf                             (rtx, rtx);
extern rtx        gen_vec_load_lanestidi                               (rtx, rtx);
extern rtx        gen_vec_store_lanestiv8qi                            (rtx, rtx);
extern rtx        gen_vec_store_lanestiv4hi                            (rtx, rtx);
extern rtx        gen_vec_store_lanestiv4hf                            (rtx, rtx);
extern rtx        gen_vec_store_lanestiv4bf                            (rtx, rtx);
extern rtx        gen_vec_store_lanestiv2si                            (rtx, rtx);
extern rtx        gen_vec_store_lanestiv2sf                            (rtx, rtx);
extern rtx        gen_vec_store_lanestidi                              (rtx, rtx);
extern rtx        gen_vec_load_laneseiv8qi                             (rtx, rtx);
extern rtx        gen_vec_load_laneseiv4hi                             (rtx, rtx);
extern rtx        gen_vec_load_laneseiv4hf                             (rtx, rtx);
extern rtx        gen_vec_load_laneseiv4bf                             (rtx, rtx);
extern rtx        gen_vec_load_laneseiv2si                             (rtx, rtx);
extern rtx        gen_vec_load_laneseiv2sf                             (rtx, rtx);
extern rtx        gen_vec_load_laneseidi                               (rtx, rtx);
extern rtx        gen_vec_load_lanesciv16qi                            (rtx, rtx);
extern rtx        gen_vec_load_lanesciv8hi                             (rtx, rtx);
extern rtx        gen_vec_load_lanesciv8hf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesciv4si                             (rtx, rtx);
extern rtx        gen_vec_load_lanesciv4sf                             (rtx, rtx);
extern rtx        gen_neon_vld3v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vld3v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vld3v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vld3v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vld3v4si                                    (rtx, rtx);
extern rtx        gen_neon_vld3v4sf                                    (rtx, rtx);
extern rtx        gen_vec_store_laneseiv8qi                            (rtx, rtx);
extern rtx        gen_vec_store_laneseiv4hi                            (rtx, rtx);
extern rtx        gen_vec_store_laneseiv4hf                            (rtx, rtx);
extern rtx        gen_vec_store_laneseiv4bf                            (rtx, rtx);
extern rtx        gen_vec_store_laneseiv2si                            (rtx, rtx);
extern rtx        gen_vec_store_laneseiv2sf                            (rtx, rtx);
extern rtx        gen_vec_store_laneseidi                              (rtx, rtx);
extern rtx        gen_vec_store_lanesciv16qi                           (rtx, rtx);
extern rtx        gen_vec_store_lanesciv8hi                            (rtx, rtx);
extern rtx        gen_vec_store_lanesciv8hf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesciv4si                            (rtx, rtx);
extern rtx        gen_vec_store_lanesciv4sf                            (rtx, rtx);
extern rtx        gen_neon_vst3v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vst3v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vst3v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vst3v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vst3v4si                                    (rtx, rtx);
extern rtx        gen_neon_vst3v4sf                                    (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv8qi                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4hi                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4hf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4bf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv2si                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv2sf                             (rtx, rtx);
extern rtx        gen_vec_load_lanesoidi                               (rtx, rtx);
extern rtx        gen_neon_vld4v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vld4v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vld4v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vld4v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vld4v4si                                    (rtx, rtx);
extern rtx        gen_neon_vld4v4sf                                    (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv8qi                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4hi                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4hf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4bf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv2si                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv2sf                            (rtx, rtx);
extern rtx        gen_vec_store_lanesoidi                              (rtx, rtx);
extern rtx        gen_neon_vst4v16qi                                   (rtx, rtx);
extern rtx        gen_neon_vst4v8hi                                    (rtx, rtx);
extern rtx        gen_neon_vst4v8hf                                    (rtx, rtx);
extern rtx        gen_neon_vst4v8bf                                    (rtx, rtx);
extern rtx        gen_neon_vst4v4si                                    (rtx, rtx);
extern rtx        gen_neon_vst4v4sf                                    (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v16qi                             (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v16qi                             (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8hi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8hi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4si                              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v4si                              (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v16qi                             (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v16qi                             (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8hi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8hi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4si                              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v4si                              (rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8qi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8qi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4hi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v4hi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v2si                              (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v2si                              (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8qi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8qi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4hi                              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v4hi                              (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v2si                              (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v2si                              (rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8qi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8qi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v2si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v2si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8qi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8qi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4hi                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v2si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v2si                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v8qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v8qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v4hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v4hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_hi_v2si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_hi_v2si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v8qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v8qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v4hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v4hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_sshiftl_lo_v2si                        (rtx, rtx, rtx);
extern rtx        gen_vec_widen_ushiftl_lo_v2si                        (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4hi                              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2si                              (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_di                                (rtx, rtx, rtx);
extern rtx        gen_neon_vbfcvtbf                                    (rtx, rtx);
extern rtx        gen_neon_vfmab_laneqv8bf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_neon_vfmat_laneqv8bf                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_aesd                                      (rtx, rtx, rtx);
extern rtx        gen_crypto_aese                                      (rtx, rtx, rtx);
extern rtx        gen_crypto_sha1h                                     (rtx, rtx);
extern rtx        gen_crypto_sha1c                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha1m                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_crypto_sha1p                                     (rtx, rtx, rtx, rtx);
extern rtx        gen_memory_barrier                                   (void);
extern rtx        gen_atomic_loadqi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_loadhi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_loadsi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_storeqi                                   (rtx, rtx, rtx);
extern rtx        gen_atomic_storehi                                   (rtx, rtx, rtx);
extern rtx        gen_atomic_storesi                                   (rtx, rtx, rtx);
extern rtx        gen_atomic_loaddi                                    (rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapqi                        (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi                        (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi                        (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi                        (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_addv4qq3                                         (rtx, rtx, rtx);
extern rtx        gen_addv2hq3                                         (rtx, rtx, rtx);
extern rtx        gen_addv2ha3                                         (rtx, rtx, rtx);
extern rtx        gen_ssaddv4qq3                                       (rtx, rtx, rtx);
extern rtx        gen_ssaddv2hq3                                       (rtx, rtx, rtx);
extern rtx        gen_ssaddqq3                                         (rtx, rtx, rtx);
extern rtx        gen_ssaddhq3                                         (rtx, rtx, rtx);
extern rtx        gen_ssaddv2ha3                                       (rtx, rtx, rtx);
extern rtx        gen_ssaddha3                                         (rtx, rtx, rtx);
extern rtx        gen_ssaddsq3                                         (rtx, rtx, rtx);
extern rtx        gen_ssaddsa3                                         (rtx, rtx, rtx);
extern rtx        gen_subv4qq3                                         (rtx, rtx, rtx);
extern rtx        gen_subv2hq3                                         (rtx, rtx, rtx);
extern rtx        gen_subv2ha3                                         (rtx, rtx, rtx);
extern rtx        gen_sssubv4qq3                                       (rtx, rtx, rtx);
extern rtx        gen_sssubv2hq3                                       (rtx, rtx, rtx);
extern rtx        gen_sssubqq3                                         (rtx, rtx, rtx);
extern rtx        gen_sssubhq3                                         (rtx, rtx, rtx);
extern rtx        gen_sssubv2ha3                                       (rtx, rtx, rtx);
extern rtx        gen_sssubha3                                         (rtx, rtx, rtx);
extern rtx        gen_sssubsq3                                         (rtx, rtx, rtx);
extern rtx        gen_sssubsa3                                         (rtx, rtx, rtx);
extern rtx        gen_mulqq3                                           (rtx, rtx, rtx);
extern rtx        gen_mulhq3                                           (rtx, rtx, rtx);
extern rtx        gen_mulsq3                                           (rtx, rtx, rtx);
extern rtx        gen_mulsa3                                           (rtx, rtx, rtx);
extern rtx        gen_mulusa3                                          (rtx, rtx, rtx);
extern rtx        gen_ssmulsa3                                         (rtx, rtx, rtx);
extern rtx        gen_usmulusa3                                        (rtx, rtx, rtx);
extern rtx        gen_mulha3                                           (rtx, rtx, rtx);
extern rtx        gen_muluha3                                          (rtx, rtx, rtx);
extern rtx        gen_ssmulha3                                         (rtx, rtx, rtx);
extern rtx        gen_usmuluha3                                        (rtx, rtx, rtx);
extern rtx        gen_mve_vmvnq_sv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vmvnq_sv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vmvnq_sv4si                                  (rtx, rtx);
extern rtx        gen_mve_vclzq_uv16qi                                 (rtx, rtx);
extern rtx        gen_mve_vclzq_uv8hi                                  (rtx, rtx);
extern rtx        gen_mve_vclzq_uv4si                                  (rtx, rtx);
extern rtx        gen_mve_vandq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vandq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vbicq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_cadd90v16qi3                                     (rtx, rtx, rtx);
extern rtx        gen_cadd270v16qi3                                    (rtx, rtx, rtx);
extern rtx        gen_cadd90v8hi3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v8hi3                                     (rtx, rtx, rtx);
extern rtx        gen_cadd90v4si3                                      (rtx, rtx, rtx);
extern rtx        gen_cadd270v4si3                                     (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_sv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_sv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_veorq_sv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vornq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_uv16qi                                 (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_uv8hi                                  (rtx, rtx, rtx);
extern rtx        gen_mve_vorrq_uv4si                                  (rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_n_uv16qi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_n_uv8hi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_n_uv4si                              (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv16qi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv8hi                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_wb_uv4si                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_n_uv16qi                           (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_n_uv8hi                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_n_uv4si                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv16qi                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv8hi                           (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mve_viwdupq_m_wb_uv4si                           (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movv16bi                                         (rtx, rtx);
extern rtx        gen_movv8bi                                          (rtx, rtx);
extern rtx        gen_movv4bi                                          (rtx, rtx);
extern rtx        gen_movv2qi                                          (rtx, rtx);
extern rtx        gen_vec_cmpv16qiv16bi                                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv8hiv8bi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4siv4bi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv8hfv8bi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4sfv4bi                                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv16qiv16bi                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv8hiv8bi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv4siv4bi                                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v16qiv16bi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8hiv8bi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4siv4bi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8hfv8bi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4sfv4bi                              (rtx, rtx, rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv16qi                         (rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv8hi                          (rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv4si                          (rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv2di                          (rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv8hf                          (rtx, rtx);
extern rtx        gen_arm_mve_reinterpretv4sf                          (rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
