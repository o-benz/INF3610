#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_b_186_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_186_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_186_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_186_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_186_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_186_ce0 = ap_const_logic_1;
    } else {
        b_186_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_186_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BA))) {
        b_186_we0 = ap_const_logic_1;
    } else {
        b_186_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_187_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_187_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_187_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_187_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_187_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_187_ce0 = ap_const_logic_1;
    } else {
        b_187_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_187_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BB))) {
        b_187_we0 = ap_const_logic_1;
    } else {
        b_187_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_188_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_188_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_188_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_188_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_188_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_188_ce0 = ap_const_logic_1;
    } else {
        b_188_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_188_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BC))) {
        b_188_we0 = ap_const_logic_1;
    } else {
        b_188_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_189_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_189_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_189_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_189_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_189_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_189_ce0 = ap_const_logic_1;
    } else {
        b_189_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_189_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BD))) {
        b_189_we0 = ap_const_logic_1;
    } else {
        b_189_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_18_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_18_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_18_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_18_ce0 = ap_const_logic_1;
    } else {
        b_18_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_12))) {
        b_18_we0 = ap_const_logic_1;
    } else {
        b_18_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_190_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_190_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_190_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_190_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_190_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_190_ce0 = ap_const_logic_1;
    } else {
        b_190_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_190_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BE))) {
        b_190_we0 = ap_const_logic_1;
    } else {
        b_190_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_191_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_191_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_191_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_191_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_191_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_191_ce0 = ap_const_logic_1;
    } else {
        b_191_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_191_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_BF))) {
        b_191_we0 = ap_const_logic_1;
    } else {
        b_191_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_192_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_192_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_192_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_192_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_192_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_192_ce0 = ap_const_logic_1;
    } else {
        b_192_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_192_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C0))) {
        b_192_we0 = ap_const_logic_1;
    } else {
        b_192_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_193_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_193_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_193_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_193_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_193_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_193_ce0 = ap_const_logic_1;
    } else {
        b_193_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_193_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C1))) {
        b_193_we0 = ap_const_logic_1;
    } else {
        b_193_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_194_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_194_address0 =  (sc_lv<8>) (tmp_5_fu_10845_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_194_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_194_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_194_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_194_ce0 = ap_const_logic_1;
    } else {
        b_194_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_194_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C2))) {
        b_194_we0 = ap_const_logic_1;
    } else {
        b_194_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_195_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_195_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_195_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_195_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_195_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_195_ce0 = ap_const_logic_1;
    } else {
        b_195_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_195_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C3))) {
        b_195_we0 = ap_const_logic_1;
    } else {
        b_195_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_196_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_196_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_196_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_196_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_196_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_196_ce0 = ap_const_logic_1;
    } else {
        b_196_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_196_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C4))) {
        b_196_we0 = ap_const_logic_1;
    } else {
        b_196_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_197_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_197_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_197_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_197_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_197_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_197_ce0 = ap_const_logic_1;
    } else {
        b_197_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_197_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C5))) {
        b_197_we0 = ap_const_logic_1;
    } else {
        b_197_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_198_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_198_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_198_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_198_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_198_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_198_ce0 = ap_const_logic_1;
    } else {
        b_198_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_198_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C6))) {
        b_198_we0 = ap_const_logic_1;
    } else {
        b_198_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_199_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_199_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_199_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_199_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_199_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_199_ce0 = ap_const_logic_1;
    } else {
        b_199_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_199_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         (((((((((((((((((((((((((((((((((((((((((((((((((((((((((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                                  esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FF)) || 
                                                                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                                  esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FE))) || 
                                                                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                                 esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FD))) || 
                                                               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                                esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FC))) || 
                                                              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                               esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FB))) || 
                                                             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                              esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_FA))) || 
                                                            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                             esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F9))) || 
                                                           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                            esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F8))) || 
                                                          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                           esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F7))) || 
                                                         (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                          esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F6))) || 
                                                        (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F5))) || 
                                                       (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                        esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F4))) || 
                                                      (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                       esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F3))) || 
                                                     (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                      esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F2))) || 
                                                    (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                     esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F1))) || 
                                                   (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                    esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_F0))) || 
                                                  (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                   esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_EF))) || 
                                                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                  esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_EE))) || 
                                                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                 esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_ED))) || 
                                               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                                esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_EC))) || 
                                              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                               esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_EB))) || 
                                             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                              esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_EA))) || 
                                            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                             esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E9))) || 
                                           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                            esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E8))) || 
                                          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                           esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E7))) || 
                                         (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                          esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E6))) || 
                                        (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E5))) || 
                                       (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                        esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E4))) || 
                                      (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                       esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E3))) || 
                                     (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                      esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E2))) || 
                                    (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                     esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E1))) || 
                                   (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                    esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_E0))) || 
                                  (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                   esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DF))) || 
                                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                  esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DE))) || 
                                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                 esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DD))) || 
                               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                                esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DC))) || 
                              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                               esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DB))) || 
                             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                              esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_DA))) || 
                            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                             esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D9))) || 
                           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                            esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D8))) || 
                          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                           esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D7))) || 
                         (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                          esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D6))) || 
                        (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D5))) || 
                       (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                        esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D4))) || 
                      (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                       esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D3))) || 
                     (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                      esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D2))) || 
                    (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                     esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D1))) || 
                   (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                    esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_D0))) || 
                  (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                   esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CF))) || 
                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                  esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CE))) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                 esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CD))) || 
               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
                esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CC))) || 
              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
               esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CB))) || 
             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
              esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_CA))) || 
            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
             esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C9))) || 
           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
            esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C8))) || 
          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
           esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_C7))))) {
        b_199_we0 = ap_const_logic_1;
    } else {
        b_199_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_19_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_19_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_19_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_19_ce0 = ap_const_logic_1;
    } else {
        b_19_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_13))) {
        b_19_we0 = ap_const_logic_1;
    } else {
        b_19_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_1_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_1_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_1_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_1_ce0 = ap_const_logic_1;
    } else {
        b_1_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1))) {
        b_1_we0 = ap_const_logic_1;
    } else {
        b_1_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_20_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_20_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_20_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_20_ce0 = ap_const_logic_1;
    } else {
        b_20_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_14))) {
        b_20_we0 = ap_const_logic_1;
    } else {
        b_20_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_21_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_21_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_21_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_21_ce0 = ap_const_logic_1;
    } else {
        b_21_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_15))) {
        b_21_we0 = ap_const_logic_1;
    } else {
        b_21_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_22_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_22_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_22_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_22_ce0 = ap_const_logic_1;
    } else {
        b_22_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_16))) {
        b_22_we0 = ap_const_logic_1;
    } else {
        b_22_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_23_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_23_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_23_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_23_ce0 = ap_const_logic_1;
    } else {
        b_23_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_17))) {
        b_23_we0 = ap_const_logic_1;
    } else {
        b_23_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_24_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_24_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_24_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_24_ce0 = ap_const_logic_1;
    } else {
        b_24_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_18))) {
        b_24_we0 = ap_const_logic_1;
    } else {
        b_24_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_25_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_25_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_25_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_25_ce0 = ap_const_logic_1;
    } else {
        b_25_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_19))) {
        b_25_we0 = ap_const_logic_1;
    } else {
        b_25_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_26_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_26_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_26_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_26_ce0 = ap_const_logic_1;
    } else {
        b_26_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1A))) {
        b_26_we0 = ap_const_logic_1;
    } else {
        b_26_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_27_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_27_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_27_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_27_ce0 = ap_const_logic_1;
    } else {
        b_27_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1B))) {
        b_27_we0 = ap_const_logic_1;
    } else {
        b_27_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_28_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_28_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_28_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_28_ce0 = ap_const_logic_1;
    } else {
        b_28_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1C))) {
        b_28_we0 = ap_const_logic_1;
    } else {
        b_28_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_29_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_29_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_29_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_29_ce0 = ap_const_logic_1;
    } else {
        b_29_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1D))) {
        b_29_we0 = ap_const_logic_1;
    } else {
        b_29_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_2_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_2_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_2_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_2_ce0 = ap_const_logic_1;
    } else {
        b_2_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2))) {
        b_2_we0 = ap_const_logic_1;
    } else {
        b_2_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_30_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_30_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_30_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_30_ce0 = ap_const_logic_1;
    } else {
        b_30_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1E))) {
        b_30_we0 = ap_const_logic_1;
    } else {
        b_30_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_31_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_31_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_31_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_31_ce0 = ap_const_logic_1;
    } else {
        b_31_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_1F))) {
        b_31_we0 = ap_const_logic_1;
    } else {
        b_31_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_32_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_32_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_32_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_32_ce0 = ap_const_logic_1;
    } else {
        b_32_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_20))) {
        b_32_we0 = ap_const_logic_1;
    } else {
        b_32_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_33_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_33_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_33_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_33_ce0 = ap_const_logic_1;
    } else {
        b_33_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_21))) {
        b_33_we0 = ap_const_logic_1;
    } else {
        b_33_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_34_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_34_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_34_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_34_ce0 = ap_const_logic_1;
    } else {
        b_34_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_22))) {
        b_34_we0 = ap_const_logic_1;
    } else {
        b_34_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_35_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_35_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_35_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_35_ce0 = ap_const_logic_1;
    } else {
        b_35_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_23))) {
        b_35_we0 = ap_const_logic_1;
    } else {
        b_35_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_36_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_36_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_36_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_36_ce0 = ap_const_logic_1;
    } else {
        b_36_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_24))) {
        b_36_we0 = ap_const_logic_1;
    } else {
        b_36_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_37_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_37_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_37_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_37_ce0 = ap_const_logic_1;
    } else {
        b_37_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_25))) {
        b_37_we0 = ap_const_logic_1;
    } else {
        b_37_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_38_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_38_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_38_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_38_ce0 = ap_const_logic_1;
    } else {
        b_38_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_26))) {
        b_38_we0 = ap_const_logic_1;
    } else {
        b_38_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_39_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_39_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_39_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_39_ce0 = ap_const_logic_1;
    } else {
        b_39_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_27))) {
        b_39_we0 = ap_const_logic_1;
    } else {
        b_39_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_3_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_3_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_3_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_3_ce0 = ap_const_logic_1;
    } else {
        b_3_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3))) {
        b_3_we0 = ap_const_logic_1;
    } else {
        b_3_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_40_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_40_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_40_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_40_ce0 = ap_const_logic_1;
    } else {
        b_40_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_28))) {
        b_40_we0 = ap_const_logic_1;
    } else {
        b_40_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_41_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_41_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_41_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_41_ce0 = ap_const_logic_1;
    } else {
        b_41_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_29))) {
        b_41_we0 = ap_const_logic_1;
    } else {
        b_41_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_42_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_42_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_42_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_42_ce0 = ap_const_logic_1;
    } else {
        b_42_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2A))) {
        b_42_we0 = ap_const_logic_1;
    } else {
        b_42_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_43_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_43_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_43_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_43_ce0 = ap_const_logic_1;
    } else {
        b_43_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2B))) {
        b_43_we0 = ap_const_logic_1;
    } else {
        b_43_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_44_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_44_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_44_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_44_ce0 = ap_const_logic_1;
    } else {
        b_44_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2C))) {
        b_44_we0 = ap_const_logic_1;
    } else {
        b_44_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_45_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_45_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_45_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_45_ce0 = ap_const_logic_1;
    } else {
        b_45_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2D))) {
        b_45_we0 = ap_const_logic_1;
    } else {
        b_45_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_46_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_46_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_46_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_46_ce0 = ap_const_logic_1;
    } else {
        b_46_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2E))) {
        b_46_we0 = ap_const_logic_1;
    } else {
        b_46_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_47_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_47_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_47_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_47_ce0 = ap_const_logic_1;
    } else {
        b_47_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_2F))) {
        b_47_we0 = ap_const_logic_1;
    } else {
        b_47_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_48_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_48_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_48_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_48_ce0 = ap_const_logic_1;
    } else {
        b_48_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_30))) {
        b_48_we0 = ap_const_logic_1;
    } else {
        b_48_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_49_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_49_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_49_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_49_ce0 = ap_const_logic_1;
    } else {
        b_49_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_31))) {
        b_49_we0 = ap_const_logic_1;
    } else {
        b_49_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_4_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_4_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_4_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_4_ce0 = ap_const_logic_1;
    } else {
        b_4_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4))) {
        b_4_we0 = ap_const_logic_1;
    } else {
        b_4_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_50_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_50_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_50_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_50_ce0 = ap_const_logic_1;
    } else {
        b_50_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_32))) {
        b_50_we0 = ap_const_logic_1;
    } else {
        b_50_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_51_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_51_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_51_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_51_ce0 = ap_const_logic_1;
    } else {
        b_51_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_33))) {
        b_51_we0 = ap_const_logic_1;
    } else {
        b_51_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_52_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_52_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_52_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_52_ce0 = ap_const_logic_1;
    } else {
        b_52_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_34))) {
        b_52_we0 = ap_const_logic_1;
    } else {
        b_52_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_53_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_53_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_53_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_53_ce0 = ap_const_logic_1;
    } else {
        b_53_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_35))) {
        b_53_we0 = ap_const_logic_1;
    } else {
        b_53_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_54_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_54_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_54_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_54_ce0 = ap_const_logic_1;
    } else {
        b_54_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_36))) {
        b_54_we0 = ap_const_logic_1;
    } else {
        b_54_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_55_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_55_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_55_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_55_ce0 = ap_const_logic_1;
    } else {
        b_55_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_37))) {
        b_55_we0 = ap_const_logic_1;
    } else {
        b_55_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_56_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_56_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_56_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_56_ce0 = ap_const_logic_1;
    } else {
        b_56_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_38))) {
        b_56_we0 = ap_const_logic_1;
    } else {
        b_56_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_57_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_57_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_57_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_57_ce0 = ap_const_logic_1;
    } else {
        b_57_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_39))) {
        b_57_we0 = ap_const_logic_1;
    } else {
        b_57_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_58_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_58_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_58_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_58_ce0 = ap_const_logic_1;
    } else {
        b_58_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3A))) {
        b_58_we0 = ap_const_logic_1;
    } else {
        b_58_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_59_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_59_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_59_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_59_ce0 = ap_const_logic_1;
    } else {
        b_59_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3B))) {
        b_59_we0 = ap_const_logic_1;
    } else {
        b_59_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_5_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_5_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_5_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_5_ce0 = ap_const_logic_1;
    } else {
        b_5_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5))) {
        b_5_we0 = ap_const_logic_1;
    } else {
        b_5_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_60_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_60_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_60_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_60_ce0 = ap_const_logic_1;
    } else {
        b_60_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3C))) {
        b_60_we0 = ap_const_logic_1;
    } else {
        b_60_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_61_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_61_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_61_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_61_ce0 = ap_const_logic_1;
    } else {
        b_61_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3D))) {
        b_61_we0 = ap_const_logic_1;
    } else {
        b_61_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_62_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_62_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_62_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_62_ce0 = ap_const_logic_1;
    } else {
        b_62_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3E))) {
        b_62_we0 = ap_const_logic_1;
    } else {
        b_62_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_63_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_63_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_63_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_63_ce0 = ap_const_logic_1;
    } else {
        b_63_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_3F))) {
        b_63_we0 = ap_const_logic_1;
    } else {
        b_63_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_64_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_64_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_64_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_64_ce0 = ap_const_logic_1;
    } else {
        b_64_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_40))) {
        b_64_we0 = ap_const_logic_1;
    } else {
        b_64_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_65_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_65_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_65_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_65_ce0 = ap_const_logic_1;
    } else {
        b_65_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_41))) {
        b_65_we0 = ap_const_logic_1;
    } else {
        b_65_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_66_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_66_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_66_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_66_ce0 = ap_const_logic_1;
    } else {
        b_66_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_42))) {
        b_66_we0 = ap_const_logic_1;
    } else {
        b_66_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_67_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_67_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_67_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_67_ce0 = ap_const_logic_1;
    } else {
        b_67_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_43))) {
        b_67_we0 = ap_const_logic_1;
    } else {
        b_67_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_68_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_68_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_68_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_68_ce0 = ap_const_logic_1;
    } else {
        b_68_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_44))) {
        b_68_we0 = ap_const_logic_1;
    } else {
        b_68_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_69_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_69_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_69_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_69_ce0 = ap_const_logic_1;
    } else {
        b_69_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_45))) {
        b_69_we0 = ap_const_logic_1;
    } else {
        b_69_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_6_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_6_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_6_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_6_ce0 = ap_const_logic_1;
    } else {
        b_6_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_6))) {
        b_6_we0 = ap_const_logic_1;
    } else {
        b_6_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_70_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_70_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_70_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_70_ce0 = ap_const_logic_1;
    } else {
        b_70_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_46))) {
        b_70_we0 = ap_const_logic_1;
    } else {
        b_70_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_71_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_71_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_71_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_71_ce0 = ap_const_logic_1;
    } else {
        b_71_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_47))) {
        b_71_we0 = ap_const_logic_1;
    } else {
        b_71_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_72_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_72_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_72_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_72_ce0 = ap_const_logic_1;
    } else {
        b_72_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_48))) {
        b_72_we0 = ap_const_logic_1;
    } else {
        b_72_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_73_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_73_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_73_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_73_ce0 = ap_const_logic_1;
    } else {
        b_73_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_49))) {
        b_73_we0 = ap_const_logic_1;
    } else {
        b_73_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_74_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_74_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_74_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_74_ce0 = ap_const_logic_1;
    } else {
        b_74_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4A))) {
        b_74_we0 = ap_const_logic_1;
    } else {
        b_74_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_75_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_75_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_75_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_75_ce0 = ap_const_logic_1;
    } else {
        b_75_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4B))) {
        b_75_we0 = ap_const_logic_1;
    } else {
        b_75_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_76_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_76_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_76_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_76_ce0 = ap_const_logic_1;
    } else {
        b_76_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4C))) {
        b_76_we0 = ap_const_logic_1;
    } else {
        b_76_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_77_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_77_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_77_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_77_ce0 = ap_const_logic_1;
    } else {
        b_77_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4D))) {
        b_77_we0 = ap_const_logic_1;
    } else {
        b_77_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_78_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_78_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_78_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_78_ce0 = ap_const_logic_1;
    } else {
        b_78_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4E))) {
        b_78_we0 = ap_const_logic_1;
    } else {
        b_78_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_79_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_79_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_79_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_79_ce0 = ap_const_logic_1;
    } else {
        b_79_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_4F))) {
        b_79_we0 = ap_const_logic_1;
    } else {
        b_79_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_7_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_7_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_7_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_7_ce0 = ap_const_logic_1;
    } else {
        b_7_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_7))) {
        b_7_we0 = ap_const_logic_1;
    } else {
        b_7_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_80_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_80_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_80_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_80_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_80_ce0 = ap_const_logic_1;
    } else {
        b_80_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_50))) {
        b_80_we0 = ap_const_logic_1;
    } else {
        b_80_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_81_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_81_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_81_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_81_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_81_ce0 = ap_const_logic_1;
    } else {
        b_81_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_51))) {
        b_81_we0 = ap_const_logic_1;
    } else {
        b_81_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_82_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_82_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_82_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_82_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_82_ce0 = ap_const_logic_1;
    } else {
        b_82_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_52))) {
        b_82_we0 = ap_const_logic_1;
    } else {
        b_82_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_83_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_83_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_83_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_83_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_83_ce0 = ap_const_logic_1;
    } else {
        b_83_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_53))) {
        b_83_we0 = ap_const_logic_1;
    } else {
        b_83_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_84_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_84_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_84_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_84_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_84_ce0 = ap_const_logic_1;
    } else {
        b_84_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_54))) {
        b_84_we0 = ap_const_logic_1;
    } else {
        b_84_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_85_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_85_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_85_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_85_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_85_ce0 = ap_const_logic_1;
    } else {
        b_85_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_55))) {
        b_85_we0 = ap_const_logic_1;
    } else {
        b_85_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_86_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_86_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_86_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_86_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_86_ce0 = ap_const_logic_1;
    } else {
        b_86_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_56))) {
        b_86_we0 = ap_const_logic_1;
    } else {
        b_86_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_87_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_87_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_87_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_87_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_87_ce0 = ap_const_logic_1;
    } else {
        b_87_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_57))) {
        b_87_we0 = ap_const_logic_1;
    } else {
        b_87_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_88_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_88_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_88_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_88_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_88_ce0 = ap_const_logic_1;
    } else {
        b_88_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_58))) {
        b_88_we0 = ap_const_logic_1;
    } else {
        b_88_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_89_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_89_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_89_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_89_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_89_ce0 = ap_const_logic_1;
    } else {
        b_89_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_59))) {
        b_89_we0 = ap_const_logic_1;
    } else {
        b_89_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_8_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_8_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_8_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_8_ce0 = ap_const_logic_1;
    } else {
        b_8_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_8))) {
        b_8_we0 = ap_const_logic_1;
    } else {
        b_8_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_90_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_90_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_90_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_90_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_90_ce0 = ap_const_logic_1;
    } else {
        b_90_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5A))) {
        b_90_we0 = ap_const_logic_1;
    } else {
        b_90_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_91_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_91_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_91_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_91_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_91_ce0 = ap_const_logic_1;
    } else {
        b_91_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5B))) {
        b_91_we0 = ap_const_logic_1;
    } else {
        b_91_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_92_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_92_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_92_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_92_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_92_ce0 = ap_const_logic_1;
    } else {
        b_92_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5C))) {
        b_92_we0 = ap_const_logic_1;
    } else {
        b_92_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_93_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_93_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_93_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_93_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_93_ce0 = ap_const_logic_1;
    } else {
        b_93_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5D))) {
        b_93_we0 = ap_const_logic_1;
    } else {
        b_93_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_94_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_94_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_94_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_94_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_94_ce0 = ap_const_logic_1;
    } else {
        b_94_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5E))) {
        b_94_we0 = ap_const_logic_1;
    } else {
        b_94_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_95_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_95_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_95_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_95_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_95_ce0 = ap_const_logic_1;
    } else {
        b_95_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_5F))) {
        b_95_we0 = ap_const_logic_1;
    } else {
        b_95_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_96_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_96_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_96_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_96_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_96_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_96_ce0 = ap_const_logic_1;
    } else {
        b_96_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_60))) {
        b_96_we0 = ap_const_logic_1;
    } else {
        b_96_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_97_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_97_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_97_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_97_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_97_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_97_ce0 = ap_const_logic_1;
    } else {
        b_97_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_97_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_61))) {
        b_97_we0 = ap_const_logic_1;
    } else {
        b_97_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_98_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_98_address0 =  (sc_lv<8>) (tmp_5_reg_12569.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_98_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_98_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_98_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_98_ce0 = ap_const_logic_1;
    } else {
        b_98_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_98_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_62))) {
        b_98_we0 = ap_const_logic_1;
    } else {
        b_98_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_99_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_99_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_99_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_99_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_99_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_99_ce0 = ap_const_logic_1;
    } else {
        b_99_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_99_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_63))) {
        b_99_we0 = ap_const_logic_1;
    } else {
        b_99_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_9_address0 =  (sc_lv<8>) (tmp_5_reg_12569_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_9_address0 =  (sc_lv<8>) (tmp_7_fu_10590_p1.read());
    } else {
        b_9_address0 = "XXXXXXXX";
    }
}

