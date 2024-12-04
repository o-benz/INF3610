############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_inline "mmult_hw"
set_directive_pipeline -II 2 "mmult_hw/L2"
set_directive_array_partition -type block -factor 26 -dim 2 "mmult_hw" a
set_directive_array_partition -type block -factor 26 -dim 1 "mmult_hw" b
set_directive_array_partition -type complete -dim 1 "mmult_hw" out
set_directive_resource -core HAddSub_nodsp "mmult_hw" sum
set_directive_resource -core HMul_nodsp "mmult_hw" temp
