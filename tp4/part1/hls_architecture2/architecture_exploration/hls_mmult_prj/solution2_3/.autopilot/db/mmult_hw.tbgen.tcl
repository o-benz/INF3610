set moduleName mmult_hw
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {mmult_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_0 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_1 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_2 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_3 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_4 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_5 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_6 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_7 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_8 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_9 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_10 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_11 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ a_12 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_0 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_1 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_2 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_3 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_4 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_5 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_6 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_7 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_8 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_9 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_10 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_11 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ b_12 int 16 regular {array 52 { 1 1 } 1 1 }  }
	{ out_r int 16 regular {array 676 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_0", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 0,"up" : 1,"step" : 1}]}]}]} , 
 	{ "Name" : "a_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 2,"up" : 3,"step" : 1}]}]}]} , 
 	{ "Name" : "a_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 4,"up" : 5,"step" : 1}]}]}]} , 
 	{ "Name" : "a_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 6,"up" : 7,"step" : 1}]}]}]} , 
 	{ "Name" : "a_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 8,"up" : 9,"step" : 1}]}]}]} , 
 	{ "Name" : "a_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 10,"up" : 11,"step" : 1}]}]}]} , 
 	{ "Name" : "a_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 12,"up" : 13,"step" : 1}]}]}]} , 
 	{ "Name" : "a_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 14,"up" : 15,"step" : 1}]}]}]} , 
 	{ "Name" : "a_8", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 16,"up" : 17,"step" : 1}]}]}]} , 
 	{ "Name" : "a_9", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 18,"up" : 19,"step" : 1}]}]}]} , 
 	{ "Name" : "a_10", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 20,"up" : 21,"step" : 1}]}]}]} , 
 	{ "Name" : "a_11", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 22,"up" : 23,"step" : 1}]}]}]} , 
 	{ "Name" : "a_12", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 24,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_0", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 1,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 3,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 5,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 7,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 9,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 10,"up" : 11,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 12,"up" : 13,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 14,"up" : 15,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_8", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 16,"up" : 17,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_9", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 18,"up" : 19,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_10", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 20,"up" : 21,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_11", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 22,"up" : 23,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_12", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 24,"up" : 25,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "out_r", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "out","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 170
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_0_address0 sc_out sc_lv 6 signal 0 } 
	{ a_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_0_q0 sc_in sc_lv 16 signal 0 } 
	{ a_0_address1 sc_out sc_lv 6 signal 0 } 
	{ a_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ a_0_q1 sc_in sc_lv 16 signal 0 } 
	{ a_1_address0 sc_out sc_lv 6 signal 1 } 
	{ a_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ a_1_q0 sc_in sc_lv 16 signal 1 } 
	{ a_1_address1 sc_out sc_lv 6 signal 1 } 
	{ a_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ a_1_q1 sc_in sc_lv 16 signal 1 } 
	{ a_2_address0 sc_out sc_lv 6 signal 2 } 
	{ a_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ a_2_q0 sc_in sc_lv 16 signal 2 } 
	{ a_2_address1 sc_out sc_lv 6 signal 2 } 
	{ a_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ a_2_q1 sc_in sc_lv 16 signal 2 } 
	{ a_3_address0 sc_out sc_lv 6 signal 3 } 
	{ a_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ a_3_q0 sc_in sc_lv 16 signal 3 } 
	{ a_3_address1 sc_out sc_lv 6 signal 3 } 
	{ a_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ a_3_q1 sc_in sc_lv 16 signal 3 } 
	{ a_4_address0 sc_out sc_lv 6 signal 4 } 
	{ a_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ a_4_q0 sc_in sc_lv 16 signal 4 } 
	{ a_4_address1 sc_out sc_lv 6 signal 4 } 
	{ a_4_ce1 sc_out sc_logic 1 signal 4 } 
	{ a_4_q1 sc_in sc_lv 16 signal 4 } 
	{ a_5_address0 sc_out sc_lv 6 signal 5 } 
	{ a_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ a_5_q0 sc_in sc_lv 16 signal 5 } 
	{ a_5_address1 sc_out sc_lv 6 signal 5 } 
	{ a_5_ce1 sc_out sc_logic 1 signal 5 } 
	{ a_5_q1 sc_in sc_lv 16 signal 5 } 
	{ a_6_address0 sc_out sc_lv 6 signal 6 } 
	{ a_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ a_6_q0 sc_in sc_lv 16 signal 6 } 
	{ a_6_address1 sc_out sc_lv 6 signal 6 } 
	{ a_6_ce1 sc_out sc_logic 1 signal 6 } 
	{ a_6_q1 sc_in sc_lv 16 signal 6 } 
	{ a_7_address0 sc_out sc_lv 6 signal 7 } 
	{ a_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ a_7_q0 sc_in sc_lv 16 signal 7 } 
	{ a_7_address1 sc_out sc_lv 6 signal 7 } 
	{ a_7_ce1 sc_out sc_logic 1 signal 7 } 
	{ a_7_q1 sc_in sc_lv 16 signal 7 } 
	{ a_8_address0 sc_out sc_lv 6 signal 8 } 
	{ a_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ a_8_q0 sc_in sc_lv 16 signal 8 } 
	{ a_8_address1 sc_out sc_lv 6 signal 8 } 
	{ a_8_ce1 sc_out sc_logic 1 signal 8 } 
	{ a_8_q1 sc_in sc_lv 16 signal 8 } 
	{ a_9_address0 sc_out sc_lv 6 signal 9 } 
	{ a_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ a_9_q0 sc_in sc_lv 16 signal 9 } 
	{ a_9_address1 sc_out sc_lv 6 signal 9 } 
	{ a_9_ce1 sc_out sc_logic 1 signal 9 } 
	{ a_9_q1 sc_in sc_lv 16 signal 9 } 
	{ a_10_address0 sc_out sc_lv 6 signal 10 } 
	{ a_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ a_10_q0 sc_in sc_lv 16 signal 10 } 
	{ a_10_address1 sc_out sc_lv 6 signal 10 } 
	{ a_10_ce1 sc_out sc_logic 1 signal 10 } 
	{ a_10_q1 sc_in sc_lv 16 signal 10 } 
	{ a_11_address0 sc_out sc_lv 6 signal 11 } 
	{ a_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ a_11_q0 sc_in sc_lv 16 signal 11 } 
	{ a_11_address1 sc_out sc_lv 6 signal 11 } 
	{ a_11_ce1 sc_out sc_logic 1 signal 11 } 
	{ a_11_q1 sc_in sc_lv 16 signal 11 } 
	{ a_12_address0 sc_out sc_lv 6 signal 12 } 
	{ a_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ a_12_q0 sc_in sc_lv 16 signal 12 } 
	{ a_12_address1 sc_out sc_lv 6 signal 12 } 
	{ a_12_ce1 sc_out sc_logic 1 signal 12 } 
	{ a_12_q1 sc_in sc_lv 16 signal 12 } 
	{ b_0_address0 sc_out sc_lv 6 signal 13 } 
	{ b_0_ce0 sc_out sc_logic 1 signal 13 } 
	{ b_0_q0 sc_in sc_lv 16 signal 13 } 
	{ b_0_address1 sc_out sc_lv 6 signal 13 } 
	{ b_0_ce1 sc_out sc_logic 1 signal 13 } 
	{ b_0_q1 sc_in sc_lv 16 signal 13 } 
	{ b_1_address0 sc_out sc_lv 6 signal 14 } 
	{ b_1_ce0 sc_out sc_logic 1 signal 14 } 
	{ b_1_q0 sc_in sc_lv 16 signal 14 } 
	{ b_1_address1 sc_out sc_lv 6 signal 14 } 
	{ b_1_ce1 sc_out sc_logic 1 signal 14 } 
	{ b_1_q1 sc_in sc_lv 16 signal 14 } 
	{ b_2_address0 sc_out sc_lv 6 signal 15 } 
	{ b_2_ce0 sc_out sc_logic 1 signal 15 } 
	{ b_2_q0 sc_in sc_lv 16 signal 15 } 
	{ b_2_address1 sc_out sc_lv 6 signal 15 } 
	{ b_2_ce1 sc_out sc_logic 1 signal 15 } 
	{ b_2_q1 sc_in sc_lv 16 signal 15 } 
	{ b_3_address0 sc_out sc_lv 6 signal 16 } 
	{ b_3_ce0 sc_out sc_logic 1 signal 16 } 
	{ b_3_q0 sc_in sc_lv 16 signal 16 } 
	{ b_3_address1 sc_out sc_lv 6 signal 16 } 
	{ b_3_ce1 sc_out sc_logic 1 signal 16 } 
	{ b_3_q1 sc_in sc_lv 16 signal 16 } 
	{ b_4_address0 sc_out sc_lv 6 signal 17 } 
	{ b_4_ce0 sc_out sc_logic 1 signal 17 } 
	{ b_4_q0 sc_in sc_lv 16 signal 17 } 
	{ b_4_address1 sc_out sc_lv 6 signal 17 } 
	{ b_4_ce1 sc_out sc_logic 1 signal 17 } 
	{ b_4_q1 sc_in sc_lv 16 signal 17 } 
	{ b_5_address0 sc_out sc_lv 6 signal 18 } 
	{ b_5_ce0 sc_out sc_logic 1 signal 18 } 
	{ b_5_q0 sc_in sc_lv 16 signal 18 } 
	{ b_5_address1 sc_out sc_lv 6 signal 18 } 
	{ b_5_ce1 sc_out sc_logic 1 signal 18 } 
	{ b_5_q1 sc_in sc_lv 16 signal 18 } 
	{ b_6_address0 sc_out sc_lv 6 signal 19 } 
	{ b_6_ce0 sc_out sc_logic 1 signal 19 } 
	{ b_6_q0 sc_in sc_lv 16 signal 19 } 
	{ b_6_address1 sc_out sc_lv 6 signal 19 } 
	{ b_6_ce1 sc_out sc_logic 1 signal 19 } 
	{ b_6_q1 sc_in sc_lv 16 signal 19 } 
	{ b_7_address0 sc_out sc_lv 6 signal 20 } 
	{ b_7_ce0 sc_out sc_logic 1 signal 20 } 
	{ b_7_q0 sc_in sc_lv 16 signal 20 } 
	{ b_7_address1 sc_out sc_lv 6 signal 20 } 
	{ b_7_ce1 sc_out sc_logic 1 signal 20 } 
	{ b_7_q1 sc_in sc_lv 16 signal 20 } 
	{ b_8_address0 sc_out sc_lv 6 signal 21 } 
	{ b_8_ce0 sc_out sc_logic 1 signal 21 } 
	{ b_8_q0 sc_in sc_lv 16 signal 21 } 
	{ b_8_address1 sc_out sc_lv 6 signal 21 } 
	{ b_8_ce1 sc_out sc_logic 1 signal 21 } 
	{ b_8_q1 sc_in sc_lv 16 signal 21 } 
	{ b_9_address0 sc_out sc_lv 6 signal 22 } 
	{ b_9_ce0 sc_out sc_logic 1 signal 22 } 
	{ b_9_q0 sc_in sc_lv 16 signal 22 } 
	{ b_9_address1 sc_out sc_lv 6 signal 22 } 
	{ b_9_ce1 sc_out sc_logic 1 signal 22 } 
	{ b_9_q1 sc_in sc_lv 16 signal 22 } 
	{ b_10_address0 sc_out sc_lv 6 signal 23 } 
	{ b_10_ce0 sc_out sc_logic 1 signal 23 } 
	{ b_10_q0 sc_in sc_lv 16 signal 23 } 
	{ b_10_address1 sc_out sc_lv 6 signal 23 } 
	{ b_10_ce1 sc_out sc_logic 1 signal 23 } 
	{ b_10_q1 sc_in sc_lv 16 signal 23 } 
	{ b_11_address0 sc_out sc_lv 6 signal 24 } 
	{ b_11_ce0 sc_out sc_logic 1 signal 24 } 
	{ b_11_q0 sc_in sc_lv 16 signal 24 } 
	{ b_11_address1 sc_out sc_lv 6 signal 24 } 
	{ b_11_ce1 sc_out sc_logic 1 signal 24 } 
	{ b_11_q1 sc_in sc_lv 16 signal 24 } 
	{ b_12_address0 sc_out sc_lv 6 signal 25 } 
	{ b_12_ce0 sc_out sc_logic 1 signal 25 } 
	{ b_12_q0 sc_in sc_lv 16 signal 25 } 
	{ b_12_address1 sc_out sc_lv 6 signal 25 } 
	{ b_12_ce1 sc_out sc_logic 1 signal 25 } 
	{ b_12_q1 sc_in sc_lv 16 signal 25 } 
	{ out_r_address0 sc_out sc_lv 10 signal 26 } 
	{ out_r_ce0 sc_out sc_logic 1 signal 26 } 
	{ out_r_we0 sc_out sc_logic 1 signal 26 } 
	{ out_r_d0 sc_out sc_lv 16 signal 26 } 
	{ out_r_address1 sc_out sc_lv 10 signal 26 } 
	{ out_r_ce1 sc_out sc_logic 1 signal 26 } 
	{ out_r_we1 sc_out sc_logic 1 signal 26 } 
	{ out_r_d1 sc_out sc_lv 16 signal 26 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_0", "role": "address0" }} , 
 	{ "name": "a_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_0", "role": "ce0" }} , 
 	{ "name": "a_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_0", "role": "q0" }} , 
 	{ "name": "a_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_0", "role": "address1" }} , 
 	{ "name": "a_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_0", "role": "ce1" }} , 
 	{ "name": "a_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_0", "role": "q1" }} , 
 	{ "name": "a_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_1", "role": "address0" }} , 
 	{ "name": "a_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_1", "role": "ce0" }} , 
 	{ "name": "a_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_1", "role": "q0" }} , 
 	{ "name": "a_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_1", "role": "address1" }} , 
 	{ "name": "a_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_1", "role": "ce1" }} , 
 	{ "name": "a_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_1", "role": "q1" }} , 
 	{ "name": "a_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_2", "role": "address0" }} , 
 	{ "name": "a_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_2", "role": "ce0" }} , 
 	{ "name": "a_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_2", "role": "q0" }} , 
 	{ "name": "a_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_2", "role": "address1" }} , 
 	{ "name": "a_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_2", "role": "ce1" }} , 
 	{ "name": "a_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_2", "role": "q1" }} , 
 	{ "name": "a_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_3", "role": "address0" }} , 
 	{ "name": "a_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_3", "role": "ce0" }} , 
 	{ "name": "a_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_3", "role": "q0" }} , 
 	{ "name": "a_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_3", "role": "address1" }} , 
 	{ "name": "a_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_3", "role": "ce1" }} , 
 	{ "name": "a_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_3", "role": "q1" }} , 
 	{ "name": "a_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_4", "role": "address0" }} , 
 	{ "name": "a_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_4", "role": "ce0" }} , 
 	{ "name": "a_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_4", "role": "q0" }} , 
 	{ "name": "a_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_4", "role": "address1" }} , 
 	{ "name": "a_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_4", "role": "ce1" }} , 
 	{ "name": "a_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_4", "role": "q1" }} , 
 	{ "name": "a_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_5", "role": "address0" }} , 
 	{ "name": "a_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_5", "role": "ce0" }} , 
 	{ "name": "a_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_5", "role": "q0" }} , 
 	{ "name": "a_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_5", "role": "address1" }} , 
 	{ "name": "a_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_5", "role": "ce1" }} , 
 	{ "name": "a_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_5", "role": "q1" }} , 
 	{ "name": "a_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_6", "role": "address0" }} , 
 	{ "name": "a_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_6", "role": "ce0" }} , 
 	{ "name": "a_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_6", "role": "q0" }} , 
 	{ "name": "a_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_6", "role": "address1" }} , 
 	{ "name": "a_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_6", "role": "ce1" }} , 
 	{ "name": "a_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_6", "role": "q1" }} , 
 	{ "name": "a_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_7", "role": "address0" }} , 
 	{ "name": "a_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_7", "role": "ce0" }} , 
 	{ "name": "a_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_7", "role": "q0" }} , 
 	{ "name": "a_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_7", "role": "address1" }} , 
 	{ "name": "a_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_7", "role": "ce1" }} , 
 	{ "name": "a_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_7", "role": "q1" }} , 
 	{ "name": "a_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_8", "role": "address0" }} , 
 	{ "name": "a_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_8", "role": "ce0" }} , 
 	{ "name": "a_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_8", "role": "q0" }} , 
 	{ "name": "a_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_8", "role": "address1" }} , 
 	{ "name": "a_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_8", "role": "ce1" }} , 
 	{ "name": "a_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_8", "role": "q1" }} , 
 	{ "name": "a_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_9", "role": "address0" }} , 
 	{ "name": "a_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_9", "role": "ce0" }} , 
 	{ "name": "a_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_9", "role": "q0" }} , 
 	{ "name": "a_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_9", "role": "address1" }} , 
 	{ "name": "a_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_9", "role": "ce1" }} , 
 	{ "name": "a_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_9", "role": "q1" }} , 
 	{ "name": "a_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_10", "role": "address0" }} , 
 	{ "name": "a_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_10", "role": "ce0" }} , 
 	{ "name": "a_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_10", "role": "q0" }} , 
 	{ "name": "a_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_10", "role": "address1" }} , 
 	{ "name": "a_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_10", "role": "ce1" }} , 
 	{ "name": "a_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_10", "role": "q1" }} , 
 	{ "name": "a_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_11", "role": "address0" }} , 
 	{ "name": "a_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_11", "role": "ce0" }} , 
 	{ "name": "a_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_11", "role": "q0" }} , 
 	{ "name": "a_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_11", "role": "address1" }} , 
 	{ "name": "a_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_11", "role": "ce1" }} , 
 	{ "name": "a_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_11", "role": "q1" }} , 
 	{ "name": "a_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_12", "role": "address0" }} , 
 	{ "name": "a_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_12", "role": "ce0" }} , 
 	{ "name": "a_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_12", "role": "q0" }} , 
 	{ "name": "a_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "a_12", "role": "address1" }} , 
 	{ "name": "a_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_12", "role": "ce1" }} , 
 	{ "name": "a_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_12", "role": "q1" }} , 
 	{ "name": "b_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_0", "role": "address0" }} , 
 	{ "name": "b_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_0", "role": "ce0" }} , 
 	{ "name": "b_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_0", "role": "q0" }} , 
 	{ "name": "b_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_0", "role": "address1" }} , 
 	{ "name": "b_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_0", "role": "ce1" }} , 
 	{ "name": "b_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_0", "role": "q1" }} , 
 	{ "name": "b_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_1", "role": "address0" }} , 
 	{ "name": "b_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_1", "role": "ce0" }} , 
 	{ "name": "b_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_1", "role": "q0" }} , 
 	{ "name": "b_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_1", "role": "address1" }} , 
 	{ "name": "b_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_1", "role": "ce1" }} , 
 	{ "name": "b_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_1", "role": "q1" }} , 
 	{ "name": "b_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_2", "role": "address0" }} , 
 	{ "name": "b_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_2", "role": "ce0" }} , 
 	{ "name": "b_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_2", "role": "q0" }} , 
 	{ "name": "b_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_2", "role": "address1" }} , 
 	{ "name": "b_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_2", "role": "ce1" }} , 
 	{ "name": "b_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_2", "role": "q1" }} , 
 	{ "name": "b_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_3", "role": "address0" }} , 
 	{ "name": "b_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_3", "role": "ce0" }} , 
 	{ "name": "b_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_3", "role": "q0" }} , 
 	{ "name": "b_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_3", "role": "address1" }} , 
 	{ "name": "b_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_3", "role": "ce1" }} , 
 	{ "name": "b_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_3", "role": "q1" }} , 
 	{ "name": "b_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_4", "role": "address0" }} , 
 	{ "name": "b_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_4", "role": "ce0" }} , 
 	{ "name": "b_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_4", "role": "q0" }} , 
 	{ "name": "b_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_4", "role": "address1" }} , 
 	{ "name": "b_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_4", "role": "ce1" }} , 
 	{ "name": "b_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_4", "role": "q1" }} , 
 	{ "name": "b_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_5", "role": "address0" }} , 
 	{ "name": "b_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_5", "role": "ce0" }} , 
 	{ "name": "b_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_5", "role": "q0" }} , 
 	{ "name": "b_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_5", "role": "address1" }} , 
 	{ "name": "b_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_5", "role": "ce1" }} , 
 	{ "name": "b_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_5", "role": "q1" }} , 
 	{ "name": "b_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_6", "role": "address0" }} , 
 	{ "name": "b_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_6", "role": "ce0" }} , 
 	{ "name": "b_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_6", "role": "q0" }} , 
 	{ "name": "b_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_6", "role": "address1" }} , 
 	{ "name": "b_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_6", "role": "ce1" }} , 
 	{ "name": "b_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_6", "role": "q1" }} , 
 	{ "name": "b_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_7", "role": "address0" }} , 
 	{ "name": "b_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_7", "role": "ce0" }} , 
 	{ "name": "b_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_7", "role": "q0" }} , 
 	{ "name": "b_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_7", "role": "address1" }} , 
 	{ "name": "b_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_7", "role": "ce1" }} , 
 	{ "name": "b_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_7", "role": "q1" }} , 
 	{ "name": "b_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_8", "role": "address0" }} , 
 	{ "name": "b_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_8", "role": "ce0" }} , 
 	{ "name": "b_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_8", "role": "q0" }} , 
 	{ "name": "b_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_8", "role": "address1" }} , 
 	{ "name": "b_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_8", "role": "ce1" }} , 
 	{ "name": "b_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_8", "role": "q1" }} , 
 	{ "name": "b_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_9", "role": "address0" }} , 
 	{ "name": "b_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_9", "role": "ce0" }} , 
 	{ "name": "b_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_9", "role": "q0" }} , 
 	{ "name": "b_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_9", "role": "address1" }} , 
 	{ "name": "b_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_9", "role": "ce1" }} , 
 	{ "name": "b_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_9", "role": "q1" }} , 
 	{ "name": "b_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_10", "role": "address0" }} , 
 	{ "name": "b_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_10", "role": "ce0" }} , 
 	{ "name": "b_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_10", "role": "q0" }} , 
 	{ "name": "b_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_10", "role": "address1" }} , 
 	{ "name": "b_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_10", "role": "ce1" }} , 
 	{ "name": "b_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_10", "role": "q1" }} , 
 	{ "name": "b_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_11", "role": "address0" }} , 
 	{ "name": "b_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_11", "role": "ce0" }} , 
 	{ "name": "b_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_11", "role": "q0" }} , 
 	{ "name": "b_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_11", "role": "address1" }} , 
 	{ "name": "b_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_11", "role": "ce1" }} , 
 	{ "name": "b_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_11", "role": "q1" }} , 
 	{ "name": "b_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_12", "role": "address0" }} , 
 	{ "name": "b_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_12", "role": "ce0" }} , 
 	{ "name": "b_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_12", "role": "q0" }} , 
 	{ "name": "b_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "b_12", "role": "address1" }} , 
 	{ "name": "b_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_12", "role": "ce1" }} , 
 	{ "name": "b_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_12", "role": "q1" }} , 
 	{ "name": "out_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_r", "role": "address0" }} , 
 	{ "name": "out_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ce0" }} , 
 	{ "name": "out_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "we0" }} , 
 	{ "name": "out_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_r", "role": "d0" }} , 
 	{ "name": "out_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_r", "role": "address1" }} , 
 	{ "name": "out_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ce1" }} , 
 	{ "name": "out_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "we1" }} , 
 	{ "name": "out_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_r", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52"],
		"CDFG" : "mmult_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "816", "EstimateLatencyMax" : "816",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U1", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U2", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U3", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U4", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U5", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U6", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U7", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U8", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U9", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U10", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U11", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U12", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U13", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U14", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U15", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U16", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U17", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U18", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U19", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U20", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U21", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U22", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U23", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U24", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U25", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U26", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U27", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U28", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U29", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U30", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U31", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U32", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U33", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U34", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U35", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U36", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U37", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U38", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U39", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U40", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U41", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U42", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U43", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U44", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U45", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U46", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U47", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U48", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U49", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U50", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U51", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U52", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mmult_hw {
		a_0 {Type I LastRead 3 FirstWrite -1}
		a_1 {Type I LastRead 3 FirstWrite -1}
		a_2 {Type I LastRead 3 FirstWrite -1}
		a_3 {Type I LastRead 3 FirstWrite -1}
		a_4 {Type I LastRead 3 FirstWrite -1}
		a_5 {Type I LastRead 3 FirstWrite -1}
		a_6 {Type I LastRead 3 FirstWrite -1}
		a_7 {Type I LastRead 3 FirstWrite -1}
		a_8 {Type I LastRead 3 FirstWrite -1}
		a_9 {Type I LastRead 3 FirstWrite -1}
		a_10 {Type I LastRead 3 FirstWrite -1}
		a_11 {Type I LastRead 3 FirstWrite -1}
		a_12 {Type I LastRead 3 FirstWrite -1}
		b_0 {Type I LastRead 27 FirstWrite -1}
		b_1 {Type I LastRead 27 FirstWrite -1}
		b_2 {Type I LastRead 27 FirstWrite -1}
		b_3 {Type I LastRead 27 FirstWrite -1}
		b_4 {Type I LastRead 27 FirstWrite -1}
		b_5 {Type I LastRead 27 FirstWrite -1}
		b_6 {Type I LastRead 27 FirstWrite -1}
		b_7 {Type I LastRead 27 FirstWrite -1}
		b_8 {Type I LastRead 27 FirstWrite -1}
		b_9 {Type I LastRead 27 FirstWrite -1}
		b_10 {Type I LastRead 27 FirstWrite -1}
		b_11 {Type I LastRead 27 FirstWrite -1}
		b_12 {Type I LastRead 27 FirstWrite -1}
		out_r {Type O LastRead -1 FirstWrite 153}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "816", "Max" : "816"}
	, {"Name" : "Interval", "Min" : "817", "Max" : "817"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	a_0 { ap_memory {  { a_0_address0 mem_address 1 6 }  { a_0_ce0 mem_ce 1 1 }  { a_0_q0 mem_dout 0 16 }  { a_0_address1 MemPortADDR2 1 6 }  { a_0_ce1 MemPortCE2 1 1 }  { a_0_q1 MemPortDOUT2 0 16 } } }
	a_1 { ap_memory {  { a_1_address0 mem_address 1 6 }  { a_1_ce0 mem_ce 1 1 }  { a_1_q0 mem_dout 0 16 }  { a_1_address1 MemPortADDR2 1 6 }  { a_1_ce1 MemPortCE2 1 1 }  { a_1_q1 MemPortDOUT2 0 16 } } }
	a_2 { ap_memory {  { a_2_address0 mem_address 1 6 }  { a_2_ce0 mem_ce 1 1 }  { a_2_q0 mem_dout 0 16 }  { a_2_address1 MemPortADDR2 1 6 }  { a_2_ce1 MemPortCE2 1 1 }  { a_2_q1 MemPortDOUT2 0 16 } } }
	a_3 { ap_memory {  { a_3_address0 mem_address 1 6 }  { a_3_ce0 mem_ce 1 1 }  { a_3_q0 mem_dout 0 16 }  { a_3_address1 MemPortADDR2 1 6 }  { a_3_ce1 MemPortCE2 1 1 }  { a_3_q1 MemPortDOUT2 0 16 } } }
	a_4 { ap_memory {  { a_4_address0 mem_address 1 6 }  { a_4_ce0 mem_ce 1 1 }  { a_4_q0 mem_dout 0 16 }  { a_4_address1 MemPortADDR2 1 6 }  { a_4_ce1 MemPortCE2 1 1 }  { a_4_q1 MemPortDOUT2 0 16 } } }
	a_5 { ap_memory {  { a_5_address0 mem_address 1 6 }  { a_5_ce0 mem_ce 1 1 }  { a_5_q0 mem_dout 0 16 }  { a_5_address1 MemPortADDR2 1 6 }  { a_5_ce1 MemPortCE2 1 1 }  { a_5_q1 MemPortDOUT2 0 16 } } }
	a_6 { ap_memory {  { a_6_address0 mem_address 1 6 }  { a_6_ce0 mem_ce 1 1 }  { a_6_q0 mem_dout 0 16 }  { a_6_address1 MemPortADDR2 1 6 }  { a_6_ce1 MemPortCE2 1 1 }  { a_6_q1 MemPortDOUT2 0 16 } } }
	a_7 { ap_memory {  { a_7_address0 mem_address 1 6 }  { a_7_ce0 mem_ce 1 1 }  { a_7_q0 mem_dout 0 16 }  { a_7_address1 MemPortADDR2 1 6 }  { a_7_ce1 MemPortCE2 1 1 }  { a_7_q1 MemPortDOUT2 0 16 } } }
	a_8 { ap_memory {  { a_8_address0 mem_address 1 6 }  { a_8_ce0 mem_ce 1 1 }  { a_8_q0 mem_dout 0 16 }  { a_8_address1 MemPortADDR2 1 6 }  { a_8_ce1 MemPortCE2 1 1 }  { a_8_q1 MemPortDOUT2 0 16 } } }
	a_9 { ap_memory {  { a_9_address0 mem_address 1 6 }  { a_9_ce0 mem_ce 1 1 }  { a_9_q0 mem_dout 0 16 }  { a_9_address1 MemPortADDR2 1 6 }  { a_9_ce1 MemPortCE2 1 1 }  { a_9_q1 MemPortDOUT2 0 16 } } }
	a_10 { ap_memory {  { a_10_address0 mem_address 1 6 }  { a_10_ce0 mem_ce 1 1 }  { a_10_q0 mem_dout 0 16 }  { a_10_address1 MemPortADDR2 1 6 }  { a_10_ce1 MemPortCE2 1 1 }  { a_10_q1 MemPortDOUT2 0 16 } } }
	a_11 { ap_memory {  { a_11_address0 mem_address 1 6 }  { a_11_ce0 mem_ce 1 1 }  { a_11_q0 mem_dout 0 16 }  { a_11_address1 MemPortADDR2 1 6 }  { a_11_ce1 MemPortCE2 1 1 }  { a_11_q1 MemPortDOUT2 0 16 } } }
	a_12 { ap_memory {  { a_12_address0 mem_address 1 6 }  { a_12_ce0 mem_ce 1 1 }  { a_12_q0 mem_dout 0 16 }  { a_12_address1 MemPortADDR2 1 6 }  { a_12_ce1 MemPortCE2 1 1 }  { a_12_q1 MemPortDOUT2 0 16 } } }
	b_0 { ap_memory {  { b_0_address0 mem_address 1 6 }  { b_0_ce0 mem_ce 1 1 }  { b_0_q0 mem_dout 0 16 }  { b_0_address1 MemPortADDR2 1 6 }  { b_0_ce1 MemPortCE2 1 1 }  { b_0_q1 MemPortDOUT2 0 16 } } }
	b_1 { ap_memory {  { b_1_address0 mem_address 1 6 }  { b_1_ce0 mem_ce 1 1 }  { b_1_q0 mem_dout 0 16 }  { b_1_address1 MemPortADDR2 1 6 }  { b_1_ce1 MemPortCE2 1 1 }  { b_1_q1 MemPortDOUT2 0 16 } } }
	b_2 { ap_memory {  { b_2_address0 mem_address 1 6 }  { b_2_ce0 mem_ce 1 1 }  { b_2_q0 mem_dout 0 16 }  { b_2_address1 MemPortADDR2 1 6 }  { b_2_ce1 MemPortCE2 1 1 }  { b_2_q1 MemPortDOUT2 0 16 } } }
	b_3 { ap_memory {  { b_3_address0 mem_address 1 6 }  { b_3_ce0 mem_ce 1 1 }  { b_3_q0 mem_dout 0 16 }  { b_3_address1 MemPortADDR2 1 6 }  { b_3_ce1 MemPortCE2 1 1 }  { b_3_q1 MemPortDOUT2 0 16 } } }
	b_4 { ap_memory {  { b_4_address0 mem_address 1 6 }  { b_4_ce0 mem_ce 1 1 }  { b_4_q0 mem_dout 0 16 }  { b_4_address1 MemPortADDR2 1 6 }  { b_4_ce1 MemPortCE2 1 1 }  { b_4_q1 MemPortDOUT2 0 16 } } }
	b_5 { ap_memory {  { b_5_address0 mem_address 1 6 }  { b_5_ce0 mem_ce 1 1 }  { b_5_q0 mem_dout 0 16 }  { b_5_address1 MemPortADDR2 1 6 }  { b_5_ce1 MemPortCE2 1 1 }  { b_5_q1 MemPortDOUT2 0 16 } } }
	b_6 { ap_memory {  { b_6_address0 mem_address 1 6 }  { b_6_ce0 mem_ce 1 1 }  { b_6_q0 mem_dout 0 16 }  { b_6_address1 MemPortADDR2 1 6 }  { b_6_ce1 MemPortCE2 1 1 }  { b_6_q1 MemPortDOUT2 0 16 } } }
	b_7 { ap_memory {  { b_7_address0 mem_address 1 6 }  { b_7_ce0 mem_ce 1 1 }  { b_7_q0 mem_dout 0 16 }  { b_7_address1 MemPortADDR2 1 6 }  { b_7_ce1 MemPortCE2 1 1 }  { b_7_q1 MemPortDOUT2 0 16 } } }
	b_8 { ap_memory {  { b_8_address0 mem_address 1 6 }  { b_8_ce0 mem_ce 1 1 }  { b_8_q0 mem_dout 0 16 }  { b_8_address1 MemPortADDR2 1 6 }  { b_8_ce1 MemPortCE2 1 1 }  { b_8_q1 MemPortDOUT2 0 16 } } }
	b_9 { ap_memory {  { b_9_address0 mem_address 1 6 }  { b_9_ce0 mem_ce 1 1 }  { b_9_q0 mem_dout 0 16 }  { b_9_address1 MemPortADDR2 1 6 }  { b_9_ce1 MemPortCE2 1 1 }  { b_9_q1 MemPortDOUT2 0 16 } } }
	b_10 { ap_memory {  { b_10_address0 mem_address 1 6 }  { b_10_ce0 mem_ce 1 1 }  { b_10_q0 mem_dout 0 16 }  { b_10_address1 MemPortADDR2 1 6 }  { b_10_ce1 MemPortCE2 1 1 }  { b_10_q1 MemPortDOUT2 0 16 } } }
	b_11 { ap_memory {  { b_11_address0 mem_address 1 6 }  { b_11_ce0 mem_ce 1 1 }  { b_11_q0 mem_dout 0 16 }  { b_11_address1 MemPortADDR2 1 6 }  { b_11_ce1 MemPortCE2 1 1 }  { b_11_q1 MemPortDOUT2 0 16 } } }
	b_12 { ap_memory {  { b_12_address0 mem_address 1 6 }  { b_12_ce0 mem_ce 1 1 }  { b_12_q0 mem_dout 0 16 }  { b_12_address1 MemPortADDR2 1 6 }  { b_12_ce1 MemPortCE2 1 1 }  { b_12_q1 MemPortDOUT2 0 16 } } }
	out_r { ap_memory {  { out_r_address0 mem_address 1 10 }  { out_r_ce0 mem_ce 1 1 }  { out_r_we0 mem_we 1 1 }  { out_r_d0 mem_din 1 16 }  { out_r_address1 MemPortADDR2 1 10 }  { out_r_ce1 MemPortCE2 1 1 }  { out_r_we1 MemPortWE2 1 1 }  { out_r_d1 MemPortDIN2 1 16 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
