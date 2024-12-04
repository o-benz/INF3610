############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_wrapped_mmult_prj
set_top HLS_accel
add_files mmult_accel.cpp -cflags "-DDB_DEBUG"
add_files -tb mmult_test.cpp -cflags "-DDB_DEBUG -Wno-unknown-pragmas"
open_solution "solution3_3"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
config_export -format ip_catalog
source "./hls_wrapped_mmult_prj/solution3_3/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
