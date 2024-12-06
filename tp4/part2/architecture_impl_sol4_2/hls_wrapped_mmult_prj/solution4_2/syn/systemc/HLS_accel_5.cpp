#include "HLS_accel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void HLS_accel::thread_b_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4E, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_78_we0 = ap_const_logic_1;
    } else {
        b_78_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_79_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_79_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_79_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_79_address1() {
    b_79_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_79_ce0 = ap_const_logic_1;
    } else {
        b_79_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_79_ce1 = ap_const_logic_1;
    } else {
        b_79_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_4F, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_79_we0 = ap_const_logic_1;
    } else {
        b_79_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_7_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter2_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_7_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_7_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_7_address1() {
    b_7_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063_pp2_iter2_reg.read());
}

void HLS_accel::thread_b_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read())))) {
        b_7_ce0 = ap_const_logic_1;
    } else {
        b_7_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        b_7_ce1 = ap_const_logic_1;
    } else {
        b_7_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_7, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_7_we0 = ap_const_logic_1;
    } else {
        b_7_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_80_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_80_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_80_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_80_address1() {
    b_80_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_80_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_80_ce0 = ap_const_logic_1;
    } else {
        b_80_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_80_ce1 = ap_const_logic_1;
    } else {
        b_80_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_50, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_80_we0 = ap_const_logic_1;
    } else {
        b_80_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_81_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_81_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_81_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_81_address1() {
    b_81_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter2_reg.read());
}

void HLS_accel::thread_b_81_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_81_ce0 = ap_const_logic_1;
    } else {
        b_81_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        b_81_ce1 = ap_const_logic_1;
    } else {
        b_81_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_51, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_81_we0 = ap_const_logic_1;
    } else {
        b_81_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_82_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_82_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_82_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_82_address1() {
    b_82_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063_pp2_iter2_reg.read());
}

