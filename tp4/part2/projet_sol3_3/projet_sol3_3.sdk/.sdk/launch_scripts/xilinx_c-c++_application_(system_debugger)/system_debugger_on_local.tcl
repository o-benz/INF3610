connect -url tcp:127.0.0.1:3121
source C:/Temp/code_de_depart_partie2/projet_sol3_3/projet_sol3_3.sdk/design_1_wrapper_hw_platform_0/ps7_init.tcl
targets -set -filter {jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA" && level==0} -index 1
fpga -file C:/Temp/code_de_depart_partie2/projet_sol3_3/projet_sol3_3.sdk/design_1_wrapper_hw_platform_0/design_1_wrapper.bit
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
loadhw -hw C:/Temp/code_de_depart_partie2/projet_sol3_3/projet_sol3_3.sdk/design_1_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#1" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
dow C:/Temp/code_de_depart_partie2/projet_sol3_3/projet_sol3_3.sdk/test_core0/Debug/test_core0.elf
targets -set -nocase -filter {name =~ "ARM*#1" && jtag_cable_name =~ "Xilinx HW-FTDI-TEST FT2232H 1234-tulA"} -index 0
dow C:/Temp/code_de_depart_partie2/projet_sol3_3/projet_sol3_3.sdk/test_core1/Debug/test_core1.elf
configparams force-mem-access 0
bpadd -addr &main
