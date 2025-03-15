#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE


#define LAYER_BASE          0
#define LAYER_GAME          1
#define LAYER_NAV           2
#define LAYER_FN            3
#define LAYER_NUM           4
#define LAYER_SYS           5
#define LAYER_NUM_LEFT      6

// Left-hand home row mods
#define HOME_A              LGUI_T(KC_A)
#define HOME_S              LALT_T(KC_S)
#define HOME_D              LCTL_T(KC_D)
#define HOME_F              LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J              RSFT_T(KC_J)
#define HOME_K              RCTL_T(KC_K)
#define HOME_L              LALT_T(KC_L)
#define HOME_SCLN           RGUI_T(KC_SCLN)

#define U_CAPS              LT(LAYER_NAV,KC_ESCAPE)
#define U_LANG              LT(LAYER_SYS,KC_F13)
#define U_SHIFT             MT(MOD_LSFT, KC_GRAVE)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L','L',       'R', 'R', 'R', 'R', 'R', 'R',
                            '*', '*',      '*', '*'
    );

const uint16_t  PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [LAYER_BASE] = LAYOUT_voyager(
    KC_EQUAL,       KC_EXLM,        KC_AT,          KC_LPRN,        KC_RPRN,             KC_LABK,                                        KC_RABK,        KC_LBRC,        KC_RBRC,        KC_EQUAL,       KC_MINUS,       KC_MINUS,
    KC_TRANSPARENT, KC_Q,           ALL_T(KC_W),    KC_E,           KC_R,                KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    U_CAPS,         HOME_A,         HOME_S,         HOME_D,         HOME_F,              KC_G,                                           KC_H,           HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,      KC_QUOTE,
    U_LANG,         KC_Z,           KC_X,           KC_C,           LT(LAYER_NUM, KC_V), KC_B,                                           KC_N,           ALL_T(KC_M),    KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSPC,
                                                    U_SHIFT,        LT(LAYER_FN,KC_TAB),                            LT(LAYER_NUM_LEFT,KC_ENTER), LT(LAYER_NAV,KC_SPACE)
  ),
  [LAYER_GAME] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_NAV] = LAYOUT_voyager(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_LBRC),  LSFT(KC_RBRC),  LSFT(KC_DOT),                                   KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_TRANSPARENT,                                 KC_BSPC,        KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_FN] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PAUSE,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_APPLICATION, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_NUM] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [LAYER_SYS] = LAYOUT_voyager(
    RGB_VAI,        RGB_VAD,        RGB_SLD,        RGB_SPI,        RGB_SPD,        RGB_MODE_FORWARD,                               QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,        KC_PAUSE,       KC_TRANSPARENT,
    RGB_SAI,        RGB_SAD,        KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT,                               KC_MS_ACCEL2,   KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_APPLICATION, KC_TRANSPARENT,
    RGB_HUI,        RGB_HUD,        KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,TO(LAYER_GAME),                     KC_MS_ACCEL1,   KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_PSCR),  KC_PSCR,        TO(0),                                          KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                                 KC_MS_BTN1,     KC_MS_BTN2
  ),
  [LAYER_NUM_LEFT] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_7 ,           KC_8 ,         KC_9 ,           KC_EQUAL,                                        KC_NO,          KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_NO,          KC_NO,          KC_4 ,           KC_5 ,         KC_6 ,           KC_MINUS,                                        KC_NO,          KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_1 ,           KC_2 ,         KC_3,            KC_0,                                            KC_NO,          KC_RSFT,           KC_RCTL,        KC_LALT,        KC_RGUI,        KC_NO,
    KC_NO,          KC_NO,          KC_NO,           KC_NO,         KC_DOT,          KC_NO,                                           KC_NO,          KC_NO,             KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_SPACE,        KC_TRANSPARENT,                                  KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case U_SHIFT:
            // Immediately select the hold action when another key is tapped.
            // return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case U_SHIFT:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}