void HLS_accel::thread_b_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_9_ce0 = ap_const_logic_1;
    } else {
        b_9_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_fu_10550_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,8,8>(i1_0_i_mid2_fu_10582_p3.read(), ap_const_lv8_9))) {
        b_9_we0 = ap_const_logic_1;
    } else {
        b_9_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_exitcond1_i_i_fu_10818_p2() {
    exitcond1_i_i_fu_10818_p2 = (!ib_0_i_i_reg_9852.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(ib_0_i_i_reg_9852.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond2_i_fu_10568_p2() {
    exitcond2_i_fu_10568_p2 = (!j2_0_i_reg_9819.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j2_0_i_reg_9819.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond4_i_fu_10318_p2() {
    exitcond4_i_fu_10318_p2 = (!j_0_i_reg_9786.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i_reg_9786.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond_flatten1_fu_10550_p2() {
    exitcond_flatten1_fu_10550_p2 = (!indvar_flatten1_reg_9797.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_9797.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten2_fu_10800_p2() {
    exitcond_flatten2_fu_10800_p2 = (!indvar_flatten2_reg_9830.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_reg_9830.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten3_fu_11195_p2() {
    exitcond_flatten3_fu_11195_p2 = (!indvar_flatten3_reg_9863.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten3_reg_9863.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten_fu_10300_p2() {
    exitcond_flatten_fu_10300_p2 = (!indvar_flatten_reg_9764.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_9764.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_i_fu_11213_p2() {
    exitcond_i_fu_11213_p2 = (!j5_0_i_reg_9885.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j5_0_i_reg_9885.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_grp_fu_12275_p0() {
    grp_fu_12275_p0 =  (sc_lv<8>) (grp_fu_12275_p00.read());
}

void HLS_accel::thread_grp_fu_12275_p00() {
    grp_fu_12275_p00 = esl_zext<16,8>(tmp_8_mid2_v_reg_12355_pp2_iter6_reg.read());
}

void HLS_accel::thread_grp_fu_12275_p1() {
    grp_fu_12275_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_12275_p2() {
    grp_fu_12275_p2 =  (sc_lv<8>) (grp_fu_12275_p20.read());
}

void HLS_accel::thread_grp_fu_12275_p20() {
    grp_fu_12275_p20 = esl_zext<16,8>(ib_0_i_i_mid2_reg_12350_pp2_iter6_reg.read());
}

void HLS_accel::thread_grp_fu_12284_p0() {
    grp_fu_12284_p0 =  (sc_lv<8>) (grp_fu_12284_p00.read());
}

void HLS_accel::thread_grp_fu_12284_p00() {
    grp_fu_12284_p00 = esl_zext<16,8>(tmp_9_mid2_v_v_reg_17476.read());
}

void HLS_accel::thread_grp_fu_12284_p1() {
    grp_fu_12284_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_12284_p2() {
    grp_fu_12284_p2 =  (sc_lv<8>) (j5_0_i_cast_fu_11247_p1.read());
}

void HLS_accel::thread_grp_fu_12293_p0() {
    grp_fu_12293_p0 =  (sc_lv<8>) (grp_fu_12293_p00.read());
}

void HLS_accel::thread_grp_fu_12293_p00() {
    grp_fu_12293_p00 = esl_zext<16,8>(tmp_9_mid2_v_v_reg_17476.read());
}

void HLS_accel::thread_grp_fu_12293_p1() {
    grp_fu_12293_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_12293_p2() {
    grp_fu_12293_p2 =  (sc_lv<8>) (j5_0_i_cast_fu_11247_p1.read());
}

void HLS_accel::thread_i1_0_i_mid2_fu_10582_p3() {
    i1_0_i_mid2_fu_10582_p3 = (!exitcond2_i_fu_10568_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond2_i_fu_10568_p2.read()[0].to_bool())? i_1_fu_10562_p2.read(): i1_0_i_reg_9808.read());
}

void HLS_accel::thread_i_1_fu_10562_p2() {
    i_1_fu_10562_p2 = (!i1_0_i_reg_9808.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i1_0_i_reg_9808.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_i_2_fu_11207_p2() {
    i_2_fu_11207_p2 = (!ap_phi_mux_i4_0_i_phi_fu_9878_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_i4_0_i_phi_fu_9878_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_i_fu_10312_p2() {
    i_fu_10312_p2 = (!i_0_i_reg_9775.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i_0_i_reg_9775.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_ia_fu_10812_p2() {
    ia_fu_10812_p2 = (!ap_phi_mux_ia_0_i_i_phi_fu_9845_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_ia_0_i_i_phi_fu_9845_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_ib_0_i_i_mid2_fu_10824_p3() {
    ib_0_i_i_mid2_fu_10824_p3 = (!exitcond1_i_i_fu_10818_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_10818_p2.read()[0].to_bool())? ap_const_lv8_0: ib_0_i_i_reg_9852.read());
}

void HLS_accel::thread_ib_fu_10850_p2() {
    ib_fu_10850_p2 = (!ib_0_i_i_mid2_fu_10824_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ib_0_i_i_mid2_fu_10824_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_indvar_flatten_next1_fu_10806_p2() {
    indvar_flatten_next1_fu_10806_p2 = (!indvar_flatten2_reg_9830.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten2_reg_9830.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next2_fu_10556_p2() {
    indvar_flatten_next2_fu_10556_p2 = (!indvar_flatten1_reg_9797.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten1_reg_9797.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next3_fu_11201_p2() {
    indvar_flatten_next3_fu_11201_p2 = (!indvar_flatten3_reg_9863.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten3_reg_9863.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next_fu_10306_p2() {
    indvar_flatten_next_fu_10306_p2 = (!indvar_flatten_reg_9764.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten_reg_9764.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_j2_0_i_mid2_fu_10574_p3() {
    j2_0_i_mid2_fu_10574_p3 = (!exitcond2_i_fu_10568_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond2_i_fu_10568_p2.read()[0].to_bool())? ap_const_lv8_0: j2_0_i_reg_9819.read());
}

void HLS_accel::thread_j5_0_i_cast_fu_11247_p1() {
    j5_0_i_cast_fu_11247_p1 = esl_zext<16,8>(j5_0_i_mid2_reg_17471.read());
}

void HLS_accel::thread_j5_0_i_mid2_fu_11219_p3() {
    j5_0_i_mid2_fu_11219_p3 = (!exitcond_i_fu_11213_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_11213_p2.read()[0].to_bool())? ap_const_lv8_0: j5_0_i_reg_9885.read());
}

void HLS_accel::thread_j_0_i_mid2_fu_10324_p3() {
    j_0_i_mid2_fu_10324_p3 = (!exitcond4_i_fu_10318_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_10318_p2.read()[0].to_bool())? ap_const_lv8_0: j_0_i_reg_9786.read());
}

void HLS_accel::thread_j_1_fu_10794_p2() {
    j_1_fu_10794_p2 = (!j2_0_i_mid2_fu_10574_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j2_0_i_mid2_fu_10574_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_2_fu_11235_p2() {
    j_2_fu_11235_p2 = (!j5_0_i_mid2_fu_11219_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j5_0_i_mid2_fu_11219_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_fu_10544_p2() {
    j_fu_10544_p2 = (!j_0_i_mid2_fu_10324_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_0_i_mid2_fu_10324_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_last_assign_fu_11254_p2() {
    last_assign_fu_11254_p2 = (!grp_fu_12284_p3.read().is_01() || !ap_const_lv16_9C3F.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_12284_p3.read() == ap_const_lv16_9C3F);
}

void HLS_accel::thread_out_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        out_address0 =  (sc_lv<16>) (tmp_199_cast_fu_11250_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()))) {
        out_address0 =  (sc_lv<16>) (tmp_2_cast_fu_11181_p1.read());
    } else {
        out_address0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void HLS_accel::thread_out_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read())))) {
        out_ce0 = ap_const_logic_1;
    } else {
        out_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_out_d0() {
    out_d0 = (!tmp99_reg_17457.read().is_01() || !tmp_fu_11185_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp99_reg_17457.read()) + sc_biguint<16>(tmp_fu_11185_p2.read()));
}

void HLS_accel::thread_out_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten2_reg_12341_pp2_iter6_reg.read()))) {
        out_we0 = ap_const_logic_1;
    } else {
        out_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_tmp100_fu_11154_p2() {
    tmp100_fu_11154_p2 = (!tmp125_fu_11149_p2.read().is_01() || !tmp101_fu_11140_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp125_fu_11149_p2.read()) + sc_biguint<16>(tmp101_fu_11140_p2.read()));
}

void HLS_accel::thread_tmp101_fu_11140_p2() {
    tmp101_fu_11140_p2 = (!tmp113_reg_17412.read().is_01() || !tmp102_fu_11136_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp113_reg_17412.read()) + sc_biguint<16>(tmp102_fu_11136_p2.read()));
}

void HLS_accel::thread_tmp102_fu_11136_p2() {
    tmp102_fu_11136_p2 = (!tmp108_reg_17407.read().is_01() || !tmp103_reg_17402.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp108_reg_17407.read()) + sc_biguint<16>(tmp103_reg_17402.read()));
}

void HLS_accel::thread_tmp103_fu_10957_p2() {
    tmp103_fu_10957_p2 = (!grp_fu_12143_p3.read().is_01() || !grp_fu_12131_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12143_p3.read()) + sc_bigint<16>(grp_fu_12131_p3.read()));
}

void HLS_accel::thread_tmp108_fu_10961_p2() {
    tmp108_fu_10961_p2 = (!grp_fu_12167_p3.read().is_01() || !grp_fu_12155_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12167_p3.read()) + sc_bigint<16>(grp_fu_12155_p3.read()));
}

void HLS_accel::thread_tmp113_fu_10978_p2() {
    tmp113_fu_10978_p2 = (!tmp119_fu_10973_p2.read().is_01() || !tmp114_fu_10965_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp119_fu_10973_p2.read()) + sc_biguint<16>(tmp114_fu_10965_p2.read()));
}

void HLS_accel::thread_tmp114_fu_10965_p2() {
    tmp114_fu_10965_p2 = (!grp_fu_12185_p3.read().is_01() || !grp_fu_12179_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12185_p3.read()) + sc_bigint<16>(grp_fu_12179_p3.read()));
}

void HLS_accel::thread_tmp119_fu_10973_p2() {
    tmp119_fu_10973_p2 = (!tmp122_fu_10969_p2.read().is_01() || !tmp120_reg_17207.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp122_fu_10969_p2.read()) + sc_bigint<16>(tmp120_reg_17207.read()));
}

void HLS_accel::thread_tmp122_fu_10969_p2() {
    tmp122_fu_10969_p2 = (!tmp124_reg_17217.read().is_01() || !tmp123_reg_17212.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp124_reg_17217.read()) + sc_bigint<16>(tmp123_reg_17212.read()));
}

void HLS_accel::thread_tmp125_fu_11149_p2() {
    tmp125_fu_11149_p2 = (!tmp137_reg_17427.read().is_01() || !tmp126_fu_11145_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp137_reg_17427.read()) + sc_biguint<16>(tmp126_fu_11145_p2.read()));
}

void HLS_accel::thread_tmp126_fu_11145_p2() {
    tmp126_fu_11145_p2 = (!tmp132_reg_17422.read().is_01() || !tmp127_reg_17417.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp132_reg_17422.read()) + sc_biguint<16>(tmp127_reg_17417.read()));
}

void HLS_accel::thread_tmp127_fu_10984_p2() {
    tmp127_fu_10984_p2 = (!grp_fu_12203_p3.read().is_01() || !grp_fu_12191_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12203_p3.read()) + sc_bigint<16>(grp_fu_12191_p3.read()));
}

void HLS_accel::thread_tmp132_fu_10988_p2() {
    tmp132_fu_10988_p2 = (!grp_fu_12227_p3.read().is_01() || !grp_fu_12215_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12227_p3.read()) + sc_bigint<16>(grp_fu_12215_p3.read()));
}

void HLS_accel::thread_tmp137_fu_11005_p2() {
    tmp137_fu_11005_p2 = (!tmp143_fu_11000_p2.read().is_01() || !tmp138_fu_10992_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp143_fu_11000_p2.read()) + sc_biguint<16>(tmp138_fu_10992_p2.read()));
}

void HLS_accel::thread_tmp138_fu_10992_p2() {
    tmp138_fu_10992_p2 = (!grp_fu_12245_p3.read().is_01() || !grp_fu_12239_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12245_p3.read()) + sc_bigint<16>(grp_fu_12239_p3.read()));
}

void HLS_accel::thread_tmp143_fu_11000_p2() {
    tmp143_fu_11000_p2 = (!tmp146_fu_10996_p2.read().is_01() || !tmp144_reg_17232.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp146_fu_10996_p2.read()) + sc_bigint<16>(tmp144_reg_17232.read()));
}

void HLS_accel::thread_tmp146_fu_10996_p2() {
    tmp146_fu_10996_p2 = (!tmp148_reg_17242.read().is_01() || !tmp147_reg_17237.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp148_reg_17242.read()) + sc_bigint<16>(tmp147_reg_17237.read()));
}

void HLS_accel::thread_tmp149_fu_11164_p2() {
    tmp149_fu_11164_p2 = (!tmp174_reg_17442.read().is_01() || !tmp150_fu_11160_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp174_reg_17442.read()) + sc_biguint<16>(tmp150_fu_11160_p2.read()));
}

void HLS_accel::thread_tmp14_fu_11071_p2() {
    tmp14_fu_11071_p2 = (!tmp20_reg_17337.read().is_01() || !tmp15_fu_11067_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp20_reg_17337.read()) + sc_biguint<16>(tmp15_fu_11067_p2.read()));
}

void HLS_accel::thread_tmp150_fu_11160_p2() {
    tmp150_fu_11160_p2 = (!tmp162_reg_17437.read().is_01() || !tmp151_reg_17432.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp162_reg_17437.read()) + sc_biguint<16>(tmp151_reg_17432.read()));
}

void HLS_accel::thread_tmp151_fu_11015_p2() {
    tmp151_fu_11015_p2 = (!tmp157_reg_17257.read().is_01() || !tmp152_fu_11011_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp157_reg_17257.read()) + sc_biguint<16>(tmp152_fu_11011_p2.read()));
}

void HLS_accel::thread_tmp152_fu_11011_p2() {
    tmp152_fu_11011_p2 = (!grp_fu_12257_p3.read().is_01() || !grp_fu_12251_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12257_p3.read()) + sc_bigint<16>(grp_fu_12251_p3.read()));
}

void HLS_accel::thread_tmp157_fu_10856_p2() {
    tmp157_fu_10856_p2 = (!grp_fu_11708_p3.read().is_01() || !grp_fu_11696_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11708_p3.read()) + sc_bigint<16>(grp_fu_11696_p3.read()));
}

void HLS_accel::thread_tmp15_fu_11067_p2() {
    tmp15_fu_11067_p2 = (!tmp18_reg_17332.read().is_01() || !tmp16_reg_17327.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp18_reg_17332.read()) + sc_bigint<16>(tmp16_reg_17327.read()));
}

void HLS_accel::thread_tmp162_fu_11033_p2() {
    tmp162_fu_11033_p2 = (!tmp168_fu_11028_p2.read().is_01() || !tmp163_fu_11020_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp168_fu_11028_p2.read()) + sc_biguint<16>(tmp163_fu_11020_p2.read()));
}

void HLS_accel::thread_tmp163_fu_11020_p2() {
    tmp163_fu_11020_p2 = (!grp_fu_12269_p3.read().is_01() || !grp_fu_12263_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12269_p3.read()) + sc_bigint<16>(grp_fu_12263_p3.read()));
}

void HLS_accel::thread_tmp168_fu_11028_p2() {
    tmp168_fu_11028_p2 = (!tmp171_fu_11024_p2.read().is_01() || !tmp169_reg_17272.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp171_fu_11024_p2.read()) + sc_bigint<16>(tmp169_reg_17272.read()));
}

void HLS_accel::thread_tmp171_fu_11024_p2() {
    tmp171_fu_11024_p2 = (!tmp173_reg_17282.read().is_01() || !tmp172_reg_17277.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp173_reg_17282.read()) + sc_bigint<16>(tmp172_reg_17277.read()));
}

void HLS_accel::thread_tmp174_fu_11052_p2() {
    tmp174_fu_11052_p2 = (!tmp186_fu_11047_p2.read().is_01() || !tmp175_fu_11039_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp186_fu_11047_p2.read()) + sc_biguint<16>(tmp175_fu_11039_p2.read()));
}

void HLS_accel::thread_tmp175_fu_11039_p2() {
    tmp175_fu_11039_p2 = (!tmp181_reg_17292.read().is_01() || !tmp176_reg_17287.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp181_reg_17292.read()) + sc_biguint<16>(tmp176_reg_17287.read()));
}

void HLS_accel::thread_tmp176_fu_10860_p2() {
    tmp176_fu_10860_p2 = (!grp_fu_11763_p3.read().is_01() || !grp_fu_11751_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11763_p3.read()) + sc_bigint<16>(grp_fu_11751_p3.read()));
}

void HLS_accel::thread_tmp181_fu_10864_p2() {
    tmp181_fu_10864_p2 = (!grp_fu_11787_p3.read().is_01() || !grp_fu_11775_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11787_p3.read()) + sc_bigint<16>(grp_fu_11775_p3.read()));
}

void HLS_accel::thread_tmp186_fu_11047_p2() {
    tmp186_fu_11047_p2 = (!tmp192_reg_17307.read().is_01() || !tmp187_fu_11043_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp192_reg_17307.read()) + sc_biguint<16>(tmp187_fu_11043_p2.read()));
}

