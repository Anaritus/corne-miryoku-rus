#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#define QMK_LAYER_BASE 4
#define QMK_LAYER_RUS 11

#define U_NAV 5
#define U_MOUSE 6
#define U_MEDIA 7
#define U_NUM 8
#define U_SYM 9
#define U_FUN 10

#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  TOGGLE_LANG_COMBO
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    CW_TOGG,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_0),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_LBRC,        KC_ESCAPE,
                                                    MO(1),          MEH_T(KC_SPACE),                                KC_ENTER,       MO(2)
  ),
  [1] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_TRANSPARENT,
    KC_TAB,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_LEFT_CTRL,   LALT(LGUI(LCTL(LSFT(KC_A)))),LALT(LGUI(LCTL(LSFT(KC_S)))),LALT(LGUI(LCTL(LSFT(KC_D)))),LALT(LGUI(LCTL(LSFT(KC_F)))),LALT(LGUI(LCTL(LSFT(KC_G)))),                                KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LALT(KC_DELETE),KC_DELETE,
    KC_LEFT_SHIFT,  LGUI(KC_W),     RGB_TOG,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,                                  KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,KC_SLASH,       LSFT(KC_SLASH),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MT(MOD_LALT, KC_ENTER),MO(3)
  ),
  [2] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_BSPC,
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_MINUS,       KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_BSLS,        KC_GRAVE,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           LSFT(KC_MINUS), KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TILD,
                                                    MO(3),          MT(MOD_LGUI, KC_SPACE),                                KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_ENTER)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_U)),LALT(LCTL(KC_I)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),                                LALT(LCTL(KC_E)),LALT(LCTL(KC_J)),LALT(LCTL(KC_K)),LALT(LCTL(KC_T)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_C)),LALT(LGUI(LCTL(KC_LEFT))),LALT(LGUI(LCTL(KC_RIGHT))),                                LALT(LCTL(KC_LEFT)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    TO(11),         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_QUOTE,       TD(DANCE_1),
    KC_NO,          MT(MOD_LGUI, KC_A),MT(MOD_RALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_RALT, KC_I),MT(MOD_RGUI, KC_O),KC_NO,
    KC_NO,          KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_NO,
                                                    LT(5, KC_SPACE),LT(6, KC_ESCAPE),                                LT(9, KC_ENTER),LT(8, KC_BSPC)
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(LSFT(KC_Z)),KC_MAC_PASTE,   KC_MAC_COPY,    KC_MAC_CUT,     KC_MAC_UNDO,    KC_NO,
    KC_NO,          KC_LEFT_GUI,    KC_RIGHT_ALT,   KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_CAPS,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        KC_TRANSPARENT,                                 CW_TOGG,        KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,
                                                    KC_TRANSPARENT, KC_NO,                                          KC_ENTER,       KC_BSPC
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LGUI(LSFT(KC_Z)),KC_MAC_PASTE,   KC_MAC_COPY,    KC_MAC_CUT,     KC_MAC_UNDO,    KC_NO,
    KC_NO,          KC_LEFT_GUI,    KC_RIGHT_ALT,   KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        KC_TRANSPARENT,                                 KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_NO,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN2,     KC_MS_BTN1
  ),
  [7] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          RGB_TOG,        RGB_MODE_FORWARD,RGB_HUI,        RGB_SAI,        RGB_VAI,        KC_NO,
    KC_NO,          KC_LEFT_GUI,    KC_RIGHT_ALT,   KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_NO,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        KC_NO,                                          RGB_SPD,        RGB_SPI,        RGB_HUD,        RGB_SAD,        RGB_VAD,        KC_NO,
                                                    KC_NO,          KC_NO,                                          KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [8] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,                                       KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    KC_NO,          KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_NO,          QK_LLCK,        KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    KC_0,           KC_MINUS,                                       KC_NO,          KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_LCBR,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RCBR,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_COLN,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_PLUS,                                        KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    KC_NO,          KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_PIPE,                                        KC_NO,          QK_LLCK,        KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    KC_RPRN,        KC_UNDS,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,                                        KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_NO,
    KC_NO,          KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
                                                    KC_SPACE,       KC_TAB,                                         KC_NO,          KC_NO
  ),
  [11] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,
    TO(4),          RU_SHTI,        RU_TSE,         RU_U,           RU_KA,          RU_IE,                                          RU_EN,          RU_GHE,         RU_SHA,         RU_SHCH,        RU_ZE,          KC_BSPC,
    KC_NO,          MT(MOD_LGUI, RU_EF),MT(MOD_RALT, RU_YERU),MT(MOD_LCTL, RU_VE),MT(MOD_LSFT, RU_A),RU_PE,                                          RU_ER,          MT(MOD_RSFT, RU_O),MT(MOD_RCTL, RU_EL),MT(MOD_RALT, RU_DE),MT(MOD_RGUI, RU_ZHE),RU_E,
    KC_NO,          RU_YA,          RU_CHE,         RU_ES,          RU_EM,          RU_I,                                           RU_TE,          RU_SOFT,        RU_BE,          RU_YU,          RU_HA,          RU_HARD,
                                                    KC_SPACE,       KC_ESCAPE,                                      KC_ENTER,       LT(12, KC_BSPC)
  ),
  [12] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LBRC,        KC_7,           KC_8,           KC_9,           KC_RBRC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SCLN,        KC_4,           KC_5,           KC_6,           KC_EQUAL,                                       KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_BSLS,                                        KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_SPACE, KC_ESCAPE, COMBO_END};