void HLS_accel::thread_b_82_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_82_ce0 = ap_const_logic_1;
    } else {
        b_82_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        b_82_ce1 = ap_const_logic_1;
    } else {
        b_82_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_52, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_82_we0 = ap_const_logic_1;
    } else {
        b_82_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_83_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_83_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_83_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_83_address1() {
    b_83_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_83_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_83_ce0 = ap_const_logic_1;
    } else {
        b_83_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_83_ce1 = ap_const_logic_1;
    } else {
        b_83_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_53, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_83_we0 = ap_const_logic_1;
    } else {
        b_83_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_84_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_84_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_84_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_84_address1() {
    b_84_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_84_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_84_ce0 = ap_const_logic_1;
    } else {
        b_84_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_84_ce1 = ap_const_logic_1;
    } else {
        b_84_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_54, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_84_we0 = ap_const_logic_1;
    } else {
        b_84_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_85_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_85_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_85_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_85_address1() {
    b_85_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_85_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_85_ce0 = ap_const_logic_1;
    } else {
        b_85_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_85_ce1 = ap_const_logic_1;
    } else {
        b_85_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_55, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_85_we0 = ap_const_logic_1;
    } else {
        b_85_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_86_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_86_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_86_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_86_address1() {
    b_86_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_86_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_86_ce0 = ap_const_logic_1;
    } else {
        b_86_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_86_ce1 = ap_const_logic_1;
    } else {
        b_86_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_56, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_86_we0 = ap_const_logic_1;
    } else {
        b_86_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_87_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_87_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_87_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_87_address1() {
    b_87_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_87_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_87_ce0 = ap_const_logic_1;
    } else {
        b_87_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_87_ce1 = ap_const_logic_1;
    } else {
        b_87_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_57, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_87_we0 = ap_const_logic_1;
    } else {
        b_87_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_88_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_88_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_88_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_88_address1() {
    b_88_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_88_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_88_ce0 = ap_const_logic_1;
    } else {
        b_88_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_88_ce1 = ap_const_logic_1;
    } else {
        b_88_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_58, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_88_we0 = ap_const_logic_1;
    } else {
        b_88_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_89_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_89_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_89_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_89_address1() {
    b_89_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_89_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_89_ce0 = ap_const_logic_1;
    } else {
        b_89_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_89_ce1 = ap_const_logic_1;
    } else {
        b_89_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_59, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_89_we0 = ap_const_logic_1;
    } else {
        b_89_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_8_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_8_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_8_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_8_address1() {
    b_8_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063_pp2_iter2_reg.read());
}

void HLS_accel::thread_b_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_8_ce0 = ap_const_logic_1;
    } else {
        b_8_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        b_8_ce1 = ap_const_logic_1;
    } else {
        b_8_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_8, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_8_we0 = ap_const_logic_1;
    } else {
        b_8_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_90_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_90_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_90_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_90_address1() {
    b_90_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_90_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_90_ce0 = ap_const_logic_1;
    } else {
        b_90_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_90_ce1 = ap_const_logic_1;
    } else {
        b_90_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5A, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_90_we0 = ap_const_logic_1;
    } else {
        b_90_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_91_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_91_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_91_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_91_address1() {
    b_91_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_91_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_91_ce0 = ap_const_logic_1;
    } else {
        b_91_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_91_ce1 = ap_const_logic_1;
    } else {
        b_91_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5B, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_91_we0 = ap_const_logic_1;
    } else {
        b_91_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_92_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_92_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_92_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_92_address1() {
    b_92_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_92_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_92_ce0 = ap_const_logic_1;
    } else {
        b_92_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_92_ce1 = ap_const_logic_1;
    } else {
        b_92_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5C, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_92_we0 = ap_const_logic_1;
    } else {
        b_92_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_93_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_93_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_93_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_93_address1() {
    b_93_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_93_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_93_ce0 = ap_const_logic_1;
    } else {
        b_93_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_93_ce1 = ap_const_logic_1;
    } else {
        b_93_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5D, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_93_we0 = ap_const_logic_1;
    } else {
        b_93_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_94_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_94_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_94_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_94_address1() {
    b_94_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_94_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_94_ce0 = ap_const_logic_1;
    } else {
        b_94_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_94_ce1 = ap_const_logic_1;
    } else {
        b_94_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5E, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_94_we0 = ap_const_logic_1;
    } else {
        b_94_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_95_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_95_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_95_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_95_address1() {
    b_95_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
}

void HLS_accel::thread_b_95_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_95_ce0 = ap_const_logic_1;
    } else {
        b_95_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_95_ce1 = ap_const_logic_1;
    } else {
        b_95_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_5F, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_95_we0 = ap_const_logic_1;
    } else {
        b_95_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_96_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_96_address0 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter1_reg.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_96_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_96_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_96_address1() {
    b_96_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_96_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read())))) {
        b_96_ce0 = ap_const_logic_1;
    } else {
        b_96_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_96_ce1 = ap_const_logic_1;
    } else {
        b_96_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_60, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_96_we0 = ap_const_logic_1;
    } else {
        b_96_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_97_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_97_address0 =  (sc_lv<9>) (tmp_5_fu_7981_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_97_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_97_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_97_address1() {
    b_97_address1 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
}

void HLS_accel::thread_b_97_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter0.read())))) {
        b_97_ce0 = ap_const_logic_1;
    } else {
        b_97_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_97_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()))) {
        b_97_ce1 = ap_const_logic_1;
    } else {
        b_97_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_97_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_61, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_97_we0 = ap_const_logic_1;
    } else {
        b_97_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_98_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_98_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_98_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_98_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_98_address1() {
    b_98_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_98_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_98_ce0 = ap_const_logic_1;
    } else {
        b_98_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_98_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_98_ce1 = ap_const_logic_1;
    } else {
        b_98_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_98_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_62, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_98_we0 = ap_const_logic_1;
    } else {
        b_98_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_99_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_99_address0 =  (sc_lv<9>) (tmp_5_reg_9745.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_99_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_99_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_99_address1() {
    b_99_address1 =  (sc_lv<9>) (tmp_21_cast_reg_10063.read());
}

void HLS_accel::thread_b_99_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_99_ce0 = ap_const_logic_1;
    } else {
        b_99_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_99_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter2.read()))) {
        b_99_ce1 = ap_const_logic_1;
    } else {
        b_99_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_99_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         (((((((((((((((((((((((((((((esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                      esl_seteq<1,7,7>(ap_const_lv7_7F, arrayNo1_mid2_fu_7734_p4.read())) || 
                                     (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                      esl_seteq<1,7,7>(ap_const_lv7_7E, arrayNo1_mid2_fu_7734_p4.read()))) || 
                                    (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                     esl_seteq<1,7,7>(ap_const_lv7_7D, arrayNo1_mid2_fu_7734_p4.read()))) || 
                                   (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                    esl_seteq<1,7,7>(ap_const_lv7_7C, arrayNo1_mid2_fu_7734_p4.read()))) || 
                                  (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                   esl_seteq<1,7,7>(ap_const_lv7_7B, arrayNo1_mid2_fu_7734_p4.read()))) || 
                                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                  esl_seteq<1,7,7>(ap_const_lv7_7A, arrayNo1_mid2_fu_7734_p4.read()))) || 
                                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                 esl_seteq<1,7,7>(ap_const_lv7_79, arrayNo1_mid2_fu_7734_p4.read()))) || 
                               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                                esl_seteq<1,7,7>(ap_const_lv7_78, arrayNo1_mid2_fu_7734_p4.read()))) || 
                              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                               esl_seteq<1,7,7>(ap_const_lv7_77, arrayNo1_mid2_fu_7734_p4.read()))) || 
                             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                              esl_seteq<1,7,7>(ap_const_lv7_76, arrayNo1_mid2_fu_7734_p4.read()))) || 
                            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                             esl_seteq<1,7,7>(ap_const_lv7_75, arrayNo1_mid2_fu_7734_p4.read()))) || 
                           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                            esl_seteq<1,7,7>(ap_const_lv7_74, arrayNo1_mid2_fu_7734_p4.read()))) || 
                          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                           esl_seteq<1,7,7>(ap_const_lv7_73, arrayNo1_mid2_fu_7734_p4.read()))) || 
                         (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                          esl_seteq<1,7,7>(ap_const_lv7_72, arrayNo1_mid2_fu_7734_p4.read()))) || 
                        (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                         esl_seteq<1,7,7>(ap_const_lv7_71, arrayNo1_mid2_fu_7734_p4.read()))) || 
                       (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                        esl_seteq<1,7,7>(ap_const_lv7_70, arrayNo1_mid2_fu_7734_p4.read()))) || 
                      (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                       esl_seteq<1,7,7>(ap_const_lv7_6F, arrayNo1_mid2_fu_7734_p4.read()))) || 
                     (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                      esl_seteq<1,7,7>(ap_const_lv7_6E, arrayNo1_mid2_fu_7734_p4.read()))) || 
                    (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                     esl_seteq<1,7,7>(ap_const_lv7_6D, arrayNo1_mid2_fu_7734_p4.read()))) || 
                   (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                    esl_seteq<1,7,7>(ap_const_lv7_6C, arrayNo1_mid2_fu_7734_p4.read()))) || 
                  (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                   esl_seteq<1,7,7>(ap_const_lv7_6B, arrayNo1_mid2_fu_7734_p4.read()))) || 
                 (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                  esl_seteq<1,7,7>(ap_const_lv7_6A, arrayNo1_mid2_fu_7734_p4.read()))) || 
                (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                 esl_seteq<1,7,7>(ap_const_lv7_69, arrayNo1_mid2_fu_7734_p4.read()))) || 
               (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
                esl_seteq<1,7,7>(ap_const_lv7_68, arrayNo1_mid2_fu_7734_p4.read()))) || 
              (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
               esl_seteq<1,7,7>(ap_const_lv7_67, arrayNo1_mid2_fu_7734_p4.read()))) || 
             (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
              esl_seteq<1,7,7>(ap_const_lv7_66, arrayNo1_mid2_fu_7734_p4.read()))) || 
            (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
             esl_seteq<1,7,7>(ap_const_lv7_65, arrayNo1_mid2_fu_7734_p4.read()))) || 
           (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
            esl_seteq<1,7,7>(ap_const_lv7_64, arrayNo1_mid2_fu_7734_p4.read()))) || 
          (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
           esl_seteq<1,7,7>(ap_const_lv7_63, arrayNo1_mid2_fu_7734_p4.read()))))) {
        b_99_we0 = ap_const_logic_1;
    } else {
        b_99_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0))) {
        b_9_address0 =  (sc_lv<9>) (tmp_21_cast_fu_8001_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_9_address0 =  (sc_lv<9>) (tmp_8_cast_fu_7766_p1.read());
    } else {
        b_9_address0 = "XXXXXXXXX";
    }
}

