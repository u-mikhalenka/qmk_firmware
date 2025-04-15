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
#define PC_MODE             QK_MAGIC_UNSWAP_CTL_GUI
#define MAC_MODE            QK_MAGIC_SWAP_CTL_GUI

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

// Base layer
#define LAYER_BASE_L1 KC_EQUAL,       KC_EXLM,        KC_AT,          KC_LPRN,        KC_RPRN,             KC_LABK
#define LAYER_BASE_L2 KC_TRANSPARENT, KC_Q,           ALL_T(KC_W),    KC_E,           KC_R,                KC_T
#define LAYER_BASE_L3 U_CAPS,         HOME_A,         HOME_S,         HOME_D,         HOME_F,              KC_G
#define LAYER_BASE_L4 U_LANG,         KC_Z,           KC_X,           KC_C,           LT(LAYER_FN, KC_V),  KC_B
#define LAYER_BASE_R1 KC_RABK,        KC_LBRC,        KC_RBRC,        KC_EQUAL,       XXXXXXX,             KC_MINUS
#define LAYER_BASE_R2 KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                KC_BSLS
#define LAYER_BASE_R3 KC_H,           HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,           KC_QUOTE
#define LAYER_BASE_R4 KC_N,           ALL_T(KC_M),    KC_COMMA,       KC_DOT,         KC_SLASH,            KC_BSPC
#define LAYER_BASE_LT U_SHIFT,                     LT(LAYER_NUM,KC_TAB)
#define LAYER_BASE_RT LT(LAYER_NUM_LEFT,KC_ENTER), LT(LAYER_NAV,KC_SPACE)

// Game layer
#define LAYER_GAME_L1 KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5
#define LAYER_GAME_L2 KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T
#define LAYER_GAME_L3 KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G
#define LAYER_GAME_L4 KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B
#define LAYER_GAME_R1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_GAME_R2 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_GAME_R3 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_GAME_R4 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_GAME_LT KC_SPACE,       KC_LEFT_ALT
#define LAYER_GAME_RT KC_TRANSPARENT, KC_TRANSPARENT

// Navigation layer
#define LAYER_NAV_L1 KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,              KC_5
#define LAYER_NAV_L2 KC_TRANSPARENT, KC_TRANSPARENT, LSFT(KC_COMMA), LSFT(KC_LBRC),  LSFT(KC_RBRC),     LSFT(KC_DOT)
#define LAYER_NAV_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,     KC_TRANSPARENT
#define LAYER_NAV_L4 KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LT(LAYER_FN, KC_V),KC_TRANSPARENT
#define LAYER_NAV_R1 KC_6,           KC_7,           KC_8,           KC_9,           KC_0,              KC_MINUS
#define LAYER_NAV_R2 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_INSERT,         KC_TRANSPARENT
#define LAYER_NAV_R3 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT,    KC_TRANSPARENT
#define LAYER_NAV_R4 KC_BSPC,        KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,    KC_TRANSPARENT
#define LAYER_NAV_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NAV_RT KC_TRANSPARENT, KC_TRANSPARENT

// Function layer
#define LAYER_FN_L1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_L2 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT
#define LAYER_FN_L4 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_R1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAUSE,       KC_TRANSPARENT
#define LAYER_FN_R2 KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_APPLICATION, KC_TRANSPARENT
#define LAYER_FN_R3 KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_R4 KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_RT KC_TRANSPARENT, KC_TRANSPARENT

// Number layer
#define LAYER_NUM_L1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_L2 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT
#define LAYER_NUM_L4 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R2 KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R3 KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R4 KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_RT KC_TRANSPARENT, KC_TRANSPARENT

// System layer
#define LAYER_SYS_L1 RGB_VAI,             RGB_VAD,             RGB_SLD,             RGB_SPI,              RGB_SPD,              RGB_MODE_FORWARD
#define LAYER_SYS_L2 RGB_SAI,             RGB_SAD,             KC_AUDIO_MUTE,       KC_AUDIO_VOL_UP,      KC_AUDIO_VOL_DOWN,    KC_TRANSPARENT
#define LAYER_SYS_L3 RGB_HUI,             RGB_HUD,             KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE,  KC_MEDIA_NEXT_TRACK,  (LAYER_GAME)
#define LAYER_SYS_L4 KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      LSFT(KC_PSCR),        KC_PSCR,              (0)
#define LAYER_SYS_R1 QK_BOOT,             KC_TRANSPARENT,      KC_TRANSPARENT,      KC_PSCR,              KC_PAUSE,             PC_MODE
#define LAYER_SYS_R2 KC_MS_ACCEL2,        KC_MS_WH_DOWN,       KC_MS_UP,            KC_MS_WH_UP,          KC_APPLICATION,       MAC_MODE
#define LAYER_SYS_R3 KC_MS_ACCEL1,        KC_MS_LEFT,          KC_MS_DOWN,          KC_MS_RIGHT,          KC_TRANSPARENT,       KC_TRANSPARENT
#define LAYER_SYS_R4 KC_MS_ACCEL0,        KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,       KC_TRANSPARENT,       KC_DELETE
#define LAYER_SYS_LT KC_MS_BTN1,          KC_MS_BTN2
#define LAYER_SYS_RT KC_TRANSPARENT,      KC_TRANSPARENT

// Number layer left
#define LAYER_NUM_LEFT_L1 KC_NO,          KC_NO,          KC_7 ,           KC_8 ,         KC_9 ,           KC_EQUAL
#define LAYER_NUM_LEFT_L2 KC_NO,          KC_NO,          KC_4 ,           KC_5 ,         KC_6 ,           KC_MINUS
#define LAYER_NUM_LEFT_L3 KC_NO,          KC_NO,          KC_1 ,           KC_2 ,         KC_3,            KC_0
#define LAYER_NUM_LEFT_L4 KC_NO,          KC_NO,          KC_NO,           KC_NO,         KC_DOT,          KC_NO
#define LAYER_NUM_LEFT_R1 KC_NO,          KC_NO,          KC_NO,           KC_NO,         KC_NO,           KC_TRANSPARENT
#define LAYER_NUM_LEFT_R2 KC_NO,          KC_NO,          KC_NO,           KC_NO,         KC_NO,           KC_NO
#define LAYER_NUM_LEFT_R3 KC_NO,          KC_RSFT,        KC_RCTL,         KC_LALT,       KC_RGUI,         KC_NO
#define LAYER_NUM_LEFT_R4 KC_NO,          KC_NO,          KC_NO,           KC_NO,         KC_NO,           KC_NO
#define LAYER_NUM_LEFT_LT KC_SPACE,       KC_TRANSPARENT
#define LAYER_NUM_LEFT_RT KC_TRANSPARENT, KC_TRANSPARENT

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
