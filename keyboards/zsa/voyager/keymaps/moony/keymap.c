#include "./common.c"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
                            '*', '*',      '*', '*'
    );

const uint16_t  PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_wrapper(
    LAYER_BASE_L1, LAYER_BASE_R1,
    LAYER_BASE_L2, LAYER_BASE_R2,
    LAYER_BASE_L3, LAYER_BASE_R3,
    LAYER_BASE_L4, LAYER_BASE_R4,
    LAYER_BASE_LT, LAYER_BASE_RT
  ),
  [LAYER_GAME] = LAYOUT_wrapper(
    LAYER_GAME_L1, LAYER_GAME_R1,
    LAYER_GAME_L2, LAYER_GAME_R2,
    LAYER_GAME_L3, LAYER_GAME_R3,
    LAYER_GAME_L4, LAYER_GAME_R4,
    LAYER_GAME_LT, LAYER_GAME_RT
  ),
  [LAYER_NAV] = LAYOUT_wrapper(
    LAYER_NAV_L1, LAYER_NAV_R1,
    LAYER_NAV_L2, LAYER_NAV_R2,
    LAYER_NAV_L3, LAYER_NAV_R3,
    LAYER_NAV_L4, LAYER_NAV_R4,
    LAYER_NAV_LT, LAYER_NAV_RT
  ),
  [LAYER_NUM] = LAYOUT_wrapper(
    LAYER_NUM_L1, LAYER_NUM_R1,
    LAYER_NUM_L2, LAYER_NUM_R2,
    LAYER_NUM_L3, LAYER_NUM_R3,
    LAYER_NUM_L4, LAYER_NUM_R4,
    LAYER_NUM_LT, LAYER_NUM_RT
  ),
  [LAYER_FN] = LAYOUT_wrapper(
    LAYER_FN_L1, LAYER_FN_R1,
    LAYER_FN_L2, LAYER_FN_R2,
    LAYER_FN_L3, LAYER_FN_R3,
    LAYER_FN_L4, LAYER_FN_R4,
    LAYER_FN_LT, LAYER_FN_RT
  ),
  [LAYER_SYS] = LAYOUT_wrapper(
    LAYER_SYS_L1, LAYER_SYS_R1,
    LAYER_SYS_L2, LAYER_SYS_R2,
    LAYER_SYS_L3, LAYER_SYS_R3,
    LAYER_SYS_L4, LAYER_SYS_R4,
    LAYER_SYS_LT, LAYER_SYS_RT
  ),
  [LAYER_NUML] = LAYOUT_wrapper(
    LAYER_NUML_L1, LAYER_NUML_R1,
    LAYER_NUML_L2, LAYER_NUML_R2,
    LAYER_NUML_L3, LAYER_NUML_R3,
    LAYER_NUML_L4, LAYER_NUML_R4,
    LAYER_NUML_LT, LAYER_NUML_RT
  ),
  [LAYER_FNL] = LAYOUT_wrapper(
    LAYER_FNL_L1, LAYER_FNL_R1,
    LAYER_FNL_L2, LAYER_FNL_R2,
    LAYER_FNL_L3, LAYER_FNL_R3,
    LAYER_FNL_L4, LAYER_FNL_R4,
    LAYER_FNL_LT, LAYER_FNL_RT
  ),
};