void HLS_accel::thread_b_9_address1() {
    b_9_address1 =  (sc_lv<9>) (tmp_5_reg_9745_pp2_iter2_reg.read());
}

void HLS_accel::thread_b_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read()))) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read())))) {
        b_9_ce0 = ap_const_logic_1;
    } else {
        b_9_ce0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter3.read()))) {
        b_9_ce1 = ap_const_logic_1;
    } else {
        b_9_ce1 = ap_const_logic_0;
    }
}

void HLS_accel::thread_b_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && 
         !(esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten8_fu_7694_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, INPUT_STREAM_data_V_0_vld_out.read())) && 
         esl_seteq<1,7,7>(ap_const_lv7_9, arrayNo1_mid2_fu_7734_p4.read()))) {
        b_9_we0 = ap_const_logic_1;
    } else {
        b_9_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_exitcond1_i_i_fu_7916_p2() {
    exitcond1_i_i_fu_7916_p2 = (!ib_0_i_i_reg_7274.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(ib_0_i_i_reg_7274.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond2_i_fu_7712_p2() {
    exitcond2_i_fu_7712_p2 = (!j2_0_i_reg_7241.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j2_0_i_reg_7241.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond4_i_fu_7540_p2() {
    exitcond4_i_fu_7540_p2 = (!j_0_i_reg_7208.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j_0_i_reg_7208.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_exitcond_flatten1_fu_7898_p2() {
    exitcond_flatten1_fu_7898_p2 = (!indvar_flatten1_reg_7252.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_7252.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten2_fu_8363_p2() {
    exitcond_flatten2_fu_8363_p2 = (!indvar_flatten2_reg_7285.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_reg_7285.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten8_fu_7694_p2() {
    exitcond_flatten8_fu_7694_p2 = (!indvar_flatten6_reg_7219.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten6_reg_7219.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_flatten_fu_7522_p2() {
    exitcond_flatten_fu_7522_p2 = (!indvar_flatten_reg_7186.read().is_01() || !ap_const_lv16_9C40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_7186.read() == ap_const_lv16_9C40);
}

void HLS_accel::thread_exitcond_i_fu_8381_p2() {
    exitcond_i_fu_8381_p2 = (!j5_0_i_reg_7307.read().is_01() || !ap_const_lv8_C8.is_01())? sc_lv<1>(): sc_lv<1>(j5_0_i_reg_7307.read() == ap_const_lv8_C8);
}

void HLS_accel::thread_grp_fu_9443_p0() {
    grp_fu_9443_p0 =  (sc_lv<8>) (grp_fu_9443_p00.read());
}

void HLS_accel::thread_grp_fu_9443_p00() {
    grp_fu_9443_p00 = esl_zext<16,8>(tmp_8_mid2_v_reg_9527_pp2_iter6_reg.read());
}

void HLS_accel::thread_grp_fu_9443_p1() {
    grp_fu_9443_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_9443_p2() {
    grp_fu_9443_p2 =  (sc_lv<8>) (grp_fu_9443_p20.read());
}

void HLS_accel::thread_grp_fu_9443_p20() {
    grp_fu_9443_p20 = esl_zext<16,8>(ib_0_i_i_mid2_reg_9521_pp2_iter6_reg.read());
}

void HLS_accel::thread_grp_fu_9452_p0() {
    grp_fu_9452_p0 =  (sc_lv<8>) (grp_fu_9452_p00.read());
}

void HLS_accel::thread_grp_fu_9452_p00() {
    grp_fu_9452_p00 = esl_zext<16,8>(tmp_9_mid2_v_v_reg_14637.read());
}

void HLS_accel::thread_grp_fu_9452_p1() {
    grp_fu_9452_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_9452_p2() {
    grp_fu_9452_p2 =  (sc_lv<8>) (j5_0_i_cast_fu_8415_p1.read());
}

void HLS_accel::thread_grp_fu_9461_p0() {
    grp_fu_9461_p0 =  (sc_lv<8>) (grp_fu_9461_p00.read());
}

void HLS_accel::thread_grp_fu_9461_p00() {
    grp_fu_9461_p00 = esl_zext<16,8>(tmp_9_mid2_v_v_reg_14637.read());
}

void HLS_accel::thread_grp_fu_9461_p1() {
    grp_fu_9461_p1 =  (sc_lv<9>) (ap_const_lv16_C8);
}

void HLS_accel::thread_grp_fu_9461_p2() {
    grp_fu_9461_p2 =  (sc_lv<8>) (j5_0_i_cast_fu_8415_p1.read());
}

void HLS_accel::thread_i_1_fu_7706_p2() {
    i_1_fu_7706_p2 = (!ap_const_lv8_1.is_01() || !i1_0_i_reg_7230.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(i1_0_i_reg_7230.read()));
}

void HLS_accel::thread_i_2_fu_8375_p2() {
    i_2_fu_8375_p2 = (!ap_phi_mux_i4_0_i_phi_fu_7300_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_i4_0_i_phi_fu_7300_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_i_fu_7534_p2() {
    i_fu_7534_p2 = (!ap_const_lv8_1.is_01() || !i_0_i_reg_7197.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(i_0_i_reg_7197.read()));
}

void HLS_accel::thread_ia_fu_7910_p2() {
    ia_fu_7910_p2 = (!ap_phi_mux_ia_0_i_i_phi_fu_7267_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ap_phi_mux_ia_0_i_i_phi_fu_7267_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_ib_0_i_i_mid2_fu_7922_p3() {
    ib_0_i_i_mid2_fu_7922_p3 = (!exitcond1_i_i_fu_7916_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_7916_p2.read()[0].to_bool())? ap_const_lv8_0: ib_0_i_i_reg_7274.read());
}

void HLS_accel::thread_ib_fu_7986_p2() {
    ib_fu_7986_p2 = (!ib_0_i_i_mid2_fu_7922_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ib_0_i_i_mid2_fu_7922_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_indvar_flatten_next1_fu_7904_p2() {
    indvar_flatten_next1_fu_7904_p2 = (!indvar_flatten1_reg_7252.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten1_reg_7252.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next2_fu_8369_p2() {
    indvar_flatten_next2_fu_8369_p2 = (!indvar_flatten2_reg_7285.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten2_reg_7285.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next7_fu_7700_p2() {
    indvar_flatten_next7_fu_7700_p2 = (!indvar_flatten6_reg_7219.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten6_reg_7219.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_indvar_flatten_next_fu_7528_p2() {
    indvar_flatten_next_fu_7528_p2 = (!indvar_flatten_reg_7186.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(indvar_flatten_reg_7186.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void HLS_accel::thread_j2_0_i_mid2_fu_7718_p3() {
    j2_0_i_mid2_fu_7718_p3 = (!exitcond2_i_fu_7712_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond2_i_fu_7712_p2.read()[0].to_bool())? ap_const_lv8_0: j2_0_i_reg_7241.read());
}

void HLS_accel::thread_j5_0_i_cast_fu_8415_p1() {
    j5_0_i_cast_fu_8415_p1 = esl_zext<16,8>(j5_0_i_mid2_reg_14632.read());
}

void HLS_accel::thread_j5_0_i_mid2_fu_8387_p3() {
    j5_0_i_mid2_fu_8387_p3 = (!exitcond_i_fu_8381_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_8381_p2.read()[0].to_bool())? ap_const_lv8_0: j5_0_i_reg_7307.read());
}

void HLS_accel::thread_j_0_i_mid2_fu_7546_p3() {
    j_0_i_mid2_fu_7546_p3 = (!exitcond4_i_fu_7540_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_7540_p2.read()[0].to_bool())? ap_const_lv8_0: j_0_i_reg_7208.read());
}

void HLS_accel::thread_j_1_fu_7870_p2() {
    j_1_fu_7870_p2 = (!j2_0_i_mid2_fu_7718_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j2_0_i_mid2_fu_7718_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_2_fu_8403_p2() {
    j_2_fu_8403_p2 = (!j5_0_i_mid2_fu_8387_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j5_0_i_mid2_fu_8387_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_j_fu_7688_p2() {
    j_fu_7688_p2 = (!j_0_i_mid2_fu_7546_p3.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(j_0_i_mid2_fu_7546_p3.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void HLS_accel::thread_last_assign_fu_8422_p2() {
    last_assign_fu_8422_p2 = (!grp_fu_9452_p3.read().is_01() || !ap_const_lv16_9C3F.is_01())? sc_lv<1>(): sc_lv<1>(grp_fu_9452_p3.read() == ap_const_lv16_9C3F);
}

void HLS_accel::thread_out_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()))) {
        out_address0 =  (sc_lv<16>) (tmp_199_cast_fu_8418_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp2_stage0.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()))) {
        out_address0 =  (sc_lv<16>) (tmp_22_cast_fu_8349_p1.read());
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
    out_d0 = (!tmp99_reg_14618.read().is_01() || !tmp_fu_8353_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp99_reg_14618.read()) + sc_biguint<16>(tmp_fu_8353_p2.read()));
}

void HLS_accel::thread_out_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp2_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten1_reg_9512_pp2_iter6_reg.read()))) {
        out_we0 = ap_const_logic_1;
    } else {
        out_we0 = ap_const_logic_0;
    }
}

void HLS_accel::thread_tmp100_fu_8322_p2() {
    tmp100_fu_8322_p2 = (!tmp125_fu_8317_p2.read().is_01() || !tmp101_fu_8308_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp125_fu_8317_p2.read()) + sc_biguint<16>(tmp101_fu_8308_p2.read()));
}

void HLS_accel::thread_tmp101_fu_8308_p2() {
    tmp101_fu_8308_p2 = (!tmp113_reg_14573.read().is_01() || !tmp102_fu_8304_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp113_reg_14573.read()) + sc_biguint<16>(tmp102_fu_8304_p2.read()));
}

void HLS_accel::thread_tmp102_fu_8304_p2() {
    tmp102_fu_8304_p2 = (!tmp108_reg_14568.read().is_01() || !tmp103_reg_14563.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp108_reg_14568.read()) + sc_biguint<16>(tmp103_reg_14563.read()));
}

void HLS_accel::thread_tmp103_fu_8125_p2() {
    tmp103_fu_8125_p2 = (!grp_fu_9311_p3.read().is_01() || !grp_fu_9299_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9311_p3.read()) + sc_bigint<16>(grp_fu_9299_p3.read()));
}

void HLS_accel::thread_tmp108_fu_8129_p2() {
    tmp108_fu_8129_p2 = (!grp_fu_9335_p3.read().is_01() || !grp_fu_9323_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9335_p3.read()) + sc_bigint<16>(grp_fu_9323_p3.read()));
}

void HLS_accel::thread_tmp113_fu_8146_p2() {
    tmp113_fu_8146_p2 = (!tmp119_fu_8141_p2.read().is_01() || !tmp114_fu_8133_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp119_fu_8141_p2.read()) + sc_biguint<16>(tmp114_fu_8133_p2.read()));
}

void HLS_accel::thread_tmp114_fu_8133_p2() {
    tmp114_fu_8133_p2 = (!grp_fu_9353_p3.read().is_01() || !grp_fu_9347_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9353_p3.read()) + sc_bigint<16>(grp_fu_9347_p3.read()));
}

void HLS_accel::thread_tmp119_fu_8141_p2() {
    tmp119_fu_8141_p2 = (!tmp122_fu_8137_p2.read().is_01() || !tmp120_reg_14368.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp122_fu_8137_p2.read()) + sc_bigint<16>(tmp120_reg_14368.read()));
}

void HLS_accel::thread_tmp122_fu_8137_p2() {
    tmp122_fu_8137_p2 = (!tmp124_reg_14378.read().is_01() || !tmp123_reg_14373.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp124_reg_14378.read()) + sc_bigint<16>(tmp123_reg_14373.read()));
}

void HLS_accel::thread_tmp125_fu_8317_p2() {
    tmp125_fu_8317_p2 = (!tmp137_reg_14588.read().is_01() || !tmp126_fu_8313_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp137_reg_14588.read()) + sc_biguint<16>(tmp126_fu_8313_p2.read()));
}

void HLS_accel::thread_tmp126_fu_8313_p2() {
    tmp126_fu_8313_p2 = (!tmp132_reg_14583.read().is_01() || !tmp127_reg_14578.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp132_reg_14583.read()) + sc_biguint<16>(tmp127_reg_14578.read()));
}

void HLS_accel::thread_tmp127_fu_8152_p2() {
    tmp127_fu_8152_p2 = (!grp_fu_9371_p3.read().is_01() || !grp_fu_9359_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9371_p3.read()) + sc_bigint<16>(grp_fu_9359_p3.read()));
}

void HLS_accel::thread_tmp132_fu_8156_p2() {
    tmp132_fu_8156_p2 = (!grp_fu_9395_p3.read().is_01() || !grp_fu_9383_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9395_p3.read()) + sc_bigint<16>(grp_fu_9383_p3.read()));
}

void HLS_accel::thread_tmp137_fu_8173_p2() {
    tmp137_fu_8173_p2 = (!tmp143_fu_8168_p2.read().is_01() || !tmp138_fu_8160_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp143_fu_8168_p2.read()) + sc_biguint<16>(tmp138_fu_8160_p2.read()));
}

void HLS_accel::thread_tmp138_fu_8160_p2() {
    tmp138_fu_8160_p2 = (!grp_fu_9413_p3.read().is_01() || !grp_fu_9407_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9413_p3.read()) + sc_bigint<16>(grp_fu_9407_p3.read()));
}

void HLS_accel::thread_tmp143_fu_8168_p2() {
    tmp143_fu_8168_p2 = (!tmp146_fu_8164_p2.read().is_01() || !tmp144_reg_14393.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp146_fu_8164_p2.read()) + sc_bigint<16>(tmp144_reg_14393.read()));
}

void HLS_accel::thread_tmp146_fu_8164_p2() {
    tmp146_fu_8164_p2 = (!tmp148_reg_14403.read().is_01() || !tmp147_reg_14398.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp148_reg_14403.read()) + sc_bigint<16>(tmp147_reg_14398.read()));
}

void HLS_accel::thread_tmp149_fu_8332_p2() {
    tmp149_fu_8332_p2 = (!tmp174_reg_14603.read().is_01() || !tmp150_fu_8328_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp174_reg_14603.read()) + sc_biguint<16>(tmp150_fu_8328_p2.read()));
}

void HLS_accel::thread_tmp14_fu_8239_p2() {
    tmp14_fu_8239_p2 = (!tmp20_reg_14498.read().is_01() || !tmp15_fu_8235_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp20_reg_14498.read()) + sc_biguint<16>(tmp15_fu_8235_p2.read()));
}

void HLS_accel::thread_tmp150_fu_8328_p2() {
    tmp150_fu_8328_p2 = (!tmp162_reg_14598.read().is_01() || !tmp151_reg_14593.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp162_reg_14598.read()) + sc_biguint<16>(tmp151_reg_14593.read()));
}

void HLS_accel::thread_tmp151_fu_8183_p2() {
    tmp151_fu_8183_p2 = (!tmp157_reg_14418.read().is_01() || !tmp152_fu_8179_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp157_reg_14418.read()) + sc_biguint<16>(tmp152_fu_8179_p2.read()));
}

void HLS_accel::thread_tmp152_fu_8179_p2() {
    tmp152_fu_8179_p2 = (!grp_fu_9425_p3.read().is_01() || !grp_fu_9419_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9425_p3.read()) + sc_bigint<16>(grp_fu_9419_p3.read()));
}

void HLS_accel::thread_tmp157_fu_8024_p2() {
    tmp157_fu_8024_p2 = (!grp_fu_8876_p3.read().is_01() || !grp_fu_8864_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_8876_p3.read()) + sc_bigint<16>(grp_fu_8864_p3.read()));
}

void HLS_accel::thread_tmp15_fu_8235_p2() {
    tmp15_fu_8235_p2 = (!tmp18_reg_14493.read().is_01() || !tmp16_reg_14488.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp18_reg_14493.read()) + sc_bigint<16>(tmp16_reg_14488.read()));
}

void HLS_accel::thread_tmp162_fu_8201_p2() {
    tmp162_fu_8201_p2 = (!tmp168_fu_8196_p2.read().is_01() || !tmp163_fu_8188_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp168_fu_8196_p2.read()) + sc_biguint<16>(tmp163_fu_8188_p2.read()));
}

