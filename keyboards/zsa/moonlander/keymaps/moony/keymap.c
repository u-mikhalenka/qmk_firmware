#include "./../../../voyager/keymaps/moony/common.c"
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_BASE] = LAYOUT_wrapper(
        LAYER_BASE_L1, _______, _______, LAYER_BASE_R1,
        LAYER_BASE_L2, _______, _______, LAYER_BASE_R2,
        LAYER_BASE_L3, _______, _______, LAYER_BASE_R3,
        LAYER_BASE_L4,                   LAYER_BASE_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_BASE_LT, _______, LAYER_BASE_RT, _______
      ),
      [LAYER_GAME] = LAYOUT_wrapper(
        LAYER_GAME_L1, _______, LAYER_GAME_R1, _______,
        LAYER_GAME_L2, _______, LAYER_GAME_R2, _______,
        LAYER_GAME_L3, _______, LAYER_GAME_R3, _______,
        LAYER_GAME_L4,          LAYER_GAME_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_GAME_LT, _______, LAYER_GAME_RT, _______
      ),
      [LAYER_NAV] = LAYOUT_wrapper(
        LAYER_NAV_L1, _______,  _______, LAYER_NAV_R1,
        LAYER_NAV_L2, _______,  _______, LAYER_NAV_R2,
        LAYER_NAV_L3, _______,  _______, LAYER_NAV_R3,
        LAYER_NAV_L4,                    LAYER_NAV_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_NAV_LT, _______, LAYER_NAV_RT, _______
      ),
      [LAYER_FN] = LAYOUT_wrapper(
        LAYER_FN_L1, _______,   _______, LAYER_FN_R1,
        LAYER_FN_L2, _______,   _______, LAYER_FN_R2,
        LAYER_FN_L3, _______,   _______, LAYER_FN_R3,
        LAYER_FN_L4,                     LAYER_FN_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_FN_LT, _______, LAYER_FN_RT, _______
      ),
      [LAYER_NUM] = LAYOUT_wrapper(
        LAYER_NUM_L1, _______,   _______, LAYER_NUM_R1,
        LAYER_NUM_L2, _______,   _______, LAYER_NUM_R2,
        LAYER_NUM_L3, _______,   _______, LAYER_NUM_R3,
        LAYER_NUM_L4,                     LAYER_NUM_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_NUM_LT, _______, LAYER_NUM_RT, _______
      ),
      [LAYER_SYS] = LAYOUT_wrapper(
        LAYER_SYS_L1, _______,   _______, LAYER_SYS_R1,
        LAYER_SYS_L2, _______,   _______, LAYER_SYS_R2,
        LAYER_SYS_L3, _______,   _______, LAYER_SYS_R3,
        LAYER_SYS_L4,                     LAYER_SYS_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_SYS_LT, _______, LAYER_SYS_RT, _______
      ),
      [LAYER_NUM_LEFT] = LAYOUT_wrapper(
        LAYER_NUM_LEFT_L1, _______,   _______, LAYER_NUM_LEFT_R1,
        LAYER_NUM_LEFT_L2, _______,   _______, LAYER_NUM_LEFT_R2,
        LAYER_NUM_LEFT_L3, _______,   _______, LAYER_NUM_LEFT_R3,
        LAYER_NUM_LEFT_L4,                     LAYER_NUM_LEFT_R4,
        _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______,
        LAYER_NUM_LEFT_LT, _______, LAYER_NUM_LEFT_RT, _______
      ),
};
