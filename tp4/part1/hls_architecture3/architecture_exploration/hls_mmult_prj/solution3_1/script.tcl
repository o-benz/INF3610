############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_mmult_prj
set_top mmult_hw
add_files mmult_accel.cpp
add_files -tb mmult_test.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution3_1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
source "./hls_mmult_prj/solution3_1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -format ip_catalog