void HLS_accel::thread_tmp163_fu_8188_p2() {
    tmp163_fu_8188_p2 = (!grp_fu_9437_p3.read().is_01() || !grp_fu_9431_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9437_p3.read()) + sc_bigint<16>(grp_fu_9431_p3.read()));
}

void HLS_accel::thread_tmp168_fu_8196_p2() {
    tmp168_fu_8196_p2 = (!tmp171_fu_8192_p2.read().is_01() || !tmp169_reg_14433.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp171_fu_8192_p2.read()) + sc_bigint<16>(tmp169_reg_14433.read()));
}

void HLS_accel::thread_tmp171_fu_8192_p2() {
    tmp171_fu_8192_p2 = (!tmp173_reg_14443.read().is_01() || !tmp172_reg_14438.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp173_reg_14443.read()) + sc_bigint<16>(tmp172_reg_14438.read()));
}

void HLS_accel::thread_tmp174_fu_8220_p2() {
    tmp174_fu_8220_p2 = (!tmp186_fu_8215_p2.read().is_01() || !tmp175_fu_8207_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp186_fu_8215_p2.read()) + sc_biguint<16>(tmp175_fu_8207_p2.read()));
}

void HLS_accel::thread_tmp175_fu_8207_p2() {
    tmp175_fu_8207_p2 = (!tmp181_reg_14453.read().is_01() || !tmp176_reg_14448.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp181_reg_14453.read()) + sc_biguint<16>(tmp176_reg_14448.read()));
}

