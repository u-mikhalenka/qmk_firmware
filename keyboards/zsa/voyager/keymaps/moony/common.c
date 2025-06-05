#include QMK_KEYBOARD_H
#include "version.h"
#include "print.h"

#define MOON_LED_LEVEL LED_LEVEL

#define LAYER_BASE          0
#define LAYER_GAME          1
#define LAYER_NAV           2
#define LAYER_NUM           3
#define LAYER_FN            4
#define LAYER_SYS           5

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
  RGB_SLD = SAFE_RANGE,
  ARROW,
  ARROW_FN,
  SMILE_HAPPY,     // :-)
  SMILE_LAUGHING,  // xD
  SMILE_SAD,       // :-(
  SMILE_SURPRISED, // :O
  SMILE_THINKING,  // :?
  SMILE_SKEPTICAL  // :-/
};

#define NUMBER_ROW_L  KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5
#define NUMBER_ROW_R  KC_6,     KC_7, KC_8, KC_9, KC_0, KC_MINUS

// Base layer
#define LAYER_BASE_L1 KC_NO,          KC_EXLM,        KC_AT,          KC_LPRN,        KC_RPRN,             KC_NO
#define LAYER_BASE_L2 KC_NO,          KC_Q,           KC_W,           KC_E,           KC_R,                KC_T
#define LAYER_BASE_L3 U_CAPS,         HOME_A,         HOME_S,         HOME_D,         HOME_F,              KC_G
#define LAYER_BASE_L4 U_LANG,         ALL_T(KC_Z),    KC_X,           KC_C,           LT(LAYER_FN, KC_V),  KC_B
//                   |---------------|---------------|---------------|---------------|--------------------|-----------------
#define LAYER_BASE_R1 KC_RABK,        KC_LBRC,        KC_RBRC,        KC_EQUAL,       KC_MINUS,            KC_BSPC
#define LAYER_BASE_R2 KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                KC_DELETE
#define LAYER_BASE_R3 KC_H,           HOME_J,         HOME_K,         HOME_L,         HOME_SCLN,           KC_QUOTE
#define LAYER_BASE_R4 KC_N,           KC_M,           KC_COMMA,       KC_DOT,         ALL_T(KC_SLASH),     LT(LAYER_SYS, KC_BSLS)
#define LAYER_BASE_LT U_SHIFT,  LT(LAYER_NUM,KC_TAB)
#define LAYER_BASE_RT LT(LAYER_FN, KC_ENTER), LT(LAYER_NAV,KC_SPACE)

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
#define LAYER_NAV_L1 KC_TRANSPARENT, KC_1,           KC_2,             KC_3,             KC_4,              KC_5
#define LAYER_NAV_L2 KC_TRANSPARENT, KC_NO,          KC_NO,            KC_NO,            KC_NO,             ARROW
#define LAYER_NAV_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,      KC_LEFT_CTRL,     KC_LEFT_SHIFT,     ARROW_FN
#define LAYER_NAV_L4 KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),       LCTL(KC_C),       LT(LAYER_FN, KC_V),KC_TRANSPARENT
#define LAYER_NAV_R1 KC_6,           KC_7,           KC_8,             KC_9,             KC_0,              KC_MINUS
#define LAYER_NAV_R2 KC_HOME,        KC_PGDN,        KC_PAGE_UP,       KC_END,           KC_INSERT,         KC_TRANSPARENT
#define LAYER_NAV_R3 KC_LEFT,        KC_DOWN,        KC_UP,            KC_RIGHT,         KC_TRANSPARENT,    KC_TRANSPARENT
#define LAYER_NAV_R4 KC_BSPC,        KC_DELETE,      KC_TRANSPARENT,   KC_TRANSPARENT,   KC_TRANSPARENT,    KC_TRANSPARENT
#define LAYER_NAV_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NAV_RT KC_TRANSPARENT, KC_TRANSPARENT

// Number layer
#define LAYER_NUM_L1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_L2 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT
#define LAYER_NUM_L4 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R2 KC_EQUAL,       KC_7,           KC_8,           KC_9,           KC_LABK,        KC_RABK
#define LAYER_NUM_R3 KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_R4 KC_0,           KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_NUM_RT KC_TRANSPARENT, KC_TRANSPARENT