void HLS_accel::thread_tmp187_fu_11043_p2() {
    tmp187_fu_11043_p2 = (!tmp190_reg_17302.read().is_01() || !tmp188_reg_17297.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp190_reg_17302.read()) + sc_bigint<16>(tmp188_reg_17297.read()));
}

void HLS_accel::thread_tmp192_fu_10872_p2() {
    tmp192_fu_10872_p2 = (!tmp195_fu_10868_p2.read().is_01() || !grp_fu_11821_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp195_fu_10868_p2.read()) + sc_bigint<16>(grp_fu_11821_p3.read()));
}

void HLS_accel::thread_tmp195_fu_10868_p2() {
    tmp195_fu_10868_p2 = (!grp_fu_11833_p3.read().is_01() || !grp_fu_11827_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11833_p3.read()) + sc_bigint<16>(grp_fu_11827_p3.read()));
}

void HLS_accel::thread_tmp1_fu_11091_p2() {
    tmp1_fu_11091_p2 = (!tmp26_fu_11086_p2.read().is_01() || !tmp2_fu_11076_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp26_fu_11086_p2.read()) + sc_biguint<16>(tmp2_fu_11076_p2.read()));
}

void HLS_accel::thread_tmp20_fu_10885_p2() {
    tmp20_fu_10885_p2 = (!tmp23_fu_10881_p2.read().is_01() || !grp_fu_11907_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp23_fu_10881_p2.read()) + sc_bigint<16>(grp_fu_11907_p3.read()));
}