void HLS_accel::thread_tmp176_fu_8028_p2() {
    tmp176_fu_8028_p2 = (!grp_fu_8931_p3.read().is_01() || !grp_fu_8919_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_8931_p3.read()) + sc_bigint<16>(grp_fu_8919_p3.read()));
}

void HLS_accel::thread_tmp181_fu_8032_p2() {
    tmp181_fu_8032_p2 = (!grp_fu_8955_p3.read().is_01() || !grp_fu_8943_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_8955_p3.read()) + sc_bigint<16>(grp_fu_8943_p3.read()));
}

void HLS_accel::thread_tmp186_fu_8215_p2() {
    tmp186_fu_8215_p2 = (!tmp192_reg_14468.read().is_01() || !tmp187_fu_8211_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp192_reg_14468.read()) + sc_biguint<16>(tmp187_fu_8211_p2.read()));
}

void HLS_accel::thread_tmp187_fu_8211_p2() {
    tmp187_fu_8211_p2 = (!tmp190_reg_14463.read().is_01() || !tmp188_reg_14458.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp190_reg_14463.read()) + sc_bigint<16>(tmp188_reg_14458.read()));
}

void HLS_accel::thread_tmp192_fu_8040_p2() {
    tmp192_fu_8040_p2 = (!tmp195_fu_8036_p2.read().is_01() || !grp_fu_8989_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp195_fu_8036_p2.read()) + sc_bigint<16>(grp_fu_8989_p3.read()));
}

