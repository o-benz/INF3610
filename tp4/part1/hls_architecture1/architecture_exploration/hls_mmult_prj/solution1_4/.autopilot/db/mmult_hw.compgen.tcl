# This script segment is generated automatically by AutoPilot

set id 1
set name mmult_hw_fadd_32nbkb
set corename simcore_fadd
set op fadd
set stage_num 5
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fadd] == "ap_gen_simcore_fadd"} {
eval "ap_gen_simcore_fadd { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fadd, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fadd
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 42
set name mmult_hw_fmul_32ncud
set corename simcore_fmul
set op fmul
set stage_num 4
set max_latency -1
set registered_input 1
set impl_style max_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fmul] == "ap_gen_simcore_fmul"} {
eval "ap_gen_simcore_fmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fmul
set corename FMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 85 \
    name a_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_0 \
    op interface \
    ports { a_0_address0 { O 5 vector } a_0_ce0 { O 1 bit } a_0_q0 { I 32 vector } a_0_address1 { O 5 vector } a_0_ce1 { O 1 bit } a_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 86 \
    name a_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_1 \
    op interface \
    ports { a_1_address0 { O 5 vector } a_1_ce0 { O 1 bit } a_1_q0 { I 32 vector } a_1_address1 { O 5 vector } a_1_ce1 { O 1 bit } a_1_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 87 \
    name a_2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_2 \
    op interface \
    ports { a_2_address0 { O 5 vector } a_2_ce0 { O 1 bit } a_2_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 88 \
    name a_3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_3 \
    op interface \
    ports { a_3_address0 { O 5 vector } a_3_ce0 { O 1 bit } a_3_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_3'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 89 \
    name a_4 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_4 \
    op interface \
    ports { a_4_address0 { O 5 vector } a_4_ce0 { O 1 bit } a_4_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_4'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 90 \
    name a_5 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_5 \
    op interface \
    ports { a_5_address0 { O 5 vector } a_5_ce0 { O 1 bit } a_5_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_5'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 91 \
    name a_6 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_6 \
    op interface \
    ports { a_6_address0 { O 5 vector } a_6_ce0 { O 1 bit } a_6_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_6'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 92 \
    name a_7 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_7 \
    op interface \
    ports { a_7_address0 { O 5 vector } a_7_ce0 { O 1 bit } a_7_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_7'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 93 \
    name a_8 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_8 \
    op interface \
    ports { a_8_address0 { O 5 vector } a_8_ce0 { O 1 bit } a_8_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_8'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 94 \
    name a_9 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_9 \
    op interface \
    ports { a_9_address0 { O 5 vector } a_9_ce0 { O 1 bit } a_9_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_9'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 95 \
    name a_10 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_10 \
    op interface \
    ports { a_10_address0 { O 5 vector } a_10_ce0 { O 1 bit } a_10_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_10'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 96 \
    name a_11 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_11 \
    op interface \
    ports { a_11_address0 { O 5 vector } a_11_ce0 { O 1 bit } a_11_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_11'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 97 \
    name a_12 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_12 \
    op interface \
    ports { a_12_address0 { O 5 vector } a_12_ce0 { O 1 bit } a_12_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_12'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 98 \
    name a_13 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_13 \
    op interface \
    ports { a_13_address0 { O 5 vector } a_13_ce0 { O 1 bit } a_13_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_13'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 99 \
    name a_14 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_14 \
    op interface \
    ports { a_14_address0 { O 5 vector } a_14_ce0 { O 1 bit } a_14_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_14'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 100 \
    name a_15 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_15 \
    op interface \
    ports { a_15_address0 { O 5 vector } a_15_ce0 { O 1 bit } a_15_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_15'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 101 \
    name a_16 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_16 \
    op interface \
    ports { a_16_address0 { O 5 vector } a_16_ce0 { O 1 bit } a_16_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_16'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 102 \
    name a_17 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_17 \
    op interface \
    ports { a_17_address0 { O 5 vector } a_17_ce0 { O 1 bit } a_17_q0 { I 32 vector } a_17_address1 { O 5 vector } a_17_ce1 { O 1 bit } a_17_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_17'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 103 \
    name a_18 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_18 \
    op interface \
    ports { a_18_address0 { O 5 vector } a_18_ce0 { O 1 bit } a_18_q0 { I 32 vector } a_18_address1 { O 5 vector } a_18_ce1 { O 1 bit } a_18_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_18'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 104 \
    name a_19 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_19 \
    op interface \
    ports { a_19_address0 { O 5 vector } a_19_ce0 { O 1 bit } a_19_q0 { I 32 vector } a_19_address1 { O 5 vector } a_19_ce1 { O 1 bit } a_19_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_19'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 105 \
    name a_20 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename a_20 \
    op interface \
    ports { a_20_address0 { O 5 vector } a_20_ce0 { O 1 bit } a_20_q0 { I 32 vector } a_20_address1 { O 5 vector } a_20_ce1 { O 1 bit } a_20_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'a_20'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 547 \
    name out_r \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename out_r \
    op interface \
    ports { out_r_address0 { O 9 vector } out_r_ce0 { O 1 bit } out_r_we0 { O 1 bit } out_r_d0 { O 32 vector } out_r_address1 { O 9 vector } out_r_ce1 { O 1 bit } out_r_we1 { O 1 bit } out_r_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'out_r'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 106 \
    name b_0_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_0 \
    op interface \
    ports { b_0_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 107 \
    name b_0_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_1 \
    op interface \
    ports { b_0_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 108 \
    name b_0_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_2 \
    op interface \
    ports { b_0_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 109 \
    name b_0_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_3 \
    op interface \
    ports { b_0_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 110 \
    name b_0_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_4 \
    op interface \
    ports { b_0_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 111 \
    name b_0_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_5 \
    op interface \
    ports { b_0_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 112 \
    name b_0_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_6 \
    op interface \
    ports { b_0_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 113 \
    name b_0_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_7 \
    op interface \
    ports { b_0_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 114 \
    name b_0_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_8 \
    op interface \
    ports { b_0_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 115 \
    name b_0_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_9 \
    op interface \
    ports { b_0_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 116 \
    name b_0_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_10 \
    op interface \
    ports { b_0_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 117 \
    name b_0_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_11 \
    op interface \
    ports { b_0_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 118 \
    name b_0_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_12 \
    op interface \
    ports { b_0_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 119 \
    name b_0_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_13 \
    op interface \
    ports { b_0_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 120 \
    name b_0_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_14 \
    op interface \
    ports { b_0_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 121 \
    name b_0_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_15 \
    op interface \
    ports { b_0_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 122 \
    name b_0_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_16 \
    op interface \
    ports { b_0_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 123 \
    name b_0_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_17 \
    op interface \
    ports { b_0_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 124 \
    name b_0_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_18 \
    op interface \
    ports { b_0_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 125 \
    name b_0_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_19 \
    op interface \
    ports { b_0_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 126 \
    name b_0_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_0_20 \
    op interface \
    ports { b_0_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 127 \
    name b_1_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_0 \
    op interface \
    ports { b_1_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 128 \
    name b_1_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_1 \
    op interface \
    ports { b_1_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 129 \
    name b_1_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_2 \
    op interface \
    ports { b_1_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 130 \
    name b_1_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_3 \
    op interface \
    ports { b_1_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 131 \
    name b_1_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_4 \
    op interface \
    ports { b_1_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 132 \
    name b_1_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_5 \
    op interface \
    ports { b_1_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 133 \
    name b_1_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_6 \
    op interface \
    ports { b_1_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 134 \
    name b_1_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_7 \
    op interface \
    ports { b_1_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 135 \
    name b_1_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_8 \
    op interface \
    ports { b_1_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 136 \
    name b_1_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_9 \
    op interface \
    ports { b_1_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 137 \
    name b_1_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_10 \
    op interface \
    ports { b_1_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 138 \
    name b_1_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_11 \
    op interface \
    ports { b_1_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 139 \
    name b_1_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_12 \
    op interface \
    ports { b_1_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 140 \
    name b_1_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_13 \
    op interface \
    ports { b_1_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 141 \
    name b_1_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_14 \
    op interface \
    ports { b_1_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 142 \
    name b_1_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_15 \
    op interface \
    ports { b_1_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 143 \
    name b_1_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_16 \
    op interface \
    ports { b_1_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 144 \
    name b_1_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_17 \
    op interface \
    ports { b_1_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 145 \
    name b_1_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_18 \
    op interface \
    ports { b_1_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 146 \
    name b_1_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_19 \
    op interface \
    ports { b_1_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 147 \
    name b_1_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_1_20 \
    op interface \
    ports { b_1_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 148 \
    name b_2_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_0 \
    op interface \
    ports { b_2_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 149 \
    name b_2_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_1 \
    op interface \
    ports { b_2_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 150 \
    name b_2_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_2 \
    op interface \
    ports { b_2_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 151 \
    name b_2_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_3 \
    op interface \
    ports { b_2_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 152 \
    name b_2_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_4 \
    op interface \
    ports { b_2_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 153 \
    name b_2_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_5 \
    op interface \
    ports { b_2_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 154 \
    name b_2_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_6 \
    op interface \
    ports { b_2_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 155 \
    name b_2_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_7 \
    op interface \
    ports { b_2_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 156 \
    name b_2_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_8 \
    op interface \
    ports { b_2_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 157 \
    name b_2_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_9 \
    op interface \
    ports { b_2_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 158 \
    name b_2_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_10 \
    op interface \
    ports { b_2_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 159 \
    name b_2_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_11 \
    op interface \
    ports { b_2_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 160 \
    name b_2_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_12 \
    op interface \
    ports { b_2_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 161 \
    name b_2_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_13 \
    op interface \
    ports { b_2_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 162 \
    name b_2_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_14 \
    op interface \
    ports { b_2_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 163 \
    name b_2_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_15 \
    op interface \
    ports { b_2_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 164 \
    name b_2_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_16 \
    op interface \
    ports { b_2_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 165 \
    name b_2_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_17 \
    op interface \
    ports { b_2_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 166 \
    name b_2_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_18 \
    op interface \
    ports { b_2_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 167 \
    name b_2_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_19 \
    op interface \
    ports { b_2_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 168 \
    name b_2_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_2_20 \
    op interface \
    ports { b_2_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 169 \
    name b_3_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_0 \
    op interface \
    ports { b_3_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 170 \
    name b_3_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_1 \
    op interface \
    ports { b_3_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 171 \
    name b_3_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_2 \
    op interface \
    ports { b_3_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 172 \
    name b_3_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_3 \
    op interface \
    ports { b_3_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 173 \
    name b_3_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_4 \
    op interface \
    ports { b_3_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 174 \
    name b_3_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_5 \
    op interface \
    ports { b_3_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 175 \
    name b_3_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_6 \
    op interface \
    ports { b_3_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 176 \
    name b_3_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_7 \
    op interface \
    ports { b_3_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 177 \
    name b_3_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_8 \
    op interface \
    ports { b_3_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 178 \
    name b_3_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_9 \
    op interface \
    ports { b_3_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 179 \
    name b_3_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_10 \
    op interface \
    ports { b_3_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 180 \
    name b_3_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_11 \
    op interface \
    ports { b_3_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 181 \
    name b_3_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_12 \
    op interface \
    ports { b_3_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 182 \
    name b_3_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_13 \
    op interface \
    ports { b_3_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 183 \
    name b_3_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_14 \
    op interface \
    ports { b_3_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 184 \
    name b_3_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_15 \
    op interface \
    ports { b_3_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 185 \
    name b_3_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_16 \
    op interface \
    ports { b_3_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 186 \
    name b_3_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_17 \
    op interface \
    ports { b_3_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 187 \
    name b_3_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_18 \
    op interface \
    ports { b_3_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 188 \
    name b_3_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_19 \
    op interface \
    ports { b_3_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 189 \
    name b_3_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_3_20 \
    op interface \
    ports { b_3_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 190 \
    name b_4_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_0 \
    op interface \
    ports { b_4_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 191 \
    name b_4_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_1 \
    op interface \
    ports { b_4_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 192 \
    name b_4_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_2 \
    op interface \
    ports { b_4_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 193 \
    name b_4_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_3 \
    op interface \
    ports { b_4_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 194 \
    name b_4_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_4 \
    op interface \
    ports { b_4_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 195 \
    name b_4_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_5 \
    op interface \
    ports { b_4_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 196 \
    name b_4_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_6 \
    op interface \
    ports { b_4_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 197 \
    name b_4_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_7 \
    op interface \
    ports { b_4_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 198 \
    name b_4_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_8 \
    op interface \
    ports { b_4_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 199 \
    name b_4_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_9 \
    op interface \
    ports { b_4_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 200 \
    name b_4_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_10 \
    op interface \
    ports { b_4_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 201 \
    name b_4_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_11 \
    op interface \
    ports { b_4_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 202 \
    name b_4_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_12 \
    op interface \
    ports { b_4_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 203 \
    name b_4_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_13 \
    op interface \
    ports { b_4_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 204 \
    name b_4_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_14 \
    op interface \
    ports { b_4_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name b_4_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_15 \
    op interface \
    ports { b_4_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name b_4_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_16 \
    op interface \
    ports { b_4_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
    name b_4_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_17 \
    op interface \
    ports { b_4_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 208 \
    name b_4_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_18 \
    op interface \
    ports { b_4_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 209 \
    name b_4_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_19 \
    op interface \
    ports { b_4_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 210 \
    name b_4_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_4_20 \
    op interface \
    ports { b_4_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 211 \
    name b_5_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_0 \
    op interface \
    ports { b_5_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 212 \
    name b_5_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_1 \
    op interface \
    ports { b_5_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 213 \
    name b_5_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_2 \
    op interface \
    ports { b_5_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 214 \
    name b_5_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_3 \
    op interface \
    ports { b_5_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 215 \
    name b_5_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_4 \
    op interface \
    ports { b_5_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 216 \
    name b_5_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_5 \
    op interface \
    ports { b_5_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 217 \
    name b_5_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_6 \
    op interface \
    ports { b_5_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 218 \
    name b_5_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_7 \
    op interface \
    ports { b_5_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 219 \
    name b_5_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_8 \
    op interface \
    ports { b_5_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 220 \
    name b_5_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_9 \
    op interface \
    ports { b_5_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 221 \
    name b_5_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_10 \
    op interface \
    ports { b_5_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 222 \
    name b_5_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_11 \
    op interface \
    ports { b_5_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 223 \
    name b_5_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_12 \
    op interface \
    ports { b_5_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 224 \
    name b_5_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_13 \
    op interface \
    ports { b_5_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name b_5_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_14 \
    op interface \
    ports { b_5_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 226 \
    name b_5_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_15 \
    op interface \
    ports { b_5_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
    name b_5_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_16 \
    op interface \
    ports { b_5_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 228 \
    name b_5_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_17 \
    op interface \
    ports { b_5_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 229 \
    name b_5_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_18 \
    op interface \
    ports { b_5_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 230 \
    name b_5_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_19 \
    op interface \
    ports { b_5_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 231 \
    name b_5_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_5_20 \
    op interface \
    ports { b_5_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 232 \
    name b_6_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_0 \
    op interface \
    ports { b_6_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 233 \
    name b_6_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_1 \
    op interface \
    ports { b_6_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 234 \
    name b_6_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_2 \
    op interface \
    ports { b_6_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 235 \
    name b_6_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_3 \
    op interface \
    ports { b_6_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 236 \
    name b_6_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_4 \
    op interface \
    ports { b_6_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 237 \
    name b_6_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_5 \
    op interface \
    ports { b_6_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 238 \
    name b_6_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_6 \
    op interface \
    ports { b_6_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 239 \
    name b_6_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_7 \
    op interface \
    ports { b_6_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 240 \
    name b_6_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_8 \
    op interface \
    ports { b_6_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 241 \
    name b_6_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_9 \
    op interface \
    ports { b_6_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 242 \
    name b_6_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_10 \
    op interface \
    ports { b_6_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 243 \
    name b_6_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_11 \
    op interface \
    ports { b_6_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 244 \
    name b_6_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_12 \
    op interface \
    ports { b_6_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 245 \
    name b_6_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_13 \
    op interface \
    ports { b_6_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 246 \
    name b_6_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_14 \
    op interface \
    ports { b_6_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 247 \
    name b_6_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_15 \
    op interface \
    ports { b_6_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 248 \
    name b_6_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_16 \
    op interface \
    ports { b_6_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 249 \
    name b_6_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_17 \
    op interface \
    ports { b_6_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 250 \
    name b_6_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_18 \
    op interface \
    ports { b_6_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 251 \
    name b_6_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_19 \
    op interface \
    ports { b_6_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 252 \
    name b_6_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_6_20 \
    op interface \
    ports { b_6_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 253 \
    name b_7_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_0 \
    op interface \
    ports { b_7_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 254 \
    name b_7_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_1 \
    op interface \
    ports { b_7_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 255 \
    name b_7_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_2 \
    op interface \
    ports { b_7_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 256 \
    name b_7_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_3 \
    op interface \
    ports { b_7_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 257 \
    name b_7_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_4 \
    op interface \
    ports { b_7_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 258 \
    name b_7_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_5 \
    op interface \
    ports { b_7_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 259 \
    name b_7_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_6 \
    op interface \
    ports { b_7_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 260 \
    name b_7_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_7 \
    op interface \
    ports { b_7_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name b_7_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_8 \
    op interface \
    ports { b_7_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name b_7_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_9 \
    op interface \
    ports { b_7_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name b_7_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_10 \
    op interface \
    ports { b_7_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name b_7_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_11 \
    op interface \
    ports { b_7_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name b_7_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_12 \
    op interface \
    ports { b_7_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name b_7_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_13 \
    op interface \
    ports { b_7_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name b_7_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_14 \
    op interface \
    ports { b_7_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name b_7_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_15 \
    op interface \
    ports { b_7_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name b_7_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_16 \
    op interface \
    ports { b_7_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name b_7_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_17 \
    op interface \
    ports { b_7_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name b_7_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_18 \
    op interface \
    ports { b_7_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name b_7_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_19 \
    op interface \
    ports { b_7_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name b_7_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_7_20 \
    op interface \
    ports { b_7_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name b_8_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_0 \
    op interface \
    ports { b_8_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name b_8_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_1 \
    op interface \
    ports { b_8_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name b_8_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_2 \
    op interface \
    ports { b_8_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name b_8_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_3 \
    op interface \
    ports { b_8_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 278 \
    name b_8_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_4 \
    op interface \
    ports { b_8_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 279 \
    name b_8_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_5 \
    op interface \
    ports { b_8_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 280 \
    name b_8_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_6 \
    op interface \
    ports { b_8_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 281 \
    name b_8_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_7 \
    op interface \
    ports { b_8_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 282 \
    name b_8_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_8 \
    op interface \
    ports { b_8_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 283 \
    name b_8_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_9 \
    op interface \
    ports { b_8_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 284 \
    name b_8_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_10 \
    op interface \
    ports { b_8_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name b_8_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_11 \
    op interface \
    ports { b_8_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name b_8_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_12 \
    op interface \
    ports { b_8_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name b_8_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_13 \
    op interface \
    ports { b_8_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name b_8_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_14 \
    op interface \
    ports { b_8_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name b_8_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_15 \
    op interface \
    ports { b_8_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name b_8_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_16 \
    op interface \
    ports { b_8_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name b_8_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_17 \
    op interface \
    ports { b_8_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name b_8_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_18 \
    op interface \
    ports { b_8_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name b_8_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_19 \
    op interface \
    ports { b_8_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name b_8_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_8_20 \
    op interface \
    ports { b_8_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name b_9_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_0 \
    op interface \
    ports { b_9_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name b_9_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_1 \
    op interface \
    ports { b_9_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name b_9_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_2 \
    op interface \
    ports { b_9_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name b_9_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_3 \
    op interface \
    ports { b_9_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 299 \
    name b_9_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_4 \
    op interface \
    ports { b_9_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 300 \
    name b_9_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_5 \
    op interface \
    ports { b_9_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 301 \
    name b_9_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_6 \
    op interface \
    ports { b_9_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 302 \
    name b_9_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_7 \
    op interface \
    ports { b_9_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 303 \
    name b_9_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_8 \
    op interface \
    ports { b_9_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 304 \
    name b_9_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_9 \
    op interface \
    ports { b_9_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 305 \
    name b_9_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_10 \
    op interface \
    ports { b_9_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 306 \
    name b_9_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_11 \
    op interface \
    ports { b_9_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 307 \
    name b_9_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_12 \
    op interface \
    ports { b_9_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 308 \
    name b_9_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_13 \
    op interface \
    ports { b_9_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 309 \
    name b_9_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_14 \
    op interface \
    ports { b_9_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 310 \
    name b_9_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_15 \
    op interface \
    ports { b_9_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 311 \
    name b_9_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_16 \
    op interface \
    ports { b_9_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 312 \
    name b_9_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_17 \
    op interface \
    ports { b_9_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 313 \
    name b_9_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_18 \
    op interface \
    ports { b_9_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 314 \
    name b_9_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_19 \
    op interface \
    ports { b_9_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 315 \
    name b_9_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_9_20 \
    op interface \
    ports { b_9_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 316 \
    name b_10_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_0 \
    op interface \
    ports { b_10_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 317 \
    name b_10_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_1 \
    op interface \
    ports { b_10_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 318 \
    name b_10_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_2 \
    op interface \
    ports { b_10_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 319 \
    name b_10_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_3 \
    op interface \
    ports { b_10_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 320 \
    name b_10_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_4 \
    op interface \
    ports { b_10_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 321 \
    name b_10_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_5 \
    op interface \
    ports { b_10_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 322 \
    name b_10_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_6 \
    op interface \
    ports { b_10_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 323 \
    name b_10_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_7 \
    op interface \
    ports { b_10_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name b_10_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_8 \
    op interface \
    ports { b_10_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name b_10_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_9 \
    op interface \
    ports { b_10_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name b_10_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_10 \
    op interface \
    ports { b_10_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name b_10_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_11 \
    op interface \
    ports { b_10_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name b_10_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_12 \
    op interface \
    ports { b_10_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name b_10_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_13 \
    op interface \
    ports { b_10_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name b_10_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_14 \
    op interface \
    ports { b_10_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name b_10_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_15 \
    op interface \
    ports { b_10_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name b_10_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_16 \
    op interface \
    ports { b_10_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name b_10_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_17 \
    op interface \
    ports { b_10_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 334 \
    name b_10_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_18 \
    op interface \
    ports { b_10_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name b_10_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_19 \
    op interface \
    ports { b_10_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name b_10_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_10_20 \
    op interface \
    ports { b_10_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name b_11_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_0 \
    op interface \
    ports { b_11_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name b_11_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_1 \
    op interface \
    ports { b_11_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name b_11_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_2 \
    op interface \
    ports { b_11_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name b_11_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_3 \
    op interface \
    ports { b_11_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name b_11_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_4 \
    op interface \
    ports { b_11_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name b_11_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_5 \
    op interface \
    ports { b_11_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name b_11_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_6 \
    op interface \
    ports { b_11_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name b_11_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_7 \
    op interface \
    ports { b_11_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name b_11_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_8 \
    op interface \
    ports { b_11_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 346 \
    name b_11_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_9 \
    op interface \
    ports { b_11_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name b_11_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_10 \
    op interface \
    ports { b_11_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 348 \
    name b_11_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_11 \
    op interface \
    ports { b_11_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 349 \
    name b_11_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_12 \
    op interface \
    ports { b_11_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 350 \
    name b_11_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_13 \
    op interface \
    ports { b_11_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 351 \
    name b_11_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_14 \
    op interface \
    ports { b_11_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 352 \
    name b_11_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_15 \
    op interface \
    ports { b_11_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 353 \
    name b_11_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_16 \
    op interface \
    ports { b_11_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 354 \
    name b_11_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_17 \
    op interface \
    ports { b_11_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 355 \
    name b_11_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_18 \
    op interface \
    ports { b_11_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 356 \
    name b_11_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_19 \
    op interface \
    ports { b_11_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 357 \
    name b_11_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_11_20 \
    op interface \
    ports { b_11_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name b_12_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_0 \
    op interface \
    ports { b_12_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name b_12_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_1 \
    op interface \
    ports { b_12_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 360 \
    name b_12_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_2 \
    op interface \
    ports { b_12_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 361 \
    name b_12_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_3 \
    op interface \
    ports { b_12_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name b_12_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_4 \
    op interface \
    ports { b_12_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 363 \
    name b_12_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_5 \
    op interface \
    ports { b_12_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 364 \
    name b_12_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_6 \
    op interface \
    ports { b_12_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 365 \
    name b_12_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_7 \
    op interface \
    ports { b_12_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name b_12_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_8 \
    op interface \
    ports { b_12_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name b_12_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_9 \
    op interface \
    ports { b_12_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name b_12_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_10 \
    op interface \
    ports { b_12_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name b_12_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_11 \
    op interface \
    ports { b_12_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name b_12_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_12 \
    op interface \
    ports { b_12_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name b_12_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_13 \
    op interface \
    ports { b_12_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name b_12_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_14 \
    op interface \
    ports { b_12_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name b_12_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_15 \
    op interface \
    ports { b_12_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name b_12_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_16 \
    op interface \
    ports { b_12_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name b_12_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_17 \
    op interface \
    ports { b_12_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name b_12_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_18 \
    op interface \
    ports { b_12_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name b_12_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_19 \
    op interface \
    ports { b_12_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name b_12_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_12_20 \
    op interface \
    ports { b_12_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name b_13_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_0 \
    op interface \
    ports { b_13_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name b_13_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_1 \
    op interface \
    ports { b_13_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name b_13_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_2 \
    op interface \
    ports { b_13_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name b_13_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_3 \
    op interface \
    ports { b_13_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name b_13_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_4 \
    op interface \
    ports { b_13_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name b_13_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_5 \
    op interface \
    ports { b_13_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name b_13_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_6 \
    op interface \
    ports { b_13_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name b_13_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_7 \
    op interface \
    ports { b_13_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name b_13_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_8 \
    op interface \
    ports { b_13_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name b_13_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_9 \
    op interface \
    ports { b_13_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name b_13_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_10 \
    op interface \
    ports { b_13_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name b_13_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_11 \
    op interface \
    ports { b_13_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name b_13_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_12 \
    op interface \
    ports { b_13_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name b_13_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_13 \
    op interface \
    ports { b_13_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name b_13_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_14 \
    op interface \
    ports { b_13_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name b_13_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_15 \
    op interface \
    ports { b_13_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name b_13_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_16 \
    op interface \
    ports { b_13_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name b_13_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_17 \
    op interface \
    ports { b_13_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name b_13_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_18 \
    op interface \
    ports { b_13_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name b_13_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_19 \
    op interface \
    ports { b_13_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name b_13_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_13_20 \
    op interface \
    ports { b_13_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name b_14_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_0 \
    op interface \
    ports { b_14_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name b_14_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_1 \
    op interface \
    ports { b_14_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name b_14_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_2 \
    op interface \
    ports { b_14_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name b_14_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_3 \
    op interface \
    ports { b_14_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name b_14_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_4 \
    op interface \
    ports { b_14_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name b_14_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_5 \
    op interface \
    ports { b_14_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name b_14_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_6 \
    op interface \
    ports { b_14_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name b_14_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_7 \
    op interface \
    ports { b_14_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name b_14_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_8 \
    op interface \
    ports { b_14_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name b_14_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_9 \
    op interface \
    ports { b_14_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name b_14_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_10 \
    op interface \
    ports { b_14_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name b_14_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_11 \
    op interface \
    ports { b_14_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name b_14_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_12 \
    op interface \
    ports { b_14_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name b_14_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_13 \
    op interface \
    ports { b_14_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name b_14_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_14 \
    op interface \
    ports { b_14_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name b_14_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_15 \
    op interface \
    ports { b_14_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name b_14_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_16 \
    op interface \
    ports { b_14_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name b_14_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_17 \
    op interface \
    ports { b_14_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name b_14_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_18 \
    op interface \
    ports { b_14_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name b_14_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_19 \
    op interface \
    ports { b_14_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name b_14_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_14_20 \
    op interface \
    ports { b_14_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name b_15_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_0 \
    op interface \
    ports { b_15_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name b_15_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_1 \
    op interface \
    ports { b_15_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name b_15_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_2 \
    op interface \
    ports { b_15_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name b_15_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_3 \
    op interface \
    ports { b_15_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name b_15_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_4 \
    op interface \
    ports { b_15_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name b_15_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_5 \
    op interface \
    ports { b_15_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name b_15_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_6 \
    op interface \
    ports { b_15_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name b_15_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_7 \
    op interface \
    ports { b_15_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name b_15_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_8 \
    op interface \
    ports { b_15_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name b_15_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_9 \
    op interface \
    ports { b_15_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name b_15_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_10 \
    op interface \
    ports { b_15_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name b_15_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_11 \
    op interface \
    ports { b_15_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name b_15_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_12 \
    op interface \
    ports { b_15_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name b_15_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_13 \
    op interface \
    ports { b_15_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name b_15_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_14 \
    op interface \
    ports { b_15_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name b_15_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_15 \
    op interface \
    ports { b_15_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name b_15_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_16 \
    op interface \
    ports { b_15_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name b_15_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_17 \
    op interface \
    ports { b_15_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name b_15_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_18 \
    op interface \
    ports { b_15_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name b_15_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_19 \
    op interface \
    ports { b_15_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name b_15_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_15_20 \
    op interface \
    ports { b_15_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name b_16_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_0 \
    op interface \
    ports { b_16_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name b_16_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_1 \
    op interface \
    ports { b_16_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name b_16_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_2 \
    op interface \
    ports { b_16_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name b_16_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_3 \
    op interface \
    ports { b_16_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name b_16_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_4 \
    op interface \
    ports { b_16_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name b_16_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_5 \
    op interface \
    ports { b_16_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name b_16_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_6 \
    op interface \
    ports { b_16_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name b_16_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_7 \
    op interface \
    ports { b_16_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name b_16_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_8 \
    op interface \
    ports { b_16_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name b_16_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_9 \
    op interface \
    ports { b_16_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name b_16_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_10 \
    op interface \
    ports { b_16_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name b_16_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_11 \
    op interface \
    ports { b_16_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name b_16_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_12 \
    op interface \
    ports { b_16_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name b_16_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_13 \
    op interface \
    ports { b_16_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name b_16_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_14 \
    op interface \
    ports { b_16_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name b_16_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_15 \
    op interface \
    ports { b_16_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name b_16_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_16 \
    op interface \
    ports { b_16_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name b_16_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_17 \
    op interface \
    ports { b_16_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name b_16_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_18 \
    op interface \
    ports { b_16_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 461 \
    name b_16_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_19 \
    op interface \
    ports { b_16_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 462 \
    name b_16_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_16_20 \
    op interface \
    ports { b_16_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 463 \
    name b_17_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_0 \
    op interface \
    ports { b_17_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 464 \
    name b_17_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_1 \
    op interface \
    ports { b_17_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 465 \
    name b_17_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_2 \
    op interface \
    ports { b_17_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 466 \
    name b_17_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_3 \
    op interface \
    ports { b_17_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 467 \
    name b_17_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_4 \
    op interface \
    ports { b_17_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 468 \
    name b_17_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_5 \
    op interface \
    ports { b_17_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 469 \
    name b_17_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_6 \
    op interface \
    ports { b_17_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 470 \
    name b_17_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_7 \
    op interface \
    ports { b_17_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 471 \
    name b_17_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_8 \
    op interface \
    ports { b_17_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 472 \
    name b_17_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_9 \
    op interface \
    ports { b_17_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 473 \
    name b_17_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_10 \
    op interface \
    ports { b_17_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 474 \
    name b_17_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_11 \
    op interface \
    ports { b_17_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 475 \
    name b_17_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_12 \
    op interface \
    ports { b_17_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 476 \
    name b_17_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_13 \
    op interface \
    ports { b_17_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 477 \
    name b_17_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_14 \
    op interface \
    ports { b_17_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 478 \
    name b_17_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_15 \
    op interface \
    ports { b_17_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 479 \
    name b_17_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_16 \
    op interface \
    ports { b_17_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 480 \
    name b_17_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_17 \
    op interface \
    ports { b_17_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 481 \
    name b_17_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_18 \
    op interface \
    ports { b_17_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 482 \
    name b_17_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_19 \
    op interface \
    ports { b_17_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 483 \
    name b_17_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_17_20 \
    op interface \
    ports { b_17_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 484 \
    name b_18_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_0 \
    op interface \
    ports { b_18_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 485 \
    name b_18_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_1 \
    op interface \
    ports { b_18_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 486 \
    name b_18_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_2 \
    op interface \
    ports { b_18_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 487 \
    name b_18_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_3 \
    op interface \
    ports { b_18_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 488 \
    name b_18_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_4 \
    op interface \
    ports { b_18_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 489 \
    name b_18_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_5 \
    op interface \
    ports { b_18_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 490 \
    name b_18_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_6 \
    op interface \
    ports { b_18_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 491 \
    name b_18_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_7 \
    op interface \
    ports { b_18_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 492 \
    name b_18_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_8 \
    op interface \
    ports { b_18_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 493 \
    name b_18_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_9 \
    op interface \
    ports { b_18_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 494 \
    name b_18_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_10 \
    op interface \
    ports { b_18_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 495 \
    name b_18_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_11 \
    op interface \
    ports { b_18_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 496 \
    name b_18_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_12 \
    op interface \
    ports { b_18_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 497 \
    name b_18_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_13 \
    op interface \
    ports { b_18_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 498 \
    name b_18_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_14 \
    op interface \
    ports { b_18_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 499 \
    name b_18_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_15 \
    op interface \
    ports { b_18_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 500 \
    name b_18_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_16 \
    op interface \
    ports { b_18_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 501 \
    name b_18_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_17 \
    op interface \
    ports { b_18_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 502 \
    name b_18_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_18 \
    op interface \
    ports { b_18_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 503 \
    name b_18_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_19 \
    op interface \
    ports { b_18_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 504 \
    name b_18_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_18_20 \
    op interface \
    ports { b_18_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 505 \
    name b_19_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_0 \
    op interface \
    ports { b_19_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 506 \
    name b_19_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_1 \
    op interface \
    ports { b_19_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 507 \
    name b_19_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_2 \
    op interface \
    ports { b_19_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 508 \
    name b_19_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_3 \
    op interface \
    ports { b_19_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 509 \
    name b_19_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_4 \
    op interface \
    ports { b_19_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 510 \
    name b_19_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_5 \
    op interface \
    ports { b_19_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 511 \
    name b_19_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_6 \
    op interface \
    ports { b_19_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 512 \
    name b_19_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_7 \
    op interface \
    ports { b_19_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 513 \
    name b_19_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_8 \
    op interface \
    ports { b_19_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 514 \
    name b_19_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_9 \
    op interface \
    ports { b_19_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 515 \
    name b_19_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_10 \
    op interface \
    ports { b_19_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 516 \
    name b_19_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_11 \
    op interface \
    ports { b_19_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 517 \
    name b_19_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_12 \
    op interface \
    ports { b_19_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 518 \
    name b_19_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_13 \
    op interface \
    ports { b_19_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 519 \
    name b_19_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_14 \
    op interface \
    ports { b_19_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 520 \
    name b_19_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_15 \
    op interface \
    ports { b_19_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 521 \
    name b_19_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_16 \
    op interface \
    ports { b_19_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 522 \
    name b_19_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_17 \
    op interface \
    ports { b_19_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 523 \
    name b_19_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_18 \
    op interface \
    ports { b_19_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 524 \
    name b_19_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_19 \
    op interface \
    ports { b_19_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 525 \
    name b_19_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_19_20 \
    op interface \
    ports { b_19_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 526 \
    name b_20_0 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_0 \
    op interface \
    ports { b_20_0 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 527 \
    name b_20_1 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_1 \
    op interface \
    ports { b_20_1 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 528 \
    name b_20_2 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_2 \
    op interface \
    ports { b_20_2 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 529 \
    name b_20_3 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_3 \
    op interface \
    ports { b_20_3 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 530 \
    name b_20_4 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_4 \
    op interface \
    ports { b_20_4 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 531 \
    name b_20_5 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_5 \
    op interface \
    ports { b_20_5 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 532 \
    name b_20_6 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_6 \
    op interface \
    ports { b_20_6 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 533 \
    name b_20_7 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_7 \
    op interface \
    ports { b_20_7 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 534 \
    name b_20_8 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_8 \
    op interface \
    ports { b_20_8 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 535 \
    name b_20_9 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_9 \
    op interface \
    ports { b_20_9 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 536 \
    name b_20_10 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_10 \
    op interface \
    ports { b_20_10 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 537 \
    name b_20_11 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_11 \
    op interface \
    ports { b_20_11 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 538 \
    name b_20_12 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_12 \
    op interface \
    ports { b_20_12 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 539 \
    name b_20_13 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_13 \
    op interface \
    ports { b_20_13 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 540 \
    name b_20_14 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_14 \
    op interface \
    ports { b_20_14 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 541 \
    name b_20_15 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_15 \
    op interface \
    ports { b_20_15 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 542 \
    name b_20_16 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_16 \
    op interface \
    ports { b_20_16 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 543 \
    name b_20_17 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_17 \
    op interface \
    ports { b_20_17 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 544 \
    name b_20_18 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_18 \
    op interface \
    ports { b_20_18 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 545 \
    name b_20_19 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_19 \
    op interface \
    ports { b_20_19 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 546 \
    name b_20_20 \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_b_20_20 \
    op interface \
    ports { b_20_20 { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