void HLS_accel::thread_tmp23_fu_10881_p2() {
    tmp23_fu_10881_p2 = (!grp_fu_11919_p3.read().is_01() || !grp_fu_11913_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11919_p3.read()) + sc_bigint<16>(grp_fu_11913_p3.read()));
}

void HLS_accel::thread_tmp26_fu_11086_p2() {
    tmp26_fu_11086_p2 = (!tmp38_reg_17352.read().is_01() || !tmp27_fu_11082_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp38_reg_17352.read()) + sc_biguint<16>(tmp27_fu_11082_p2.read()));
}

void HLS_accel::thread_tmp27_fu_11082_p2() {
    tmp27_fu_11082_p2 = (!tmp33_reg_17347.read().is_01() || !tmp28_reg_17342.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp33_reg_17347.read()) + sc_biguint<16>(tmp28_reg_17342.read()));
}

void HLS_accel::thread_tmp28_fu_10890_p2() {
    tmp28_fu_10890_p2 = (!grp_fu_11937_p3.read().is_01() || !grp_fu_11925_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11937_p3.read()) + sc_bigint<16>(grp_fu_11925_p3.read()));
}

void HLS_accel::thread_tmp2_fu_11076_p2() {
    tmp2_fu_11076_p2 = (!tmp14_fu_11071_p2.read().is_01() || !tmp3_fu_11062_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp14_fu_11071_p2.read()) + sc_biguint<16>(tmp3_fu_11062_p2.read()));
}

