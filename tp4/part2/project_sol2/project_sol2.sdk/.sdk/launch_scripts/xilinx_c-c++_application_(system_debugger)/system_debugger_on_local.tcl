connect -url tcp:127.0.0.1:3121
source C:/part2/project_sol2/project_sol2.sdk/design_proj2_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
rst -system
after 3000
targets -set -filter {jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA" && level==0} -index 1
fpga -file C:/part2/project_sol2/project_sol2.sdk/design_proj2_wrapper_hw_platform_0/design_proj2_wrapper.bit
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
loadhw -hw C:/part2/project_sol2/project_sol2.sdk/design_proj2_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
ps7_init
ps7_post_config
configparams force-mem-access 0