const uint16_t PROGMEM cmb_to_rus[] = { KC_L, KC_U, KC_Y, COMBO_END };
const uint16_t PROGMEM cmb_to_eng[] = { RU_GHE, RU_SHA, RU_SHCH, COMBO_END };


const uint16_t PROGMEM thumbcombos_base_right[] = {LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), COMBO_END};
const uint16_t PROGMEM thumbcombos_base_left[] = {LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_ESC), COMBO_END};
const uint16_t PROGMEM thumbcombos_nav[] = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM thumbcombos_mouse[] = {KC_BTN2, KC_BTN1, COMBO_END};
const uint16_t PROGMEM thumbcombos_media[] = {KC_MSTP, KC_MPLY, COMBO_END};
const uint16_t PROGMEM thumbcombos_num[] = {KC_0, KC_MINS, COMBO_END};
const uint16_t PROGMEM thumbcombos_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
const uint16_t PROGMEM thumbcombos_fun[] = {KC_SPC, KC_TAB, COMBO_END};

const uint16_t PROGMEM corne_thumbcombos_left[] = {MO(1), MEH_T(KC_SPACE), COMBO_END};
const uint16_t PROGMEM corne_thumbcombos_right[] = {KC_ENTER, MO(2), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_TAB),
    COMBO(thumbcombos_base_right, LT(U_FUN, KC_DEL)),
    COMBO(thumbcombos_base_left, LT(U_MEDIA, KC_TAB)),
    COMBO(thumbcombos_nav, KC_DEL),
    COMBO(thumbcombos_mouse, KC_BTN3),
    COMBO(thumbcombos_media, KC_MUTE),
    COMBO(thumbcombos_num, KC_DOT),
    COMBO(thumbcombos_sym, KC_LPRN),
    COMBO(thumbcombos_fun, KC_APP),
    COMBO(cmb_to_rus, TOGGLE_LANG_COMBO),
    COMBO(cmb_to_eng, TOGGLE_LANG_COMBO),
    COMBO(corne_thumbcombos_left, KC_RGUI),
    COMBO(corne_thumbcombos_right, MT(MOD_RALT, KC_F13)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MO(1):
            return TAPPING_TERM -100;
        case MO(2):
            return TAPPING_TERM -100;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,250}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {245,114,180}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,177,131}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {0,0,0}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {0,0,0}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {141,177,131}, {0,0,0}, {141,177,131}, {141,177,131} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,198,234}, {24,198,234}, {24,198,234}, {24,198,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,198,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {24,198,234}, {24,198,234}, {24,198,234}, {24,198,234}, {24,198,234}, {0,0,0}, {0,0,0}, {24,198,234}, {24,198,234}, {24,198,234}, {24,198,234}, {0,0,0}, {0,0,0}, {24,198,234}, {24,198,234}, {24,198,234}, {24,198,234}, {0,0,0}, {24,198,234}, {24,198,234} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,105,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {0,0,0}, {0,0,0}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {0,0,0}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {1,105,215}, {0,0,0}, {1,105,215}, {1,105,215} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {0,0,0}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {0,0,0}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,117,159}, {135,117,159}, {135,117,159}, {135,117,159}, {0,0,0}, {0,0,0}, {135,117,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {0,0,0}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {0,0,0}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {175,22,244}, {175,22,244}, {175,22,244}, {175,22,244}, {0,0,0}, {0,0,0}, {175,22,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {0,0,0}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {0,0,0}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {245,114,180}, {245,114,180}, {245,114,180}, {245,114,180}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [11] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {0,0,0}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {0,0,0}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250}, {169,255,250} },

    [12] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,117,159}, {135,117,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
    case 11:
      set_layer_color(11);
      break;
    case 12:
      set_layer_color(12);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case TOGGLE_LANG_COMBO:
      if (record->event.pressed) {
        uint8_t current_highest_layer = get_highest_layer(layer_state);
        if (current_highest_layer == QMK_LAYER_BASE) {
          layer_move(QMK_LAYER_RUS);
        } else {
          layer_move(QMK_LAYER_BASE);
        }
        tap_code(KC_F13);
      }
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(4); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};