void HLS_accel::thread_tmp33_fu_10894_p2() {
    tmp33_fu_10894_p2 = (!grp_fu_11961_p3.read().is_01() || !grp_fu_11949_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11961_p3.read()) + sc_bigint<16>(grp_fu_11949_p3.read()));
}

void HLS_accel::thread_tmp38_fu_10911_p2() {
    tmp38_fu_10911_p2 = (!tmp44_fu_10906_p2.read().is_01() || !tmp39_fu_10898_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp44_fu_10906_p2.read()) + sc_biguint<16>(tmp39_fu_10898_p2.read()));
}

void HLS_accel::thread_tmp39_fu_10898_p2() {
    tmp39_fu_10898_p2 = (!grp_fu_11979_p3.read().is_01() || !grp_fu_11973_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11979_p3.read()) + sc_bigint<16>(grp_fu_11973_p3.read()));
}

void HLS_accel::thread_tmp3_fu_11062_p2() {
    tmp3_fu_11062_p2 = (!tmp9_reg_17322.read().is_01() || !tmp4_fu_11058_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp9_reg_17322.read()) + sc_biguint<16>(tmp4_fu_11058_p2.read()));
}

void HLS_accel::thread_tmp44_fu_10906_p2() {
    tmp44_fu_10906_p2 = (!tmp47_fu_10902_p2.read().is_01() || !tmp45_reg_17152.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp47_fu_10902_p2.read()) + sc_bigint<16>(tmp45_reg_17152.read()));
}