void HLS_accel::thread_tmp195_fu_8036_p2() {
    tmp195_fu_8036_p2 = (!grp_fu_9001_p3.read().is_01() || !grp_fu_8995_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9001_p3.read()) + sc_bigint<16>(grp_fu_8995_p3.read()));
}

void HLS_accel::thread_tmp1_fu_8259_p2() {
    tmp1_fu_8259_p2 = (!tmp26_fu_8254_p2.read().is_01() || !tmp2_fu_8244_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp26_fu_8254_p2.read()) + sc_biguint<16>(tmp2_fu_8244_p2.read()));
}

void HLS_accel::thread_tmp20_fu_8053_p2() {
    tmp20_fu_8053_p2 = (!tmp23_fu_8049_p2.read().is_01() || !grp_fu_9075_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp23_fu_8049_p2.read()) + sc_bigint<16>(grp_fu_9075_p3.read()));
}

void HLS_accel::thread_tmp23_fu_8049_p2() {
    tmp23_fu_8049_p2 = (!grp_fu_9087_p3.read().is_01() || !grp_fu_9081_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9087_p3.read()) + sc_bigint<16>(grp_fu_9081_p3.read()));
}

void HLS_accel::thread_tmp26_fu_8254_p2() {
    tmp26_fu_8254_p2 = (!tmp38_reg_14513.read().is_01() || !tmp27_fu_8250_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp38_reg_14513.read()) + sc_biguint<16>(tmp27_fu_8250_p2.read()));
}

void HLS_accel::thread_tmp27_fu_8250_p2() {
    tmp27_fu_8250_p2 = (!tmp33_reg_14508.read().is_01() || !tmp28_reg_14503.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp33_reg_14508.read()) + sc_biguint<16>(tmp28_reg_14503.read()));
}

void HLS_accel::thread_tmp28_fu_8058_p2() {
    tmp28_fu_8058_p2 = (!grp_fu_9105_p3.read().is_01() || !grp_fu_9093_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9105_p3.read()) + sc_bigint<16>(grp_fu_9093_p3.read()));
}

void HLS_accel::thread_tmp2_fu_8244_p2() {
    tmp2_fu_8244_p2 = (!tmp14_fu_8239_p2.read().is_01() || !tmp3_fu_8230_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp14_fu_8239_p2.read()) + sc_biguint<16>(tmp3_fu_8230_p2.read()));
}

void HLS_accel::thread_tmp33_fu_8062_p2() {
    tmp33_fu_8062_p2 = (!grp_fu_9129_p3.read().is_01() || !grp_fu_9117_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9129_p3.read()) + sc_bigint<16>(grp_fu_9117_p3.read()));
}

void HLS_accel::thread_tmp38_fu_8079_p2() {
    tmp38_fu_8079_p2 = (!tmp44_fu_8074_p2.read().is_01() || !tmp39_fu_8066_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp44_fu_8074_p2.read()) + sc_biguint<16>(tmp39_fu_8066_p2.read()));
}

void HLS_accel::thread_tmp39_fu_8066_p2() {
    tmp39_fu_8066_p2 = (!grp_fu_9147_p3.read().is_01() || !grp_fu_9141_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9147_p3.read()) + sc_bigint<16>(grp_fu_9141_p3.read()));
}

void HLS_accel::thread_tmp3_fu_8230_p2() {
    tmp3_fu_8230_p2 = (!tmp9_reg_14483.read().is_01() || !tmp4_fu_8226_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp9_reg_14483.read()) + sc_biguint<16>(tmp4_fu_8226_p2.read()));
}

void HLS_accel::thread_tmp44_fu_8074_p2() {
    tmp44_fu_8074_p2 = (!tmp47_fu_8070_p2.read().is_01() || !tmp45_reg_14313.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp47_fu_8070_p2.read()) + sc_bigint<16>(tmp45_reg_14313.read()));
}

void HLS_accel::thread_tmp47_fu_8070_p2() {
    tmp47_fu_8070_p2 = (!tmp49_reg_14323.read().is_01() || !tmp48_reg_14318.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp49_reg_14323.read()) + sc_bigint<16>(tmp48_reg_14318.read()));
}

