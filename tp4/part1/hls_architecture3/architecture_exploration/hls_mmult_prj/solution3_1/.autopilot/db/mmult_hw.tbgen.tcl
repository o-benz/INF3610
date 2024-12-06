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
	{ a_0 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_1 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_2 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_3 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_4 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_5 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_6 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_7 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_8 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_9 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_10 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_11 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_12 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_13 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_14 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_15 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_16 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_17 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_18 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_19 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_20 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_21 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_22 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_23 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_24 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ a_25 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_0 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_1 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_2 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_3 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_4 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_5 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_6 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_7 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_8 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_9 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_10 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_11 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_12 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_13 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_14 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_15 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_16 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_17 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_18 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_19 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_20 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_21 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_22 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_23 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_24 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ b_25 int 16 regular {array 26 { 1 1 } 1 1 }  }
	{ out_r int 16 regular {array 676 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_0", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 0,"up" : 0,"step" : 2}]}]}]} , 
 	{ "Name" : "a_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 1,"up" : 1,"step" : 2}]}]}]} , 
 	{ "Name" : "a_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 2,"up" : 2,"step" : 2}]}]}]} , 
 	{ "Name" : "a_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 3,"up" : 3,"step" : 2}]}]}]} , 
 	{ "Name" : "a_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 4,"up" : 4,"step" : 2}]}]}]} , 
 	{ "Name" : "a_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 5,"up" : 5,"step" : 2}]}]}]} , 
 	{ "Name" : "a_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 6,"up" : 6,"step" : 2}]}]}]} , 
 	{ "Name" : "a_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 7,"up" : 7,"step" : 2}]}]}]} , 
 	{ "Name" : "a_8", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 8,"up" : 8,"step" : 2}]}]}]} , 
 	{ "Name" : "a_9", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 9,"up" : 9,"step" : 2}]}]}]} , 
 	{ "Name" : "a_10", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 10,"up" : 10,"step" : 2}]}]}]} , 
 	{ "Name" : "a_11", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 11,"up" : 11,"step" : 2}]}]}]} , 
 	{ "Name" : "a_12", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 12,"up" : 12,"step" : 2}]}]}]} , 
 	{ "Name" : "a_13", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 13,"up" : 13,"step" : 2}]}]}]} , 
 	{ "Name" : "a_14", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 14,"up" : 14,"step" : 2}]}]}]} , 
 	{ "Name" : "a_15", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 15,"up" : 15,"step" : 2}]}]}]} , 
 	{ "Name" : "a_16", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 16,"up" : 16,"step" : 2}]}]}]} , 
 	{ "Name" : "a_17", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 17,"up" : 17,"step" : 2}]}]}]} , 
 	{ "Name" : "a_18", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 18,"up" : 18,"step" : 2}]}]}]} , 
 	{ "Name" : "a_19", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 19,"up" : 19,"step" : 2}]}]}]} , 
 	{ "Name" : "a_20", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 20,"up" : 20,"step" : 2}]}]}]} , 
 	{ "Name" : "a_21", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 21,"up" : 21,"step" : 2}]}]}]} , 
 	{ "Name" : "a_22", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 22,"up" : 22,"step" : 2}]}]}]} , 
 	{ "Name" : "a_23", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 23,"up" : 23,"step" : 2}]}]}]} , 
 	{ "Name" : "a_24", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 24,"up" : 24,"step" : 2}]}]}]} , 
 	{ "Name" : "a_25", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "a","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 25,"up" : 25,"step" : 2}]}]}]} , 
 	{ "Name" : "b_0", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_1", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_2", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_3", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_4", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_5", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_6", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_7", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_8", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_9", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_10", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_11", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_12", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_13", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_14", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_15", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_16", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_17", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_18", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_19", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_20", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_21", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_22", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_23", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_24", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 24,"up" : 24,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "b_25", "interface" : "memory", "bitwidth" : 16, "direction" : "READONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "b","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 25,"up" : 25,"step" : 2},{"low" : 0,"up" : 25,"step" : 1}]}]}]} , 
 	{ "Name" : "out_r", "interface" : "memory", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "out","cData": "half","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 25,"step" : 1},{"low" : 0,"up" : 25,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 326
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_0_address0 sc_out sc_lv 5 signal 0 } 
	{ a_0_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_0_q0 sc_in sc_lv 16 signal 0 } 
	{ a_0_address1 sc_out sc_lv 5 signal 0 } 
	{ a_0_ce1 sc_out sc_logic 1 signal 0 } 
	{ a_0_q1 sc_in sc_lv 16 signal 0 } 
	{ a_1_address0 sc_out sc_lv 5 signal 1 } 
	{ a_1_ce0 sc_out sc_logic 1 signal 1 } 
	{ a_1_q0 sc_in sc_lv 16 signal 1 } 
	{ a_1_address1 sc_out sc_lv 5 signal 1 } 
	{ a_1_ce1 sc_out sc_logic 1 signal 1 } 
	{ a_1_q1 sc_in sc_lv 16 signal 1 } 
	{ a_2_address0 sc_out sc_lv 5 signal 2 } 
	{ a_2_ce0 sc_out sc_logic 1 signal 2 } 
	{ a_2_q0 sc_in sc_lv 16 signal 2 } 
	{ a_2_address1 sc_out sc_lv 5 signal 2 } 
	{ a_2_ce1 sc_out sc_logic 1 signal 2 } 
	{ a_2_q1 sc_in sc_lv 16 signal 2 } 
	{ a_3_address0 sc_out sc_lv 5 signal 3 } 
	{ a_3_ce0 sc_out sc_logic 1 signal 3 } 
	{ a_3_q0 sc_in sc_lv 16 signal 3 } 
	{ a_3_address1 sc_out sc_lv 5 signal 3 } 
	{ a_3_ce1 sc_out sc_logic 1 signal 3 } 
	{ a_3_q1 sc_in sc_lv 16 signal 3 } 
	{ a_4_address0 sc_out sc_lv 5 signal 4 } 
	{ a_4_ce0 sc_out sc_logic 1 signal 4 } 
	{ a_4_q0 sc_in sc_lv 16 signal 4 } 
	{ a_4_address1 sc_out sc_lv 5 signal 4 } 
	{ a_4_ce1 sc_out sc_logic 1 signal 4 } 
	{ a_4_q1 sc_in sc_lv 16 signal 4 } 
	{ a_5_address0 sc_out sc_lv 5 signal 5 } 
	{ a_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ a_5_q0 sc_in sc_lv 16 signal 5 } 
	{ a_5_address1 sc_out sc_lv 5 signal 5 } 
	{ a_5_ce1 sc_out sc_logic 1 signal 5 } 
	{ a_5_q1 sc_in sc_lv 16 signal 5 } 
	{ a_6_address0 sc_out sc_lv 5 signal 6 } 
	{ a_6_ce0 sc_out sc_logic 1 signal 6 } 
	{ a_6_q0 sc_in sc_lv 16 signal 6 } 
	{ a_6_address1 sc_out sc_lv 5 signal 6 } 
	{ a_6_ce1 sc_out sc_logic 1 signal 6 } 
	{ a_6_q1 sc_in sc_lv 16 signal 6 } 
	{ a_7_address0 sc_out sc_lv 5 signal 7 } 
	{ a_7_ce0 sc_out sc_logic 1 signal 7 } 
	{ a_7_q0 sc_in sc_lv 16 signal 7 } 
	{ a_7_address1 sc_out sc_lv 5 signal 7 } 
	{ a_7_ce1 sc_out sc_logic 1 signal 7 } 
	{ a_7_q1 sc_in sc_lv 16 signal 7 } 
	{ a_8_address0 sc_out sc_lv 5 signal 8 } 
	{ a_8_ce0 sc_out sc_logic 1 signal 8 } 
	{ a_8_q0 sc_in sc_lv 16 signal 8 } 
	{ a_8_address1 sc_out sc_lv 5 signal 8 } 
	{ a_8_ce1 sc_out sc_logic 1 signal 8 } 
	{ a_8_q1 sc_in sc_lv 16 signal 8 } 
	{ a_9_address0 sc_out sc_lv 5 signal 9 } 
	{ a_9_ce0 sc_out sc_logic 1 signal 9 } 
	{ a_9_q0 sc_in sc_lv 16 signal 9 } 
	{ a_9_address1 sc_out sc_lv 5 signal 9 } 
	{ a_9_ce1 sc_out sc_logic 1 signal 9 } 
	{ a_9_q1 sc_in sc_lv 16 signal 9 } 
	{ a_10_address0 sc_out sc_lv 5 signal 10 } 
	{ a_10_ce0 sc_out sc_logic 1 signal 10 } 
	{ a_10_q0 sc_in sc_lv 16 signal 10 } 
	{ a_10_address1 sc_out sc_lv 5 signal 10 } 
	{ a_10_ce1 sc_out sc_logic 1 signal 10 } 
	{ a_10_q1 sc_in sc_lv 16 signal 10 } 
	{ a_11_address0 sc_out sc_lv 5 signal 11 } 
	{ a_11_ce0 sc_out sc_logic 1 signal 11 } 
	{ a_11_q0 sc_in sc_lv 16 signal 11 } 
	{ a_11_address1 sc_out sc_lv 5 signal 11 } 
	{ a_11_ce1 sc_out sc_logic 1 signal 11 } 
	{ a_11_q1 sc_in sc_lv 16 signal 11 } 
	{ a_12_address0 sc_out sc_lv 5 signal 12 } 
	{ a_12_ce0 sc_out sc_logic 1 signal 12 } 
	{ a_12_q0 sc_in sc_lv 16 signal 12 } 
	{ a_12_address1 sc_out sc_lv 5 signal 12 } 
	{ a_12_ce1 sc_out sc_logic 1 signal 12 } 
	{ a_12_q1 sc_in sc_lv 16 signal 12 } 
	{ a_13_address0 sc_out sc_lv 5 signal 13 } 
	{ a_13_ce0 sc_out sc_logic 1 signal 13 } 
	{ a_13_q0 sc_in sc_lv 16 signal 13 } 
	{ a_13_address1 sc_out sc_lv 5 signal 13 } 
	{ a_13_ce1 sc_out sc_logic 1 signal 13 } 
	{ a_13_q1 sc_in sc_lv 16 signal 13 } 
	{ a_14_address0 sc_out sc_lv 5 signal 14 } 
	{ a_14_ce0 sc_out sc_logic 1 signal 14 } 
	{ a_14_q0 sc_in sc_lv 16 signal 14 } 
	{ a_14_address1 sc_out sc_lv 5 signal 14 } 
	{ a_14_ce1 sc_out sc_logic 1 signal 14 } 
	{ a_14_q1 sc_in sc_lv 16 signal 14 } 
	{ a_15_address0 sc_out sc_lv 5 signal 15 } 
	{ a_15_ce0 sc_out sc_logic 1 signal 15 } 
	{ a_15_q0 sc_in sc_lv 16 signal 15 } 
	{ a_15_address1 sc_out sc_lv 5 signal 15 } 
	{ a_15_ce1 sc_out sc_logic 1 signal 15 } 
	{ a_15_q1 sc_in sc_lv 16 signal 15 } 
	{ a_16_address0 sc_out sc_lv 5 signal 16 } 
	{ a_16_ce0 sc_out sc_logic 1 signal 16 } 
	{ a_16_q0 sc_in sc_lv 16 signal 16 } 
	{ a_16_address1 sc_out sc_lv 5 signal 16 } 
	{ a_16_ce1 sc_out sc_logic 1 signal 16 } 
	{ a_16_q1 sc_in sc_lv 16 signal 16 } 
	{ a_17_address0 sc_out sc_lv 5 signal 17 } 
	{ a_17_ce0 sc_out sc_logic 1 signal 17 } 
	{ a_17_q0 sc_in sc_lv 16 signal 17 } 
	{ a_17_address1 sc_out sc_lv 5 signal 17 } 
	{ a_17_ce1 sc_out sc_logic 1 signal 17 } 
	{ a_17_q1 sc_in sc_lv 16 signal 17 } 
	{ a_18_address0 sc_out sc_lv 5 signal 18 } 
	{ a_18_ce0 sc_out sc_logic 1 signal 18 } 
	{ a_18_q0 sc_in sc_lv 16 signal 18 } 
	{ a_18_address1 sc_out sc_lv 5 signal 18 } 
	{ a_18_ce1 sc_out sc_logic 1 signal 18 } 
	{ a_18_q1 sc_in sc_lv 16 signal 18 } 
	{ a_19_address0 sc_out sc_lv 5 signal 19 } 
	{ a_19_ce0 sc_out sc_logic 1 signal 19 } 
	{ a_19_q0 sc_in sc_lv 16 signal 19 } 
	{ a_19_address1 sc_out sc_lv 5 signal 19 } 
	{ a_19_ce1 sc_out sc_logic 1 signal 19 } 
	{ a_19_q1 sc_in sc_lv 16 signal 19 } 
	{ a_20_address0 sc_out sc_lv 5 signal 20 } 
	{ a_20_ce0 sc_out sc_logic 1 signal 20 } 
	{ a_20_q0 sc_in sc_lv 16 signal 20 } 
	{ a_20_address1 sc_out sc_lv 5 signal 20 } 
	{ a_20_ce1 sc_out sc_logic 1 signal 20 } 
	{ a_20_q1 sc_in sc_lv 16 signal 20 } 
	{ a_21_address0 sc_out sc_lv 5 signal 21 } 
	{ a_21_ce0 sc_out sc_logic 1 signal 21 } 
	{ a_21_q0 sc_in sc_lv 16 signal 21 } 
	{ a_21_address1 sc_out sc_lv 5 signal 21 } 
	{ a_21_ce1 sc_out sc_logic 1 signal 21 } 
	{ a_21_q1 sc_in sc_lv 16 signal 21 } 
	{ a_22_address0 sc_out sc_lv 5 signal 22 } 
	{ a_22_ce0 sc_out sc_logic 1 signal 22 } 
	{ a_22_q0 sc_in sc_lv 16 signal 22 } 
	{ a_22_address1 sc_out sc_lv 5 signal 22 } 
	{ a_22_ce1 sc_out sc_logic 1 signal 22 } 
	{ a_22_q1 sc_in sc_lv 16 signal 22 } 
	{ a_23_address0 sc_out sc_lv 5 signal 23 } 
	{ a_23_ce0 sc_out sc_logic 1 signal 23 } 
	{ a_23_q0 sc_in sc_lv 16 signal 23 } 
	{ a_23_address1 sc_out sc_lv 5 signal 23 } 
	{ a_23_ce1 sc_out sc_logic 1 signal 23 } 
	{ a_23_q1 sc_in sc_lv 16 signal 23 } 
	{ a_24_address0 sc_out sc_lv 5 signal 24 } 
	{ a_24_ce0 sc_out sc_logic 1 signal 24 } 
	{ a_24_q0 sc_in sc_lv 16 signal 24 } 
	{ a_24_address1 sc_out sc_lv 5 signal 24 } 
	{ a_24_ce1 sc_out sc_logic 1 signal 24 } 
	{ a_24_q1 sc_in sc_lv 16 signal 24 } 
	{ a_25_address0 sc_out sc_lv 5 signal 25 } 
	{ a_25_ce0 sc_out sc_logic 1 signal 25 } 
	{ a_25_q0 sc_in sc_lv 16 signal 25 } 
	{ a_25_address1 sc_out sc_lv 5 signal 25 } 
	{ a_25_ce1 sc_out sc_logic 1 signal 25 } 
	{ a_25_q1 sc_in sc_lv 16 signal 25 } 
	{ b_0_address0 sc_out sc_lv 5 signal 26 } 
	{ b_0_ce0 sc_out sc_logic 1 signal 26 } 
	{ b_0_q0 sc_in sc_lv 16 signal 26 } 
	{ b_0_address1 sc_out sc_lv 5 signal 26 } 
	{ b_0_ce1 sc_out sc_logic 1 signal 26 } 
	{ b_0_q1 sc_in sc_lv 16 signal 26 } 
	{ b_1_address0 sc_out sc_lv 5 signal 27 } 
	{ b_1_ce0 sc_out sc_logic 1 signal 27 } 
	{ b_1_q0 sc_in sc_lv 16 signal 27 } 
	{ b_1_address1 sc_out sc_lv 5 signal 27 } 
	{ b_1_ce1 sc_out sc_logic 1 signal 27 } 
	{ b_1_q1 sc_in sc_lv 16 signal 27 } 
	{ b_2_address0 sc_out sc_lv 5 signal 28 } 
	{ b_2_ce0 sc_out sc_logic 1 signal 28 } 
	{ b_2_q0 sc_in sc_lv 16 signal 28 } 
	{ b_2_address1 sc_out sc_lv 5 signal 28 } 
	{ b_2_ce1 sc_out sc_logic 1 signal 28 } 
	{ b_2_q1 sc_in sc_lv 16 signal 28 } 
	{ b_3_address0 sc_out sc_lv 5 signal 29 } 
	{ b_3_ce0 sc_out sc_logic 1 signal 29 } 
	{ b_3_q0 sc_in sc_lv 16 signal 29 } 
	{ b_3_address1 sc_out sc_lv 5 signal 29 } 
	{ b_3_ce1 sc_out sc_logic 1 signal 29 } 
	{ b_3_q1 sc_in sc_lv 16 signal 29 } 
	{ b_4_address0 sc_out sc_lv 5 signal 30 } 
	{ b_4_ce0 sc_out sc_logic 1 signal 30 } 
	{ b_4_q0 sc_in sc_lv 16 signal 30 } 
	{ b_4_address1 sc_out sc_lv 5 signal 30 } 
	{ b_4_ce1 sc_out sc_logic 1 signal 30 } 
	{ b_4_q1 sc_in sc_lv 16 signal 30 } 
	{ b_5_address0 sc_out sc_lv 5 signal 31 } 
	{ b_5_ce0 sc_out sc_logic 1 signal 31 } 
	{ b_5_q0 sc_in sc_lv 16 signal 31 } 
	{ b_5_address1 sc_out sc_lv 5 signal 31 } 
	{ b_5_ce1 sc_out sc_logic 1 signal 31 } 
	{ b_5_q1 sc_in sc_lv 16 signal 31 } 
	{ b_6_address0 sc_out sc_lv 5 signal 32 } 
	{ b_6_ce0 sc_out sc_logic 1 signal 32 } 
	{ b_6_q0 sc_in sc_lv 16 signal 32 } 
	{ b_6_address1 sc_out sc_lv 5 signal 32 } 
	{ b_6_ce1 sc_out sc_logic 1 signal 32 } 
	{ b_6_q1 sc_in sc_lv 16 signal 32 } 
	{ b_7_address0 sc_out sc_lv 5 signal 33 } 
	{ b_7_ce0 sc_out sc_logic 1 signal 33 } 
	{ b_7_q0 sc_in sc_lv 16 signal 33 } 
	{ b_7_address1 sc_out sc_lv 5 signal 33 } 
	{ b_7_ce1 sc_out sc_logic 1 signal 33 } 
	{ b_7_q1 sc_in sc_lv 16 signal 33 } 
	{ b_8_address0 sc_out sc_lv 5 signal 34 } 
	{ b_8_ce0 sc_out sc_logic 1 signal 34 } 
	{ b_8_q0 sc_in sc_lv 16 signal 34 } 
	{ b_8_address1 sc_out sc_lv 5 signal 34 } 
	{ b_8_ce1 sc_out sc_logic 1 signal 34 } 
	{ b_8_q1 sc_in sc_lv 16 signal 34 } 
	{ b_9_address0 sc_out sc_lv 5 signal 35 } 
	{ b_9_ce0 sc_out sc_logic 1 signal 35 } 
	{ b_9_q0 sc_in sc_lv 16 signal 35 } 
	{ b_9_address1 sc_out sc_lv 5 signal 35 } 
	{ b_9_ce1 sc_out sc_logic 1 signal 35 } 
	{ b_9_q1 sc_in sc_lv 16 signal 35 } 
	{ b_10_address0 sc_out sc_lv 5 signal 36 } 
	{ b_10_ce0 sc_out sc_logic 1 signal 36 } 
	{ b_10_q0 sc_in sc_lv 16 signal 36 } 
	{ b_10_address1 sc_out sc_lv 5 signal 36 } 
	{ b_10_ce1 sc_out sc_logic 1 signal 36 } 
	{ b_10_q1 sc_in sc_lv 16 signal 36 } 
	{ b_11_address0 sc_out sc_lv 5 signal 37 } 
	{ b_11_ce0 sc_out sc_logic 1 signal 37 } 
	{ b_11_q0 sc_in sc_lv 16 signal 37 } 
	{ b_11_address1 sc_out sc_lv 5 signal 37 } 
	{ b_11_ce1 sc_out sc_logic 1 signal 37 } 
	{ b_11_q1 sc_in sc_lv 16 signal 37 } 
	{ b_12_address0 sc_out sc_lv 5 signal 38 } 
	{ b_12_ce0 sc_out sc_logic 1 signal 38 } 
	{ b_12_q0 sc_in sc_lv 16 signal 38 } 
	{ b_12_address1 sc_out sc_lv 5 signal 38 } 
	{ b_12_ce1 sc_out sc_logic 1 signal 38 } 
	{ b_12_q1 sc_in sc_lv 16 signal 38 } 
	{ b_13_address0 sc_out sc_lv 5 signal 39 } 
	{ b_13_ce0 sc_out sc_logic 1 signal 39 } 
	{ b_13_q0 sc_in sc_lv 16 signal 39 } 
	{ b_13_address1 sc_out sc_lv 5 signal 39 } 
	{ b_13_ce1 sc_out sc_logic 1 signal 39 } 
	{ b_13_q1 sc_in sc_lv 16 signal 39 } 
	{ b_14_address0 sc_out sc_lv 5 signal 40 } 
	{ b_14_ce0 sc_out sc_logic 1 signal 40 } 
	{ b_14_q0 sc_in sc_lv 16 signal 40 } 
	{ b_14_address1 sc_out sc_lv 5 signal 40 } 
	{ b_14_ce1 sc_out sc_logic 1 signal 40 } 
	{ b_14_q1 sc_in sc_lv 16 signal 40 } 
	{ b_15_address0 sc_out sc_lv 5 signal 41 } 
	{ b_15_ce0 sc_out sc_logic 1 signal 41 } 
	{ b_15_q0 sc_in sc_lv 16 signal 41 } 
	{ b_15_address1 sc_out sc_lv 5 signal 41 } 
	{ b_15_ce1 sc_out sc_logic 1 signal 41 } 
	{ b_15_q1 sc_in sc_lv 16 signal 41 } 
	{ b_16_address0 sc_out sc_lv 5 signal 42 } 
	{ b_16_ce0 sc_out sc_logic 1 signal 42 } 
	{ b_16_q0 sc_in sc_lv 16 signal 42 } 
	{ b_16_address1 sc_out sc_lv 5 signal 42 } 
	{ b_16_ce1 sc_out sc_logic 1 signal 42 } 
	{ b_16_q1 sc_in sc_lv 16 signal 42 } 
	{ b_17_address0 sc_out sc_lv 5 signal 43 } 
	{ b_17_ce0 sc_out sc_logic 1 signal 43 } 
	{ b_17_q0 sc_in sc_lv 16 signal 43 } 
	{ b_17_address1 sc_out sc_lv 5 signal 43 } 
	{ b_17_ce1 sc_out sc_logic 1 signal 43 } 
	{ b_17_q1 sc_in sc_lv 16 signal 43 } 
	{ b_18_address0 sc_out sc_lv 5 signal 44 } 
	{ b_18_ce0 sc_out sc_logic 1 signal 44 } 
	{ b_18_q0 sc_in sc_lv 16 signal 44 } 
	{ b_18_address1 sc_out sc_lv 5 signal 44 } 
	{ b_18_ce1 sc_out sc_logic 1 signal 44 } 
	{ b_18_q1 sc_in sc_lv 16 signal 44 } 
	{ b_19_address0 sc_out sc_lv 5 signal 45 } 
	{ b_19_ce0 sc_out sc_logic 1 signal 45 } 
	{ b_19_q0 sc_in sc_lv 16 signal 45 } 
	{ b_19_address1 sc_out sc_lv 5 signal 45 } 
	{ b_19_ce1 sc_out sc_logic 1 signal 45 } 
	{ b_19_q1 sc_in sc_lv 16 signal 45 } 
	{ b_20_address0 sc_out sc_lv 5 signal 46 } 
	{ b_20_ce0 sc_out sc_logic 1 signal 46 } 
	{ b_20_q0 sc_in sc_lv 16 signal 46 } 
	{ b_20_address1 sc_out sc_lv 5 signal 46 } 
	{ b_20_ce1 sc_out sc_logic 1 signal 46 } 
	{ b_20_q1 sc_in sc_lv 16 signal 46 } 
	{ b_21_address0 sc_out sc_lv 5 signal 47 } 
	{ b_21_ce0 sc_out sc_logic 1 signal 47 } 
	{ b_21_q0 sc_in sc_lv 16 signal 47 } 
	{ b_21_address1 sc_out sc_lv 5 signal 47 } 
	{ b_21_ce1 sc_out sc_logic 1 signal 47 } 
	{ b_21_q1 sc_in sc_lv 16 signal 47 } 
	{ b_22_address0 sc_out sc_lv 5 signal 48 } 
	{ b_22_ce0 sc_out sc_logic 1 signal 48 } 
	{ b_22_q0 sc_in sc_lv 16 signal 48 } 
	{ b_22_address1 sc_out sc_lv 5 signal 48 } 
	{ b_22_ce1 sc_out sc_logic 1 signal 48 } 
	{ b_22_q1 sc_in sc_lv 16 signal 48 } 
	{ b_23_address0 sc_out sc_lv 5 signal 49 } 
	{ b_23_ce0 sc_out sc_logic 1 signal 49 } 
	{ b_23_q0 sc_in sc_lv 16 signal 49 } 
	{ b_23_address1 sc_out sc_lv 5 signal 49 } 
	{ b_23_ce1 sc_out sc_logic 1 signal 49 } 
	{ b_23_q1 sc_in sc_lv 16 signal 49 } 
	{ b_24_address0 sc_out sc_lv 5 signal 50 } 
	{ b_24_ce0 sc_out sc_logic 1 signal 50 } 
	{ b_24_q0 sc_in sc_lv 16 signal 50 } 
	{ b_24_address1 sc_out sc_lv 5 signal 50 } 
	{ b_24_ce1 sc_out sc_logic 1 signal 50 } 
	{ b_24_q1 sc_in sc_lv 16 signal 50 } 
	{ b_25_address0 sc_out sc_lv 5 signal 51 } 
	{ b_25_ce0 sc_out sc_logic 1 signal 51 } 
	{ b_25_q0 sc_in sc_lv 16 signal 51 } 
	{ b_25_address1 sc_out sc_lv 5 signal 51 } 
	{ b_25_ce1 sc_out sc_logic 1 signal 51 } 
	{ b_25_q1 sc_in sc_lv 16 signal 51 } 
	{ out_r_address0 sc_out sc_lv 10 signal 52 } 
	{ out_r_ce0 sc_out sc_logic 1 signal 52 } 
	{ out_r_we0 sc_out sc_logic 1 signal 52 } 
	{ out_r_d0 sc_out sc_lv 16 signal 52 } 
	{ out_r_address1 sc_out sc_lv 10 signal 52 } 
	{ out_r_ce1 sc_out sc_logic 1 signal 52 } 
	{ out_r_we1 sc_out sc_logic 1 signal 52 } 
	{ out_r_d1 sc_out sc_lv 16 signal 52 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_0", "role": "address0" }} , 
 	{ "name": "a_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_0", "role": "ce0" }} , 
 	{ "name": "a_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_0", "role": "q0" }} , 
 	{ "name": "a_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_0", "role": "address1" }} , 
 	{ "name": "a_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_0", "role": "ce1" }} , 
 	{ "name": "a_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_0", "role": "q1" }} , 
 	{ "name": "a_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_1", "role": "address0" }} , 
 	{ "name": "a_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_1", "role": "ce0" }} , 
 	{ "name": "a_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_1", "role": "q0" }} , 
 	{ "name": "a_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_1", "role": "address1" }} , 
 	{ "name": "a_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_1", "role": "ce1" }} , 
 	{ "name": "a_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_1", "role": "q1" }} , 
 	{ "name": "a_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_2", "role": "address0" }} , 
 	{ "name": "a_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_2", "role": "ce0" }} , 
 	{ "name": "a_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_2", "role": "q0" }} , 
 	{ "name": "a_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_2", "role": "address1" }} , 
 	{ "name": "a_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_2", "role": "ce1" }} , 
 	{ "name": "a_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_2", "role": "q1" }} , 
 	{ "name": "a_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_3", "role": "address0" }} , 
 	{ "name": "a_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_3", "role": "ce0" }} , 
 	{ "name": "a_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_3", "role": "q0" }} , 
 	{ "name": "a_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_3", "role": "address1" }} , 
 	{ "name": "a_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_3", "role": "ce1" }} , 
 	{ "name": "a_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_3", "role": "q1" }} , 
 	{ "name": "a_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_4", "role": "address0" }} , 
 	{ "name": "a_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_4", "role": "ce0" }} , 
 	{ "name": "a_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_4", "role": "q0" }} , 
 	{ "name": "a_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_4", "role": "address1" }} , 
 	{ "name": "a_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_4", "role": "ce1" }} , 
 	{ "name": "a_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_4", "role": "q1" }} , 
 	{ "name": "a_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_5", "role": "address0" }} , 
 	{ "name": "a_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_5", "role": "ce0" }} , 
 	{ "name": "a_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_5", "role": "q0" }} , 
 	{ "name": "a_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_5", "role": "address1" }} , 
 	{ "name": "a_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_5", "role": "ce1" }} , 
 	{ "name": "a_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_5", "role": "q1" }} , 
 	{ "name": "a_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_6", "role": "address0" }} , 
 	{ "name": "a_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_6", "role": "ce0" }} , 
 	{ "name": "a_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_6", "role": "q0" }} , 
 	{ "name": "a_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_6", "role": "address1" }} , 
 	{ "name": "a_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_6", "role": "ce1" }} , 
 	{ "name": "a_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_6", "role": "q1" }} , 
 	{ "name": "a_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_7", "role": "address0" }} , 
 	{ "name": "a_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_7", "role": "ce0" }} , 
 	{ "name": "a_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_7", "role": "q0" }} , 
 	{ "name": "a_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_7", "role": "address1" }} , 
 	{ "name": "a_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_7", "role": "ce1" }} , 
 	{ "name": "a_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_7", "role": "q1" }} , 
 	{ "name": "a_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_8", "role": "address0" }} , 
 	{ "name": "a_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_8", "role": "ce0" }} , 
 	{ "name": "a_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_8", "role": "q0" }} , 
 	{ "name": "a_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_8", "role": "address1" }} , 
 	{ "name": "a_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_8", "role": "ce1" }} , 
 	{ "name": "a_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_8", "role": "q1" }} , 
 	{ "name": "a_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_9", "role": "address0" }} , 
 	{ "name": "a_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_9", "role": "ce0" }} , 
 	{ "name": "a_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_9", "role": "q0" }} , 
 	{ "name": "a_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_9", "role": "address1" }} , 
 	{ "name": "a_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_9", "role": "ce1" }} , 
 	{ "name": "a_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_9", "role": "q1" }} , 
 	{ "name": "a_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_10", "role": "address0" }} , 
 	{ "name": "a_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_10", "role": "ce0" }} , 
 	{ "name": "a_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_10", "role": "q0" }} , 
 	{ "name": "a_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_10", "role": "address1" }} , 
 	{ "name": "a_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_10", "role": "ce1" }} , 
 	{ "name": "a_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_10", "role": "q1" }} , 
 	{ "name": "a_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_11", "role": "address0" }} , 
 	{ "name": "a_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_11", "role": "ce0" }} , 
 	{ "name": "a_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_11", "role": "q0" }} , 
 	{ "name": "a_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_11", "role": "address1" }} , 
 	{ "name": "a_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_11", "role": "ce1" }} , 
 	{ "name": "a_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_11", "role": "q1" }} , 
 	{ "name": "a_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_12", "role": "address0" }} , 
 	{ "name": "a_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_12", "role": "ce0" }} , 
 	{ "name": "a_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_12", "role": "q0" }} , 
 	{ "name": "a_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_12", "role": "address1" }} , 
 	{ "name": "a_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_12", "role": "ce1" }} , 
 	{ "name": "a_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_12", "role": "q1" }} , 
 	{ "name": "a_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_13", "role": "address0" }} , 
 	{ "name": "a_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_13", "role": "ce0" }} , 
 	{ "name": "a_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_13", "role": "q0" }} , 
 	{ "name": "a_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_13", "role": "address1" }} , 
 	{ "name": "a_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_13", "role": "ce1" }} , 
 	{ "name": "a_13_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_13", "role": "q1" }} , 
 	{ "name": "a_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_14", "role": "address0" }} , 
 	{ "name": "a_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_14", "role": "ce0" }} , 
 	{ "name": "a_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_14", "role": "q0" }} , 
 	{ "name": "a_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_14", "role": "address1" }} , 
 	{ "name": "a_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_14", "role": "ce1" }} , 
 	{ "name": "a_14_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_14", "role": "q1" }} , 
 	{ "name": "a_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_15", "role": "address0" }} , 
 	{ "name": "a_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_15", "role": "ce0" }} , 
 	{ "name": "a_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_15", "role": "q0" }} , 
 	{ "name": "a_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_15", "role": "address1" }} , 
 	{ "name": "a_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_15", "role": "ce1" }} , 
 	{ "name": "a_15_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_15", "role": "q1" }} , 
 	{ "name": "a_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_16", "role": "address0" }} , 
 	{ "name": "a_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_16", "role": "ce0" }} , 
 	{ "name": "a_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_16", "role": "q0" }} , 
 	{ "name": "a_16_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_16", "role": "address1" }} , 
 	{ "name": "a_16_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_16", "role": "ce1" }} , 
 	{ "name": "a_16_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_16", "role": "q1" }} , 
 	{ "name": "a_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_17", "role": "address0" }} , 
 	{ "name": "a_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_17", "role": "ce0" }} , 
 	{ "name": "a_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_17", "role": "q0" }} , 
 	{ "name": "a_17_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_17", "role": "address1" }} , 
 	{ "name": "a_17_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_17", "role": "ce1" }} , 
 	{ "name": "a_17_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_17", "role": "q1" }} , 
 	{ "name": "a_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_18", "role": "address0" }} , 
 	{ "name": "a_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_18", "role": "ce0" }} , 
 	{ "name": "a_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_18", "role": "q0" }} , 
 	{ "name": "a_18_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_18", "role": "address1" }} , 
 	{ "name": "a_18_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_18", "role": "ce1" }} , 
 	{ "name": "a_18_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_18", "role": "q1" }} , 
 	{ "name": "a_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_19", "role": "address0" }} , 
 	{ "name": "a_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_19", "role": "ce0" }} , 
 	{ "name": "a_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_19", "role": "q0" }} , 
 	{ "name": "a_19_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_19", "role": "address1" }} , 
 	{ "name": "a_19_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_19", "role": "ce1" }} , 
 	{ "name": "a_19_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_19", "role": "q1" }} , 
 	{ "name": "a_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_20", "role": "address0" }} , 
 	{ "name": "a_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_20", "role": "ce0" }} , 
 	{ "name": "a_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_20", "role": "q0" }} , 
 	{ "name": "a_20_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_20", "role": "address1" }} , 
 	{ "name": "a_20_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_20", "role": "ce1" }} , 
 	{ "name": "a_20_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_20", "role": "q1" }} , 
 	{ "name": "a_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_21", "role": "address0" }} , 
 	{ "name": "a_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_21", "role": "ce0" }} , 
 	{ "name": "a_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_21", "role": "q0" }} , 
 	{ "name": "a_21_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_21", "role": "address1" }} , 
 	{ "name": "a_21_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_21", "role": "ce1" }} , 
 	{ "name": "a_21_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_21", "role": "q1" }} , 
 	{ "name": "a_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_22", "role": "address0" }} , 
 	{ "name": "a_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_22", "role": "ce0" }} , 
 	{ "name": "a_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_22", "role": "q0" }} , 
 	{ "name": "a_22_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_22", "role": "address1" }} , 
 	{ "name": "a_22_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_22", "role": "ce1" }} , 
 	{ "name": "a_22_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_22", "role": "q1" }} , 
 	{ "name": "a_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_23", "role": "address0" }} , 
 	{ "name": "a_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_23", "role": "ce0" }} , 
 	{ "name": "a_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_23", "role": "q0" }} , 
 	{ "name": "a_23_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_23", "role": "address1" }} , 
 	{ "name": "a_23_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_23", "role": "ce1" }} , 
 	{ "name": "a_23_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_23", "role": "q1" }} , 
 	{ "name": "a_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_24", "role": "address0" }} , 
 	{ "name": "a_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_24", "role": "ce0" }} , 
 	{ "name": "a_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_24", "role": "q0" }} , 
 	{ "name": "a_24_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_24", "role": "address1" }} , 
 	{ "name": "a_24_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_24", "role": "ce1" }} , 
 	{ "name": "a_24_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_24", "role": "q1" }} , 
 	{ "name": "a_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_25", "role": "address0" }} , 
 	{ "name": "a_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_25", "role": "ce0" }} , 
 	{ "name": "a_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_25", "role": "q0" }} , 
 	{ "name": "a_25_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "a_25", "role": "address1" }} , 
 	{ "name": "a_25_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_25", "role": "ce1" }} , 
 	{ "name": "a_25_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "a_25", "role": "q1" }} , 
 	{ "name": "b_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_0", "role": "address0" }} , 
 	{ "name": "b_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_0", "role": "ce0" }} , 
 	{ "name": "b_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_0", "role": "q0" }} , 
 	{ "name": "b_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_0", "role": "address1" }} , 
 	{ "name": "b_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_0", "role": "ce1" }} , 
 	{ "name": "b_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_0", "role": "q1" }} , 
 	{ "name": "b_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_1", "role": "address0" }} , 
 	{ "name": "b_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_1", "role": "ce0" }} , 
 	{ "name": "b_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_1", "role": "q0" }} , 
 	{ "name": "b_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_1", "role": "address1" }} , 
 	{ "name": "b_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_1", "role": "ce1" }} , 
 	{ "name": "b_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_1", "role": "q1" }} , 
 	{ "name": "b_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_2", "role": "address0" }} , 
 	{ "name": "b_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_2", "role": "ce0" }} , 
 	{ "name": "b_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_2", "role": "q0" }} , 
 	{ "name": "b_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_2", "role": "address1" }} , 
 	{ "name": "b_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_2", "role": "ce1" }} , 
 	{ "name": "b_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_2", "role": "q1" }} , 
 	{ "name": "b_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_3", "role": "address0" }} , 
 	{ "name": "b_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_3", "role": "ce0" }} , 
 	{ "name": "b_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_3", "role": "q0" }} , 
 	{ "name": "b_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_3", "role": "address1" }} , 
 	{ "name": "b_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_3", "role": "ce1" }} , 
 	{ "name": "b_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_3", "role": "q1" }} , 
 	{ "name": "b_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_4", "role": "address0" }} , 
 	{ "name": "b_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_4", "role": "ce0" }} , 
 	{ "name": "b_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_4", "role": "q0" }} , 
 	{ "name": "b_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_4", "role": "address1" }} , 
 	{ "name": "b_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_4", "role": "ce1" }} , 
 	{ "name": "b_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_4", "role": "q1" }} , 
 	{ "name": "b_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_5", "role": "address0" }} , 
 	{ "name": "b_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_5", "role": "ce0" }} , 
 	{ "name": "b_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_5", "role": "q0" }} , 
 	{ "name": "b_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_5", "role": "address1" }} , 
 	{ "name": "b_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_5", "role": "ce1" }} , 
 	{ "name": "b_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_5", "role": "q1" }} , 
 	{ "name": "b_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_6", "role": "address0" }} , 
 	{ "name": "b_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_6", "role": "ce0" }} , 
 	{ "name": "b_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_6", "role": "q0" }} , 
 	{ "name": "b_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_6", "role": "address1" }} , 
 	{ "name": "b_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_6", "role": "ce1" }} , 
 	{ "name": "b_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_6", "role": "q1" }} , 
 	{ "name": "b_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_7", "role": "address0" }} , 
 	{ "name": "b_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_7", "role": "ce0" }} , 
 	{ "name": "b_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_7", "role": "q0" }} , 
 	{ "name": "b_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_7", "role": "address1" }} , 
 	{ "name": "b_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_7", "role": "ce1" }} , 
 	{ "name": "b_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_7", "role": "q1" }} , 
 	{ "name": "b_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_8", "role": "address0" }} , 
 	{ "name": "b_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_8", "role": "ce0" }} , 
 	{ "name": "b_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_8", "role": "q0" }} , 
 	{ "name": "b_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_8", "role": "address1" }} , 
 	{ "name": "b_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_8", "role": "ce1" }} , 
 	{ "name": "b_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_8", "role": "q1" }} , 
 	{ "name": "b_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_9", "role": "address0" }} , 
 	{ "name": "b_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_9", "role": "ce0" }} , 
 	{ "name": "b_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_9", "role": "q0" }} , 
 	{ "name": "b_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_9", "role": "address1" }} , 
 	{ "name": "b_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_9", "role": "ce1" }} , 
 	{ "name": "b_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_9", "role": "q1" }} , 
 	{ "name": "b_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_10", "role": "address0" }} , 
 	{ "name": "b_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_10", "role": "ce0" }} , 
 	{ "name": "b_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_10", "role": "q0" }} , 
 	{ "name": "b_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_10", "role": "address1" }} , 
 	{ "name": "b_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_10", "role": "ce1" }} , 
 	{ "name": "b_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_10", "role": "q1" }} , 
 	{ "name": "b_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_11", "role": "address0" }} , 
 	{ "name": "b_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_11", "role": "ce0" }} , 
 	{ "name": "b_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_11", "role": "q0" }} , 
 	{ "name": "b_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_11", "role": "address1" }} , 
 	{ "name": "b_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_11", "role": "ce1" }} , 
 	{ "name": "b_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_11", "role": "q1" }} , 
 	{ "name": "b_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_12", "role": "address0" }} , 
 	{ "name": "b_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_12", "role": "ce0" }} , 
 	{ "name": "b_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_12", "role": "q0" }} , 
 	{ "name": "b_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_12", "role": "address1" }} , 
 	{ "name": "b_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_12", "role": "ce1" }} , 
 	{ "name": "b_12_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_12", "role": "q1" }} , 
 	{ "name": "b_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_13", "role": "address0" }} , 
 	{ "name": "b_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_13", "role": "ce0" }} , 
 	{ "name": "b_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_13", "role": "q0" }} , 
 	{ "name": "b_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_13", "role": "address1" }} , 
 	{ "name": "b_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_13", "role": "ce1" }} , 
 	{ "name": "b_13_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_13", "role": "q1" }} , 
 	{ "name": "b_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_14", "role": "address0" }} , 
 	{ "name": "b_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_14", "role": "ce0" }} , 
 	{ "name": "b_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_14", "role": "q0" }} , 
 	{ "name": "b_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_14", "role": "address1" }} , 
 	{ "name": "b_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_14", "role": "ce1" }} , 
 	{ "name": "b_14_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_14", "role": "q1" }} , 
 	{ "name": "b_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_15", "role": "address0" }} , 
 	{ "name": "b_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_15", "role": "ce0" }} , 
 	{ "name": "b_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_15", "role": "q0" }} , 
 	{ "name": "b_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_15", "role": "address1" }} , 
 	{ "name": "b_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_15", "role": "ce1" }} , 
 	{ "name": "b_15_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_15", "role": "q1" }} , 
 	{ "name": "b_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_16", "role": "address0" }} , 
 	{ "name": "b_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_16", "role": "ce0" }} , 
 	{ "name": "b_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_16", "role": "q0" }} , 
 	{ "name": "b_16_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_16", "role": "address1" }} , 
 	{ "name": "b_16_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_16", "role": "ce1" }} , 
 	{ "name": "b_16_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_16", "role": "q1" }} , 
 	{ "name": "b_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_17", "role": "address0" }} , 
 	{ "name": "b_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_17", "role": "ce0" }} , 
 	{ "name": "b_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_17", "role": "q0" }} , 
 	{ "name": "b_17_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_17", "role": "address1" }} , 
 	{ "name": "b_17_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_17", "role": "ce1" }} , 
 	{ "name": "b_17_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_17", "role": "q1" }} , 
 	{ "name": "b_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_18", "role": "address0" }} , 
 	{ "name": "b_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_18", "role": "ce0" }} , 
 	{ "name": "b_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_18", "role": "q0" }} , 
 	{ "name": "b_18_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_18", "role": "address1" }} , 
 	{ "name": "b_18_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_18", "role": "ce1" }} , 
 	{ "name": "b_18_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_18", "role": "q1" }} , 
 	{ "name": "b_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_19", "role": "address0" }} , 
 	{ "name": "b_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_19", "role": "ce0" }} , 
 	{ "name": "b_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_19", "role": "q0" }} , 
 	{ "name": "b_19_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_19", "role": "address1" }} , 
 	{ "name": "b_19_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_19", "role": "ce1" }} , 
 	{ "name": "b_19_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_19", "role": "q1" }} , 
 	{ "name": "b_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_20", "role": "address0" }} , 
 	{ "name": "b_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_20", "role": "ce0" }} , 
 	{ "name": "b_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_20", "role": "q0" }} , 
 	{ "name": "b_20_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_20", "role": "address1" }} , 
 	{ "name": "b_20_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_20", "role": "ce1" }} , 
 	{ "name": "b_20_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_20", "role": "q1" }} , 
 	{ "name": "b_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_21", "role": "address0" }} , 
 	{ "name": "b_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_21", "role": "ce0" }} , 
 	{ "name": "b_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_21", "role": "q0" }} , 
 	{ "name": "b_21_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_21", "role": "address1" }} , 
 	{ "name": "b_21_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_21", "role": "ce1" }} , 
 	{ "name": "b_21_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_21", "role": "q1" }} , 
 	{ "name": "b_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_22", "role": "address0" }} , 
 	{ "name": "b_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_22", "role": "ce0" }} , 
 	{ "name": "b_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_22", "role": "q0" }} , 
 	{ "name": "b_22_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_22", "role": "address1" }} , 
 	{ "name": "b_22_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_22", "role": "ce1" }} , 
 	{ "name": "b_22_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_22", "role": "q1" }} , 
 	{ "name": "b_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_23", "role": "address0" }} , 
 	{ "name": "b_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_23", "role": "ce0" }} , 
 	{ "name": "b_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_23", "role": "q0" }} , 
 	{ "name": "b_23_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_23", "role": "address1" }} , 
 	{ "name": "b_23_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_23", "role": "ce1" }} , 
 	{ "name": "b_23_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_23", "role": "q1" }} , 
 	{ "name": "b_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_24", "role": "address0" }} , 
 	{ "name": "b_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_24", "role": "ce0" }} , 
 	{ "name": "b_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_24", "role": "q0" }} , 
 	{ "name": "b_24_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_24", "role": "address1" }} , 
 	{ "name": "b_24_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_24", "role": "ce1" }} , 
 	{ "name": "b_24_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_24", "role": "q1" }} , 
 	{ "name": "b_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_25", "role": "address0" }} , 
 	{ "name": "b_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_25", "role": "ce0" }} , 
 	{ "name": "b_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_25", "role": "q0" }} , 
 	{ "name": "b_25_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "b_25", "role": "address1" }} , 
 	{ "name": "b_25_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_25", "role": "ce1" }} , 
 	{ "name": "b_25_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "b_25", "role": "q1" }} , 
 	{ "name": "out_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_r", "role": "address0" }} , 
 	{ "name": "out_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ce0" }} , 
 	{ "name": "out_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "we0" }} , 
 	{ "name": "out_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_r", "role": "d0" }} , 
 	{ "name": "out_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "out_r", "role": "address1" }} , 
 	{ "name": "out_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "ce1" }} , 
 	{ "name": "out_r_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_r", "role": "we1" }} , 
 	{ "name": "out_r_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "out_r", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104"],
		"CDFG" : "mmult_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "475", "EstimateLatencyMax" : "475",
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
			{"Name" : "a_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_25", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "b_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "b_25", "Type" : "Memory", "Direction" : "I"},
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
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U27", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U28", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U29", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U30", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U31", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U32", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U33", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U34", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U35", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U36", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U37", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U38", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U39", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U40", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U41", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U42", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U43", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U44", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U45", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U46", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U47", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U48", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U49", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U50", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U51", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hadd_16nbkb_U52", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U53", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U54", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U55", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U56", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U57", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U58", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U59", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U60", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U61", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U62", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U63", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U64", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U65", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U66", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U67", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U68", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U69", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U70", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U71", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U72", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U73", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U74", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U75", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U76", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U77", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U78", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U79", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U80", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U81", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U82", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U83", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U84", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U85", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U86", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U87", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U88", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U89", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U90", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U91", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U92", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U93", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U94", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U95", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U96", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U97", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U98", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U99", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U100", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U101", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U102", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U103", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mmult_hw_hmul_16ncud_U104", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	mmult_hw {
		a_0 {Type I LastRead 2 FirstWrite -1}
		a_1 {Type I LastRead 2 FirstWrite -1}
		a_2 {Type I LastRead 2 FirstWrite -1}
		a_3 {Type I LastRead 2 FirstWrite -1}
		a_4 {Type I LastRead 2 FirstWrite -1}
		a_5 {Type I LastRead 2 FirstWrite -1}
		a_6 {Type I LastRead 2 FirstWrite -1}
		a_7 {Type I LastRead 2 FirstWrite -1}
		a_8 {Type I LastRead 2 FirstWrite -1}
		a_9 {Type I LastRead 2 FirstWrite -1}
		a_10 {Type I LastRead 2 FirstWrite -1}
		a_11 {Type I LastRead 2 FirstWrite -1}
		a_12 {Type I LastRead 2 FirstWrite -1}
		a_13 {Type I LastRead 2 FirstWrite -1}
		a_14 {Type I LastRead 2 FirstWrite -1}
		a_15 {Type I LastRead 2 FirstWrite -1}
		a_16 {Type I LastRead 2 FirstWrite -1}
		a_17 {Type I LastRead 2 FirstWrite -1}
		a_18 {Type I LastRead 2 FirstWrite -1}
		a_19 {Type I LastRead 2 FirstWrite -1}
		a_20 {Type I LastRead 2 FirstWrite -1}
		a_21 {Type I LastRead 2 FirstWrite -1}
		a_22 {Type I LastRead 2 FirstWrite -1}
		a_23 {Type I LastRead 2 FirstWrite -1}
		a_24 {Type I LastRead 2 FirstWrite -1}
		a_25 {Type I LastRead 2 FirstWrite -1}
		b_0 {Type I LastRead 14 FirstWrite -1}
		b_1 {Type I LastRead 14 FirstWrite -1}
		b_2 {Type I LastRead 14 FirstWrite -1}
		b_3 {Type I LastRead 14 FirstWrite -1}
		b_4 {Type I LastRead 14 FirstWrite -1}
		b_5 {Type I LastRead 14 FirstWrite -1}
		b_6 {Type I LastRead 14 FirstWrite -1}
		b_7 {Type I LastRead 14 FirstWrite -1}
		b_8 {Type I LastRead 14 FirstWrite -1}
		b_9 {Type I LastRead 14 FirstWrite -1}
		b_10 {Type I LastRead 14 FirstWrite -1}
		b_11 {Type I LastRead 14 FirstWrite -1}
		b_12 {Type I LastRead 14 FirstWrite -1}
		b_13 {Type I LastRead 14 FirstWrite -1}
		b_14 {Type I LastRead 14 FirstWrite -1}
		b_15 {Type I LastRead 14 FirstWrite -1}
		b_16 {Type I LastRead 14 FirstWrite -1}
		b_17 {Type I LastRead 14 FirstWrite -1}
		b_18 {Type I LastRead 14 FirstWrite -1}
		b_19 {Type I LastRead 14 FirstWrite -1}
		b_20 {Type I LastRead 14 FirstWrite -1}
		b_21 {Type I LastRead 14 FirstWrite -1}
		b_22 {Type I LastRead 14 FirstWrite -1}
		b_23 {Type I LastRead 14 FirstWrite -1}
		b_24 {Type I LastRead 14 FirstWrite -1}
		b_25 {Type I LastRead 14 FirstWrite -1}
		out_r {Type O LastRead -1 FirstWrite 137}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "475", "Max" : "475"}
	, {"Name" : "Interval", "Min" : "476", "Max" : "476"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	a_0 { ap_memory {  { a_0_address0 mem_address 1 5 }  { a_0_ce0 mem_ce 1 1 }  { a_0_q0 mem_dout 0 16 }  { a_0_address1 MemPortADDR2 1 5 }  { a_0_ce1 MemPortCE2 1 1 }  { a_0_q1 MemPortDOUT2 0 16 } } }
	a_1 { ap_memory {  { a_1_address0 mem_address 1 5 }  { a_1_ce0 mem_ce 1 1 }  { a_1_q0 mem_dout 0 16 }  { a_1_address1 MemPortADDR2 1 5 }  { a_1_ce1 MemPortCE2 1 1 }  { a_1_q1 MemPortDOUT2 0 16 } } }
	a_2 { ap_memory {  { a_2_address0 mem_address 1 5 }  { a_2_ce0 mem_ce 1 1 }  { a_2_q0 mem_dout 0 16 }  { a_2_address1 MemPortADDR2 1 5 }  { a_2_ce1 MemPortCE2 1 1 }  { a_2_q1 MemPortDOUT2 0 16 } } }
	a_3 { ap_memory {  { a_3_address0 mem_address 1 5 }  { a_3_ce0 mem_ce 1 1 }  { a_3_q0 mem_dout 0 16 }  { a_3_address1 MemPortADDR2 1 5 }  { a_3_ce1 MemPortCE2 1 1 }  { a_3_q1 MemPortDOUT2 0 16 } } }
	a_4 { ap_memory {  { a_4_address0 mem_address 1 5 }  { a_4_ce0 mem_ce 1 1 }  { a_4_q0 mem_dout 0 16 }  { a_4_address1 MemPortADDR2 1 5 }  { a_4_ce1 MemPortCE2 1 1 }  { a_4_q1 MemPortDOUT2 0 16 } } }
	a_5 { ap_memory {  { a_5_address0 mem_address 1 5 }  { a_5_ce0 mem_ce 1 1 }  { a_5_q0 mem_dout 0 16 }  { a_5_address1 MemPortADDR2 1 5 }  { a_5_ce1 MemPortCE2 1 1 }  { a_5_q1 MemPortDOUT2 0 16 } } }
	a_6 { ap_memory {  { a_6_address0 mem_address 1 5 }  { a_6_ce0 mem_ce 1 1 }  { a_6_q0 mem_dout 0 16 }  { a_6_address1 MemPortADDR2 1 5 }  { a_6_ce1 MemPortCE2 1 1 }  { a_6_q1 MemPortDOUT2 0 16 } } }
	a_7 { ap_memory {  { a_7_address0 mem_address 1 5 }  { a_7_ce0 mem_ce 1 1 }  { a_7_q0 mem_dout 0 16 }  { a_7_address1 MemPortADDR2 1 5 }  { a_7_ce1 MemPortCE2 1 1 }  { a_7_q1 MemPortDOUT2 0 16 } } }
	a_8 { ap_memory {  { a_8_address0 mem_address 1 5 }  { a_8_ce0 mem_ce 1 1 }  { a_8_q0 mem_dout 0 16 }  { a_8_address1 MemPortADDR2 1 5 }  { a_8_ce1 MemPortCE2 1 1 }  { a_8_q1 MemPortDOUT2 0 16 } } }
	a_9 { ap_memory {  { a_9_address0 mem_address 1 5 }  { a_9_ce0 mem_ce 1 1 }  { a_9_q0 mem_dout 0 16 }  { a_9_address1 MemPortADDR2 1 5 }  { a_9_ce1 MemPortCE2 1 1 }  { a_9_q1 MemPortDOUT2 0 16 } } }
	a_10 { ap_memory {  { a_10_address0 mem_address 1 5 }  { a_10_ce0 mem_ce 1 1 }  { a_10_q0 mem_dout 0 16 }  { a_10_address1 MemPortADDR2 1 5 }  { a_10_ce1 MemPortCE2 1 1 }  { a_10_q1 MemPortDOUT2 0 16 } } }
	a_11 { ap_memory {  { a_11_address0 mem_address 1 5 }  { a_11_ce0 mem_ce 1 1 }  { a_11_q0 mem_dout 0 16 }  { a_11_address1 MemPortADDR2 1 5 }  { a_11_ce1 MemPortCE2 1 1 }  { a_11_q1 MemPortDOUT2 0 16 } } }
	a_12 { ap_memory {  { a_12_address0 mem_address 1 5 }  { a_12_ce0 mem_ce 1 1 }  { a_12_q0 mem_dout 0 16 }  { a_12_address1 MemPortADDR2 1 5 }  { a_12_ce1 MemPortCE2 1 1 }  { a_12_q1 MemPortDOUT2 0 16 } } }
	a_13 { ap_memory {  { a_13_address0 mem_address 1 5 }  { a_13_ce0 mem_ce 1 1 }  { a_13_q0 mem_dout 0 16 }  { a_13_address1 MemPortADDR2 1 5 }  { a_13_ce1 MemPortCE2 1 1 }  { a_13_q1 MemPortDOUT2 0 16 } } }
	a_14 { ap_memory {  { a_14_address0 mem_address 1 5 }  { a_14_ce0 mem_ce 1 1 }  { a_14_q0 mem_dout 0 16 }  { a_14_address1 MemPortADDR2 1 5 }  { a_14_ce1 MemPortCE2 1 1 }  { a_14_q1 MemPortDOUT2 0 16 } } }
	a_15 { ap_memory {  { a_15_address0 mem_address 1 5 }  { a_15_ce0 mem_ce 1 1 }  { a_15_q0 mem_dout 0 16 }  { a_15_address1 MemPortADDR2 1 5 }  { a_15_ce1 MemPortCE2 1 1 }  { a_15_q1 MemPortDOUT2 0 16 } } }
	a_16 { ap_memory {  { a_16_address0 mem_address 1 5 }  { a_16_ce0 mem_ce 1 1 }  { a_16_q0 mem_dout 0 16 }  { a_16_address1 MemPortADDR2 1 5 }  { a_16_ce1 MemPortCE2 1 1 }  { a_16_q1 MemPortDOUT2 0 16 } } }
	a_17 { ap_memory {  { a_17_address0 mem_address 1 5 }  { a_17_ce0 mem_ce 1 1 }  { a_17_q0 mem_dout 0 16 }  { a_17_address1 MemPortADDR2 1 5 }  { a_17_ce1 MemPortCE2 1 1 }  { a_17_q1 MemPortDOUT2 0 16 } } }
	a_18 { ap_memory {  { a_18_address0 mem_address 1 5 }  { a_18_ce0 mem_ce 1 1 }  { a_18_q0 mem_dout 0 16 }  { a_18_address1 MemPortADDR2 1 5 }  { a_18_ce1 MemPortCE2 1 1 }  { a_18_q1 MemPortDOUT2 0 16 } } }
	a_19 { ap_memory {  { a_19_address0 mem_address 1 5 }  { a_19_ce0 mem_ce 1 1 }  { a_19_q0 mem_dout 0 16 }  { a_19_address1 MemPortADDR2 1 5 }  { a_19_ce1 MemPortCE2 1 1 }  { a_19_q1 MemPortDOUT2 0 16 } } }
	a_20 { ap_memory {  { a_20_address0 mem_address 1 5 }  { a_20_ce0 mem_ce 1 1 }  { a_20_q0 mem_dout 0 16 }  { a_20_address1 MemPortADDR2 1 5 }  { a_20_ce1 MemPortCE2 1 1 }  { a_20_q1 MemPortDOUT2 0 16 } } }
	a_21 { ap_memory {  { a_21_address0 mem_address 1 5 }  { a_21_ce0 mem_ce 1 1 }  { a_21_q0 mem_dout 0 16 }  { a_21_address1 MemPortADDR2 1 5 }  { a_21_ce1 MemPortCE2 1 1 }  { a_21_q1 MemPortDOUT2 0 16 } } }
	a_22 { ap_memory {  { a_22_address0 mem_address 1 5 }  { a_22_ce0 mem_ce 1 1 }  { a_22_q0 mem_dout 0 16 }  { a_22_address1 MemPortADDR2 1 5 }  { a_22_ce1 MemPortCE2 1 1 }  { a_22_q1 MemPortDOUT2 0 16 } } }
	a_23 { ap_memory {  { a_23_address0 mem_address 1 5 }  { a_23_ce0 mem_ce 1 1 }  { a_23_q0 mem_dout 0 16 }  { a_23_address1 MemPortADDR2 1 5 }  { a_23_ce1 MemPortCE2 1 1 }  { a_23_q1 MemPortDOUT2 0 16 } } }
	a_24 { ap_memory {  { a_24_address0 mem_address 1 5 }  { a_24_ce0 mem_ce 1 1 }  { a_24_q0 mem_dout 0 16 }  { a_24_address1 MemPortADDR2 1 5 }  { a_24_ce1 MemPortCE2 1 1 }  { a_24_q1 MemPortDOUT2 0 16 } } }
	a_25 { ap_memory {  { a_25_address0 mem_address 1 5 }  { a_25_ce0 mem_ce 1 1 }  { a_25_q0 mem_dout 0 16 }  { a_25_address1 MemPortADDR2 1 5 }  { a_25_ce1 MemPortCE2 1 1 }  { a_25_q1 MemPortDOUT2 0 16 } } }
	b_0 { ap_memory {  { b_0_address0 mem_address 1 5 }  { b_0_ce0 mem_ce 1 1 }  { b_0_q0 mem_dout 0 16 }  { b_0_address1 MemPortADDR2 1 5 }  { b_0_ce1 MemPortCE2 1 1 }  { b_0_q1 MemPortDOUT2 0 16 } } }
	b_1 { ap_memory {  { b_1_address0 mem_address 1 5 }  { b_1_ce0 mem_ce 1 1 }  { b_1_q0 mem_dout 0 16 }  { b_1_address1 MemPortADDR2 1 5 }  { b_1_ce1 MemPortCE2 1 1 }  { b_1_q1 MemPortDOUT2 0 16 } } }
	b_2 { ap_memory {  { b_2_address0 mem_address 1 5 }  { b_2_ce0 mem_ce 1 1 }  { b_2_q0 mem_dout 0 16 }  { b_2_address1 MemPortADDR2 1 5 }  { b_2_ce1 MemPortCE2 1 1 }  { b_2_q1 MemPortDOUT2 0 16 } } }
	b_3 { ap_memory {  { b_3_address0 mem_address 1 5 }  { b_3_ce0 mem_ce 1 1 }  { b_3_q0 mem_dout 0 16 }  { b_3_address1 MemPortADDR2 1 5 }  { b_3_ce1 MemPortCE2 1 1 }  { b_3_q1 MemPortDOUT2 0 16 } } }
	b_4 { ap_memory {  { b_4_address0 mem_address 1 5 }  { b_4_ce0 mem_ce 1 1 }  { b_4_q0 mem_dout 0 16 }  { b_4_address1 MemPortADDR2 1 5 }  { b_4_ce1 MemPortCE2 1 1 }  { b_4_q1 MemPortDOUT2 0 16 } } }
	b_5 { ap_memory {  { b_5_address0 mem_address 1 5 }  { b_5_ce0 mem_ce 1 1 }  { b_5_q0 mem_dout 0 16 }  { b_5_address1 MemPortADDR2 1 5 }  { b_5_ce1 MemPortCE2 1 1 }  { b_5_q1 MemPortDOUT2 0 16 } } }
	b_6 { ap_memory {  { b_6_address0 mem_address 1 5 }  { b_6_ce0 mem_ce 1 1 }  { b_6_q0 mem_dout 0 16 }  { b_6_address1 MemPortADDR2 1 5 }  { b_6_ce1 MemPortCE2 1 1 }  { b_6_q1 MemPortDOUT2 0 16 } } }
	b_7 { ap_memory {  { b_7_address0 mem_address 1 5 }  { b_7_ce0 mem_ce 1 1 }  { b_7_q0 mem_dout 0 16 }  { b_7_address1 MemPortADDR2 1 5 }  { b_7_ce1 MemPortCE2 1 1 }  { b_7_q1 MemPortDOUT2 0 16 } } }
	b_8 { ap_memory {  { b_8_address0 mem_address 1 5 }  { b_8_ce0 mem_ce 1 1 }  { b_8_q0 mem_dout 0 16 }  { b_8_address1 MemPortADDR2 1 5 }  { b_8_ce1 MemPortCE2 1 1 }  { b_8_q1 MemPortDOUT2 0 16 } } }
	b_9 { ap_memory {  { b_9_address0 mem_address 1 5 }  { b_9_ce0 mem_ce 1 1 }  { b_9_q0 mem_dout 0 16 }  { b_9_address1 MemPortADDR2 1 5 }  { b_9_ce1 MemPortCE2 1 1 }  { b_9_q1 MemPortDOUT2 0 16 } } }
	b_10 { ap_memory {  { b_10_address0 mem_address 1 5 }  { b_10_ce0 mem_ce 1 1 }  { b_10_q0 mem_dout 0 16 }  { b_10_address1 MemPortADDR2 1 5 }  { b_10_ce1 MemPortCE2 1 1 }  { b_10_q1 MemPortDOUT2 0 16 } } }
	b_11 { ap_memory {  { b_11_address0 mem_address 1 5 }  { b_11_ce0 mem_ce 1 1 }  { b_11_q0 mem_dout 0 16 }  { b_11_address1 MemPortADDR2 1 5 }  { b_11_ce1 MemPortCE2 1 1 }  { b_11_q1 MemPortDOUT2 0 16 } } }
	b_12 { ap_memory {  { b_12_address0 mem_address 1 5 }  { b_12_ce0 mem_ce 1 1 }  { b_12_q0 mem_dout 0 16 }  { b_12_address1 MemPortADDR2 1 5 }  { b_12_ce1 MemPortCE2 1 1 }  { b_12_q1 MemPortDOUT2 0 16 } } }
	b_13 { ap_memory {  { b_13_address0 mem_address 1 5 }  { b_13_ce0 mem_ce 1 1 }  { b_13_q0 mem_dout 0 16 }  { b_13_address1 MemPortADDR2 1 5 }  { b_13_ce1 MemPortCE2 1 1 }  { b_13_q1 MemPortDOUT2 0 16 } } }
	b_14 { ap_memory {  { b_14_address0 mem_address 1 5 }  { b_14_ce0 mem_ce 1 1 }  { b_14_q0 mem_dout 0 16 }  { b_14_address1 MemPortADDR2 1 5 }  { b_14_ce1 MemPortCE2 1 1 }  { b_14_q1 MemPortDOUT2 0 16 } } }
	b_15 { ap_memory {  { b_15_address0 mem_address 1 5 }  { b_15_ce0 mem_ce 1 1 }  { b_15_q0 mem_dout 0 16 }  { b_15_address1 MemPortADDR2 1 5 }  { b_15_ce1 MemPortCE2 1 1 }  { b_15_q1 MemPortDOUT2 0 16 } } }
	b_16 { ap_memory {  { b_16_address0 mem_address 1 5 }  { b_16_ce0 mem_ce 1 1 }  { b_16_q0 mem_dout 0 16 }  { b_16_address1 MemPortADDR2 1 5 }  { b_16_ce1 MemPortCE2 1 1 }  { b_16_q1 MemPortDOUT2 0 16 } } }
	b_17 { ap_memory {  { b_17_address0 mem_address 1 5 }  { b_17_ce0 mem_ce 1 1 }  { b_17_q0 mem_dout 0 16 }  { b_17_address1 MemPortADDR2 1 5 }  { b_17_ce1 MemPortCE2 1 1 }  { b_17_q1 MemPortDOUT2 0 16 } } }
	b_18 { ap_memory {  { b_18_address0 mem_address 1 5 }  { b_18_ce0 mem_ce 1 1 }  { b_18_q0 mem_dout 0 16 }  { b_18_address1 MemPortADDR2 1 5 }  { b_18_ce1 MemPortCE2 1 1 }  { b_18_q1 MemPortDOUT2 0 16 } } }
	b_19 { ap_memory {  { b_19_address0 mem_address 1 5 }  { b_19_ce0 mem_ce 1 1 }  { b_19_q0 mem_dout 0 16 }  { b_19_address1 MemPortADDR2 1 5 }  { b_19_ce1 MemPortCE2 1 1 }  { b_19_q1 MemPortDOUT2 0 16 } } }
	b_20 { ap_memory {  { b_20_address0 mem_address 1 5 }  { b_20_ce0 mem_ce 1 1 }  { b_20_q0 mem_dout 0 16 }  { b_20_address1 MemPortADDR2 1 5 }  { b_20_ce1 MemPortCE2 1 1 }  { b_20_q1 MemPortDOUT2 0 16 } } }
	b_21 { ap_memory {  { b_21_address0 mem_address 1 5 }  { b_21_ce0 mem_ce 1 1 }  { b_21_q0 mem_dout 0 16 }  { b_21_address1 MemPortADDR2 1 5 }  { b_21_ce1 MemPortCE2 1 1 }  { b_21_q1 MemPortDOUT2 0 16 } } }
	b_22 { ap_memory {  { b_22_address0 mem_address 1 5 }  { b_22_ce0 mem_ce 1 1 }  { b_22_q0 mem_dout 0 16 }  { b_22_address1 MemPortADDR2 1 5 }  { b_22_ce1 MemPortCE2 1 1 }  { b_22_q1 MemPortDOUT2 0 16 } } }
	b_23 { ap_memory {  { b_23_address0 mem_address 1 5 }  { b_23_ce0 mem_ce 1 1 }  { b_23_q0 mem_dout 0 16 }  { b_23_address1 MemPortADDR2 1 5 }  { b_23_ce1 MemPortCE2 1 1 }  { b_23_q1 MemPortDOUT2 0 16 } } }
	b_24 { ap_memory {  { b_24_address0 mem_address 1 5 }  { b_24_ce0 mem_ce 1 1 }  { b_24_q0 mem_dout 0 16 }  { b_24_address1 MemPortADDR2 1 5 }  { b_24_ce1 MemPortCE2 1 1 }  { b_24_q1 MemPortDOUT2 0 16 } } }
	b_25 { ap_memory {  { b_25_address0 mem_address 1 5 }  { b_25_ce0 mem_ce 1 1 }  { b_25_q0 mem_dout 0 16 }  { b_25_address1 MemPortADDR2 1 5 }  { b_25_ce1 MemPortCE2 1 1 }  { b_25_q1 MemPortDOUT2 0 16 } } }
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