void HLS_accel::thread_tmp47_fu_10902_p2() {
    tmp47_fu_10902_p2 = (!tmp49_reg_17162.read().is_01() || !tmp48_reg_17157.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp49_reg_17162.read()) + sc_bigint<16>(tmp48_reg_17157.read()));
}

void HLS_accel::thread_tmp4_fu_11058_p2() {
    tmp4_fu_11058_p2 = (!tmp7_reg_17317.read().is_01() || !tmp5_reg_17312.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp7_reg_17317.read()) + sc_bigint<16>(tmp5_reg_17312.read()));
}

void HLS_accel::thread_tmp50_fu_11130_p2() {
    tmp50_fu_11130_p2 = (!tmp75_fu_11125_p2.read().is_01() || !tmp51_fu_11115_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp75_fu_11125_p2.read()) + sc_biguint<16>(tmp51_fu_11115_p2.read()));
}

void HLS_accel::thread_tmp51_fu_11115_p2() {
    tmp51_fu_11115_p2 = (!tmp63_fu_11110_p2.read().is_01() || !tmp52_fu_11101_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp63_fu_11110_p2.read()) + sc_biguint<16>(tmp52_fu_11101_p2.read()));
}

void HLS_accel::thread_tmp52_fu_11101_p2() {
    tmp52_fu_11101_p2 = (!tmp58_reg_17367.read().is_01() || !tmp53_fu_11097_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp58_reg_17367.read()) + sc_biguint<16>(tmp53_fu_11097_p2.read()));
}

