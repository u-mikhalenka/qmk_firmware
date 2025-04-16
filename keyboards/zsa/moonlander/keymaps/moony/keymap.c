#include "./../../../voyager/keymaps/moony/common.c"


#define voyager_layout_wrapper_custom(row_L1, extra1, extra2, row_R1, \
    row_L2, extra3, extra4, row_R2, \
    row_L3, extra5, extra6, row_R3, \
    row_L4,                 row_R4, \
    row_BL1, row_BL2, row_BL3, row_BL4, row_BL5, \
    row_BR1, row_BR2, row_BR3, row_BR4, row_BR5, \
    thumb1,           thumb2, \
    thumb_L, thumb_3, thumb_4, thumb_R) \
LAYOUT( \
    row_L1, extra1, extra2, row_R1, \
    row_L2, extra3, extra4, row_R2, \
    row_L3, extra5, extra6, row_R3, \
    row_L4,                 row_R4, \
    row_BL1, row_BL2, row_BL3, row_BL4, row_BL5, thumb1, \
    thumb2,  row_BR1, row_BR2, row_BR3, row_BR4, row_BR5, \
    thumb_L, thumb_3, thumb_4, thumb_R \
)

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
    'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', 'L',           'R', 'R', 'R', 'R', 'R', 'R',
    'L', 'L', 'L', 'L', 'L', '*',           '*', 'R', 'R', 'R', 'R', 'R',
    '*', '*', '*',                          '*', '*', '*'
  );

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_BASE] = voyager_layout_wrapper_custom(
        NUMBER_ROW_L,  _______, _______,  NUMBER_ROW_R,
        LAYER_BASE_L2, _______, KC_EQUAL, LAYER_BASE_R2,
        LAYER_BASE_L3, KC_DEL,  KC_BSPC,  LAYER_BASE_R3,
        LAYER_BASE_L4,                    LAYER_BASE_R4,
        _______, _______, _______, _______, LT(LAYER_FN, KC_SPC),    _______, KC_LBRC, KC_RBRC, _______, _______,
        _______,                         _______,
        LAYER_BASE_LT, _______, _______, LAYER_BASE_RT
      ),
      [LAYER_GAME] = voyager_layout_wrapper_custom(
        LAYER_GAME_L1, _______, _______, LAYER_GAME_R1,
        LAYER_GAME_L2, _______, _______, LAYER_GAME_R2,
        LAYER_GAME_L3, _______, _______, LAYER_GAME_R3,
        LAYER_GAME_L4,                   LAYER_GAME_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                          _______,
        LAYER_GAME_LT, _______,  _______, LAYER_GAME_RT
      ),
      [LAYER_NAV] = voyager_layout_wrapper_custom(
        LAYER_NAV_L1, _______,  _______, LAYER_NAV_R1,
        LAYER_NAV_L2, _______,  _______, LAYER_NAV_R2,
        LAYER_NAV_L3, _______,  _______, LAYER_NAV_R3,
        LAYER_NAV_L4,                    LAYER_NAV_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                            _______,
        LAYER_NAV_LT, _______,     _______, LAYER_NAV_RT
      ),
      [LAYER_FN] = voyager_layout_wrapper_custom(
        LAYER_FN_L1, _______,   _______, LAYER_FN_R1,
        LAYER_FN_L2, _______,   _______, LAYER_FN_R2,
        LAYER_FN_L3, _______,   _______, LAYER_FN_R3,
        LAYER_FN_L4,                     LAYER_FN_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                         _______,
        LAYER_FN_LT, _______,   _______, LAYER_FN_RT
      ),
      [LAYER_NUM] = voyager_layout_wrapper_custom(
        LAYER_NUM_L1, _______,   _______, LAYER_NUM_R1,
        LAYER_NUM_L2, _______,   _______, LAYER_NUM_R2,
        LAYER_NUM_L3, _______,   _______, LAYER_NUM_R3,
        LAYER_NUM_L4,                     LAYER_NUM_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                         _______,
        LAYER_NUM_LT, _______,  _______, LAYER_NUM_RT
      ),
      [LAYER_SYS] = voyager_layout_wrapper_custom(
        LAYER_SYS_L1, _______,   _______, LAYER_SYS_R1,
        LAYER_SYS_L2, _______,   _______, LAYER_SYS_R2,
        LAYER_SYS_L3, _______,   _______, LAYER_SYS_R3,
        LAYER_SYS_L4,                     LAYER_SYS_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                         _______,
        LAYER_SYS_LT, _______,  _______, LAYER_SYS_RT
      ),
      [LAYER_NUM_LEFT] = voyager_layout_wrapper_custom(
        LAYER_NUM_LEFT_L1, _______,   _______, LAYER_NUM_LEFT_R1,
        LAYER_NUM_LEFT_L2, _______,   _______, LAYER_NUM_LEFT_R2,
        LAYER_NUM_LEFT_L3, _______,   _______, LAYER_NUM_LEFT_R3,
        LAYER_NUM_LEFT_L4,                     LAYER_NUM_LEFT_R4,
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
        _______,                             _______,
        LAYER_NUM_LEFT_LT, _______, _______, LAYER_NUM_LEFT_RT
      )
};
