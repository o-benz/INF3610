############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2012 Xilinx Inc. All rights reserved.
############################################################
#config_interface -trim_dangling_port

# WRAPPED AXI4-STREAM MATRIX MULTIPLIER HLS PROJECT
open_project hls_wrapped_mmult_prj
set_top HLS_accel
add_files mmult_accel.cpp -cflags "-DDB_DEBUG"
add_files -tb mmult_test.cpp -cflags "-DDB_DEBUG"
open_solution "solution4_2"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
# set_directive_inline "mmult_hw" 
# (insérez ici vos directives)
set_directive_inline "mmult_hw"
set_directive_array_partition -type block -factor 100 -dim 1 "mmult_hw" b
set_directive_array_partition -type block -factor 100 -dim 2 "mmult_hw" a
set_directive_pipeline -II 1 "mmult_hw/L2"
# A completer



#csim_design -clean
#-setup
csynth_design
export_design -evaluate verilog -format ip_catalog 
close_project