void HLS_accel::thread_tmp53_fu_11097_p2() {
    tmp53_fu_11097_p2 = (!tmp56_reg_17362.read().is_01() || !tmp54_reg_17357.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp56_reg_17362.read()) + sc_bigint<16>(tmp54_reg_17357.read()));
}

void HLS_accel::thread_tmp58_fu_10917_p2() {
    tmp58_fu_10917_p2 = (!grp_fu_12019_p3.read().is_01() || !grp_fu_12007_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12019_p3.read()) + sc_bigint<16>(grp_fu_12007_p3.read()));
}

void HLS_accel::thread_tmp63_fu_11110_p2() {
    tmp63_fu_11110_p2 = (!tmp69_reg_17382.read().is_01() || !tmp64_fu_11106_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp69_reg_17382.read()) + sc_biguint<16>(tmp64_fu_11106_p2.read()));
}

void HLS_accel::thread_tmp64_fu_11106_p2() {
    tmp64_fu_11106_p2 = (!tmp67_reg_17377.read().is_01() || !tmp65_reg_17372.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp67_reg_17377.read()) + sc_bigint<16>(tmp65_reg_17372.read()));
}

void HLS_accel::thread_tmp69_fu_10925_p2() {
    tmp69_fu_10925_p2 = (!tmp72_fu_10921_p2.read().is_01() || !grp_fu_12053_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp72_fu_10921_p2.read()) + sc_bigint<16>(grp_fu_12053_p3.read()));
}