// Function layer
#define LAYER_FN_L1 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_L2 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_L3 KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT
#define LAYER_FN_L4 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_R1 KC_PAUSE,       KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_F16,         KC_F17
#define LAYER_FN_R2 KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_F18,         KC_F19
#define LAYER_FN_R3 KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_F20,         KC_F21
#define LAYER_FN_R4 KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_F22,         KC_F23
#define LAYER_FN_LT KC_TRANSPARENT, KC_TRANSPARENT
#define LAYER_FN_RT KC_APPLICATION, KC_TRANSPARENT

// System layer
#define LAYER_SYS_L1 RGB_VAI,             RGB_VAD,             RGB_SLD,             RGB_SPI,              RGB_SPD,              RGB_MODE_FORWARD
#define LAYER_SYS_L2 RGB_SAI,             RGB_SAD,             KC_AUDIO_MUTE,       KC_AUDIO_VOL_UP,      KC_AUDIO_VOL_DOWN,    KC_TRANSPARENT
#define LAYER_SYS_L3 RGB_HUI,             RGB_HUD,             KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE,  KC_MEDIA_NEXT_TRACK,  (LAYER_GAME)
#define LAYER_SYS_L4 KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,      LSFT(KC_PSCR),        KC_PSCR,              (0)

#define LAYER_SYS_R1 QK_BOOT,             QK_REBOOT,           KC_TRANSPARENT,      KC_PSCR,              KC_PAUSE,             PC_MODE
#define LAYER_SYS_R2 KC_MS_ACCEL2,        KC_MS_WH_DOWN,       KC_MS_UP,            KC_MS_WH_UP,          KC_APPLICATION,       MAC_MODE
#define LAYER_SYS_R3 KC_MS_ACCEL1,        KC_MS_LEFT,          KC_MS_DOWN,          KC_MS_RIGHT,          KC_TRANSPARENT,       KC_TRANSPARENT
#define LAYER_SYS_R4 KC_MS_ACCEL0,        KC_TRANSPARENT,      KC_TRANSPARENT,      KC_TRANSPARENT,       KC_TRANSPARENT,       KC_DELETE
#define LAYER_SYS_LT KC_TRANSPARENT,      KC_TRANSPARENT
#define LAYER_SYS_RT KC_MS_BTN1,          KC_MS_BTN2

const uint16_t PROGMEM backspace[] =     {KC_U,     KC_I,     COMBO_END};
const uint16_t PROGMEM delete[] =        {KC_I,     KC_O,     COMBO_END};
const uint16_t PROGMEM left_bracket[] =  {KC_M,     KC_COMMA, COMBO_END};
const uint16_t PROGMEM right_bracket[] = {KC_COMMA, KC_DOT,   COMBO_END};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
};

combo_t key_combos[] = {
    COMBO(left_bracket, KC_LBRC),
    COMBO(right_bracket, KC_RBRC),
    COMBO(backspace, KC_BSPC),
    COMBO(delete, KC_DELETE)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        case ARROW:
            if (record->event.pressed) {
                send_string("=>");
            }
            return false;
        case ARROW_FN:
            if (record->event.pressed) {
                send_string("() => {}");
                tap_code(KC_LEFT);
            }
            return false;
        case SMILE_HAPPY:
            if (record->event.pressed) {
                send_string(":-)");
            }
            return false;
        case SMILE_LAUGHING:
            if (record->event.pressed) {
                send_string("xD");
            }
            return false;
        case SMILE_SAD:
            if (record->event.pressed) {
                send_string(":-(");
            }
            return false;
        case SMILE_SURPRISED:
            if (record->event.pressed) {
                send_string(":O");
            }
            return false;
        case SMILE_THINKING:
            if (record->event.pressed) {
                send_string(":?");
            }
            return false;
        case SMILE_SKEPTICAL:
            if (record->event.pressed) {
                send_string(":-/");
            }
            return false;
    }
    return true;
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