void HLS_accel::thread_tmp4_fu_8226_p2() {
    tmp4_fu_8226_p2 = (!tmp7_reg_14478.read().is_01() || !tmp5_reg_14473.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp7_reg_14478.read()) + sc_bigint<16>(tmp5_reg_14473.read()));
}

void HLS_accel::thread_tmp50_fu_8298_p2() {
    tmp50_fu_8298_p2 = (!tmp75_fu_8293_p2.read().is_01() || !tmp51_fu_8283_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp75_fu_8293_p2.read()) + sc_biguint<16>(tmp51_fu_8283_p2.read()));
}

void HLS_accel::thread_tmp51_fu_8283_p2() {
    tmp51_fu_8283_p2 = (!tmp63_fu_8278_p2.read().is_01() || !tmp52_fu_8269_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp63_fu_8278_p2.read()) + sc_biguint<16>(tmp52_fu_8269_p2.read()));
}

void HLS_accel::thread_tmp52_fu_8269_p2() {
    tmp52_fu_8269_p2 = (!tmp58_reg_14528.read().is_01() || !tmp53_fu_8265_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp58_reg_14528.read()) + sc_biguint<16>(tmp53_fu_8265_p2.read()));
}

void HLS_accel::thread_tmp53_fu_8265_p2() {
    tmp53_fu_8265_p2 = (!tmp56_reg_14523.read().is_01() || !tmp54_reg_14518.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp56_reg_14523.read()) + sc_bigint<16>(tmp54_reg_14518.read()));
}

void HLS_accel::thread_tmp58_fu_8085_p2() {
    tmp58_fu_8085_p2 = (!grp_fu_9187_p3.read().is_01() || !grp_fu_9175_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9187_p3.read()) + sc_bigint<16>(grp_fu_9175_p3.read()));
}

void HLS_accel::thread_tmp63_fu_8278_p2() {
    tmp63_fu_8278_p2 = (!tmp69_reg_14543.read().is_01() || !tmp64_fu_8274_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp69_reg_14543.read()) + sc_biguint<16>(tmp64_fu_8274_p2.read()));
}

void HLS_accel::thread_tmp64_fu_8274_p2() {
    tmp64_fu_8274_p2 = (!tmp67_reg_14538.read().is_01() || !tmp65_reg_14533.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp67_reg_14538.read()) + sc_bigint<16>(tmp65_reg_14533.read()));
}

void HLS_accel::thread_tmp69_fu_8093_p2() {
    tmp69_fu_8093_p2 = (!tmp72_fu_8089_p2.read().is_01() || !grp_fu_9221_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp72_fu_8089_p2.read()) + sc_bigint<16>(grp_fu_9221_p3.read()));
}

void HLS_accel::thread_tmp72_fu_8089_p2() {
    tmp72_fu_8089_p2 = (!grp_fu_9233_p3.read().is_01() || !grp_fu_9227_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9233_p3.read()) + sc_bigint<16>(grp_fu_9227_p3.read()));
}

void HLS_accel::thread_tmp75_fu_8293_p2() {
    tmp75_fu_8293_p2 = (!tmp87_reg_14558.read().is_01() || !tmp76_fu_8289_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp87_reg_14558.read()) + sc_biguint<16>(tmp76_fu_8289_p2.read()));
}

void HLS_accel::thread_tmp76_fu_8289_p2() {
    tmp76_fu_8289_p2 = (!tmp82_reg_14553.read().is_01() || !tmp77_reg_14548.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp82_reg_14553.read()) + sc_biguint<16>(tmp77_reg_14548.read()));
}

void HLS_accel::thread_tmp77_fu_8098_p2() {
    tmp77_fu_8098_p2 = (!grp_fu_9251_p3.read().is_01() || !grp_fu_9239_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9251_p3.read()) + sc_bigint<16>(grp_fu_9239_p3.read()));
}

void HLS_accel::thread_tmp82_fu_8102_p2() {
    tmp82_fu_8102_p2 = (!grp_fu_9275_p3.read().is_01() || !grp_fu_9263_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9275_p3.read()) + sc_bigint<16>(grp_fu_9263_p3.read()));
}

void HLS_accel::thread_tmp87_fu_8119_p2() {
    tmp87_fu_8119_p2 = (!tmp93_fu_8114_p2.read().is_01() || !tmp88_fu_8106_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp93_fu_8114_p2.read()) + sc_biguint<16>(tmp88_fu_8106_p2.read()));
}

void HLS_accel::thread_tmp88_fu_8106_p2() {
    tmp88_fu_8106_p2 = (!grp_fu_9293_p3.read().is_01() || !grp_fu_9287_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9293_p3.read()) + sc_bigint<16>(grp_fu_9287_p3.read()));
}

void HLS_accel::thread_tmp93_fu_8114_p2() {
    tmp93_fu_8114_p2 = (!tmp96_fu_8110_p2.read().is_01() || !tmp94_reg_14343.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp96_fu_8110_p2.read()) + sc_bigint<16>(tmp94_reg_14343.read()));
}

void HLS_accel::thread_tmp96_fu_8110_p2() {
    tmp96_fu_8110_p2 = (!tmp98_reg_14353.read().is_01() || !tmp97_reg_14348.read().is_01())? sc_lv<16>(): (sc_bigint<16>(tmp98_reg_14353.read()) + sc_bigint<16>(tmp97_reg_14348.read()));
}

void HLS_accel::thread_tmp99_fu_8337_p2() {
    tmp99_fu_8337_p2 = (!tmp149_fu_8332_p2.read().is_01() || !tmp100_fu_8322_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp149_fu_8332_p2.read()) + sc_biguint<16>(tmp100_fu_8322_p2.read()));
}

void HLS_accel::thread_tmp9_fu_8045_p2() {
    tmp9_fu_8045_p2 = (!grp_fu_9041_p3.read().is_01() || !grp_fu_9029_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(grp_fu_9041_p3.read()) + sc_bigint<16>(grp_fu_9029_p3.read()));
}