void HLS_accel::thread_tmp72_fu_10921_p2() {
    tmp72_fu_10921_p2 = (!grp_fu_12065_p3.read().is_01() || !grp_fu_12059_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12065_p3.read()) + sc_bigint<16>(grp_fu_12059_p3.read()));
}

void HLS_accel::thread_tmp75_fu_11125_p2() {
    tmp75_fu_11125_p2 = (!tmp87_reg_17397.read().is_01() || !tmp76_fu_11121_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp87_reg_17397.read()) + sc_biguint<16>(tmp76_fu_11121_p2.read()));
}

void HLS_accel::thread_tmp76_fu_11121_p2() {
    tmp76_fu_11121_p2 = (!tmp82_reg_17392.read().is_01() || !tmp77_reg_17387.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp82_reg_17392.read()) + sc_biguint<16>(tmp77_reg_17387.read()));
}

void HLS_accel::thread_tmp77_fu_10930_p2() {
    tmp77_fu_10930_p2 = (!grp_fu_12083_p3.read().is_01() || !grp_fu_12071_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12083_p3.read()) + sc_bigint<16>(grp_fu_12071_p3.read()));
}

void HLS_accel::thread_tmp82_fu_10934_p2() {
    tmp82_fu_10934_p2 = (!grp_fu_12107_p3.read().is_01() || !grp_fu_12095_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12107_p3.read()) + sc_bigint<16>(grp_fu_12095_p3.read()));
}

void HLS_accel::thread_tmp87_fu_10951_p2() {
    tmp87_fu_10951_p2 = (!tmp93_fu_10946_p2.read().is_01() || !tmp88_fu_10938_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp93_fu_10946_p2.read()) + sc_biguint<16>(tmp88_fu_10938_p2.read()));
}

void HLS_accel::thread_tmp88_fu_10938_p2() {
    tmp88_fu_10938_p2 = (!grp_fu_12125_p3.read().is_01() || !grp_fu_12119_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_12125_p3.read()) + sc_bigint<16>(grp_fu_12119_p3.read()));
}

void HLS_accel::thread_tmp93_fu_10946_p2() {
    tmp93_fu_10946_p2 = (!tmp96_fu_10942_p2.read().is_01() || !tmp94_reg_17182.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp96_fu_10942_p2.read()) + sc_bigint<16>(tmp94_reg_17182.read()));
}

void HLS_accel::thread_tmp96_fu_10942_p2() {
    tmp96_fu_10942_p2 = (!tmp98_reg_17192.read().is_01() || !tmp97_reg_17187.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp98_reg_17192.read()) + sc_bigint<16>(tmp97_reg_17187.read()));
}

void HLS_accel::thread_tmp99_fu_11169_p2() {
    tmp99_fu_11169_p2 = (!tmp149_fu_11164_p2.read().is_01() || !tmp100_fu_11154_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp149_fu_11164_p2.read()) + sc_biguint<16>(tmp100_fu_11154_p2.read()));
}

void HLS_accel::thread_tmp9_fu_10877_p2() {
    tmp9_fu_10877_p2 = (!grp_fu_11873_p3.read().is_01() || !grp_fu_11861_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_11873_p3.read()) + sc_bigint<16>(grp_fu_11861_p3.read()));
}

void HLS_accel::thread_tmp_199_cast_fu_11250_p1() {
    tmp_199_cast_fu_11250_p1 = esl_zext<64,16>(grp_fu_12293_p3.read());
}

void HLS_accel::thread_tmp_1_mid2_fu_10340_p1() {
    tmp_1_mid2_fu_10340_p1 = esl_zext<64,8>(tmp_1_mid2_v_fu_10332_p3.read());
}

void HLS_accel::thread_tmp_1_mid2_v_fu_10332_p3() {
    tmp_1_mid2_v_fu_10332_p3 = (!exitcond4_i_fu_10318_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_10318_p2.read()[0].to_bool())? i_fu_10312_p2.read(): i_0_i_reg_9775.read());
}

void HLS_accel::thread_tmp_2_cast_fu_11181_p1() {
    tmp_2_cast_fu_11181_p1 = esl_zext<64,16>(grp_fu_12275_p3.read());
}

void HLS_accel::thread_tmp_5_fu_10845_p1() {
    tmp_5_fu_10845_p1 = esl_zext<64,8>(ib_0_i_i_mid2_fu_10824_p3.read());
}

void HLS_accel::thread_tmp_7_fu_10590_p1() {
    tmp_7_fu_10590_p1 = esl_zext<64,8>(j2_0_i_mid2_fu_10574_p3.read());
}

void HLS_accel::thread_tmp_8_mid2_fu_10840_p1() {
    tmp_8_mid2_fu_10840_p1 = esl_zext<64,8>(tmp_8_mid2_v_fu_10832_p3.read());
}

void HLS_accel::thread_tmp_8_mid2_v_fu_10832_p3() {
    tmp_8_mid2_v_fu_10832_p3 = (!exitcond1_i_i_fu_10818_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_10818_p2.read()[0].to_bool())? ia_fu_10812_p2.read(): ap_phi_mux_ia_0_i_i_phi_fu_9845_p4.read());
}

void HLS_accel::thread_tmp_9_mid2_v_v_fu_11227_p3() {
    tmp_9_mid2_v_v_fu_11227_p3 = (!exitcond_i_fu_11213_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_11213_p2.read()[0].to_bool())? i_2_fu_11207_p2.read(): ap_phi_mux_i4_0_i_phi_fu_9878_p4.read());
}

void HLS_accel::thread_tmp_fu_11185_p2() {
    tmp_fu_11185_p2 = (!tmp50_reg_17452.read().is_01() || !tmp1_reg_17447.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp50_reg_17452.read()) + sc_biguint<16>(tmp1_reg_17447.read()));
}

}

