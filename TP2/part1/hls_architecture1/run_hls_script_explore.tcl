############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2012 Xilinx Inc. All rights reserved.
############################################################
#config_interface -trim_dangling_port

# STANDALONE MATRIX MULTIPLIER HLS PROJECT
open_project hls_mmult_prj
set_top mmult_hw
add_files mmult_accel.cpp
add_files -tb mmult_test.cpp
open_solution "solution1_1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
csim_design -clean
csynth_design

close_project