void HLS_accel::thread_tmp_12_fu_7884_p2() {
    tmp_12_fu_7884_p2 = (tmp_9_fu_7876_p3.read() | ap_const_lv9_1);
}

void HLS_accel::thread_tmp_13_fu_7890_p3() {
    tmp_13_fu_7890_p3 = esl_concat<55,9>(ap_const_lv55_0, tmp_12_fu_7884_p2.read());
}

void HLS_accel::thread_tmp_14_fu_7930_p3() {
    tmp_14_fu_7930_p3 = esl_concat<8,1>(ia_fu_7910_p2.read(), ap_const_lv1_0);
}

void HLS_accel::thread_tmp_15_fu_7938_p2() {
    tmp_15_fu_7938_p2 = (tmp_14_fu_7930_p3.read() | ap_const_lv9_1);
}

void HLS_accel::thread_tmp_16_fu_7944_p3() {
    tmp_16_fu_7944_p3 = esl_concat<55,9>(ap_const_lv55_0, tmp_15_fu_7938_p2.read());
}

void HLS_accel::thread_tmp_18_fu_7995_p2() {
    tmp_18_fu_7995_p2 = (!tmp_5_cast_fu_7992_p1.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_5_cast_fu_7992_p1.read()) + sc_biguint<9>(ap_const_lv9_C8));
}

void HLS_accel::thread_tmp_199_cast_fu_8418_p1() {
    tmp_199_cast_fu_8418_p1 = esl_zext<64,16>(grp_fu_9461_p3.read());
}

void HLS_accel::thread_tmp_1_fu_7576_p3() {
    tmp_1_fu_7576_p3 = esl_concat<8,1>(tmp_1_mid2_v_fu_7554_p3.read(), tmp_3_fu_7572_p1.read());
}

void HLS_accel::thread_tmp_1_mid2_v_fu_7554_p3() {
    tmp_1_mid2_v_fu_7554_p3 = (!exitcond4_i_fu_7540_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond4_i_fu_7540_p2.read()[0].to_bool())? i_fu_7534_p2.read(): i_0_i_reg_7197.read());
}

void HLS_accel::thread_tmp_21_cast_fu_8001_p1() {
    tmp_21_cast_fu_8001_p1 = esl_zext<64,9>(tmp_18_fu_7995_p2.read());
}

void HLS_accel::thread_tmp_22_cast_fu_8349_p1() {
    tmp_22_cast_fu_8349_p1 = esl_zext<64,16>(grp_fu_9443_p3.read());
}

void HLS_accel::thread_tmp_2_fu_7584_p1() {
    tmp_2_fu_7584_p1 = esl_zext<64,9>(tmp_1_fu_7576_p3.read());
}

void HLS_accel::thread_tmp_3_cast_fu_7748_p3() {
    tmp_3_cast_fu_7748_p3 = (!tmp_7_fu_7744_p1.read()[0].is_01())? sc_lv<9>(): ((tmp_7_fu_7744_p1.read()[0].to_bool())? ap_const_lv9_C8: ap_const_lv9_0);
}

void HLS_accel::thread_tmp_3_fu_7572_p1() {
    tmp_3_fu_7572_p1 = j_0_i_mid2_fu_7546_p3.read().range(1-1, 0);
}

void HLS_accel::thread_tmp_5_cast_fu_7992_p1() {
    tmp_5_cast_fu_7992_p1 = esl_zext<9,8>(ib_0_i_i_mid2_reg_9521.read());
}

void HLS_accel::thread_tmp_5_fu_7981_p1() {
    tmp_5_fu_7981_p1 = esl_zext<64,8>(ib_0_i_i_mid2_fu_7922_p3.read());
}

void HLS_accel::thread_tmp_7_cast_fu_7756_p1() {
    tmp_7_cast_fu_7756_p1 = esl_zext<9,8>(j2_0_i_mid2_fu_7718_p3.read());
}

void HLS_accel::thread_tmp_7_fu_7744_p1() {
    tmp_7_fu_7744_p1 = arrayNo1_mid2_v_fu_7726_p3.read().range(1-1, 0);
}

void HLS_accel::thread_tmp_8_cast_fu_7766_p1() {
    tmp_8_cast_fu_7766_p1 = esl_zext<64,9>(tmp_8_fu_7760_p2.read());
}

void HLS_accel::thread_tmp_8_fu_7760_p2() {
    tmp_8_fu_7760_p2 = (!tmp_3_cast_fu_7748_p3.read().is_01() || !tmp_7_cast_fu_7756_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_3_cast_fu_7748_p3.read()) + sc_biguint<9>(tmp_7_cast_fu_7756_p1.read()));
}

void HLS_accel::thread_tmp_8_mid2_v_fu_7952_p3() {
    tmp_8_mid2_v_fu_7952_p3 = (!exitcond1_i_i_fu_7916_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond1_i_i_fu_7916_p2.read()[0].to_bool())? ia_fu_7910_p2.read(): ap_phi_mux_ia_0_i_i_phi_fu_7267_p4.read());
}

void HLS_accel::thread_tmp_9_fu_7876_p3() {
    tmp_9_fu_7876_p3 = esl_concat<8,1>(ap_phi_mux_ia_0_i_i_phi_fu_7267_p4.read(), ap_const_lv1_0);
}

void HLS_accel::thread_tmp_9_mid2_v_v_fu_8395_p3() {
    tmp_9_mid2_v_v_fu_8395_p3 = (!exitcond_i_fu_8381_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_i_fu_8381_p2.read()[0].to_bool())? i_2_fu_8375_p2.read(): ap_phi_mux_i4_0_i_phi_fu_7300_p4.read());
}

void HLS_accel::thread_tmp_fu_8353_p2() {
    tmp_fu_8353_p2 = (!tmp50_reg_14613.read().is_01() || !tmp1_reg_14608.read().is_01())? sc_lv<16>(): (sc_biguint<16>(tmp50_reg_14613.read()) + sc_biguint<16>(tmp1_reg_14608.read()));
}

}

