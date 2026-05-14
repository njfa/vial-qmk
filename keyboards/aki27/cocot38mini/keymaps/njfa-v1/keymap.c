/*
Copyright 2024 aki27

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "quantum.h"

#include "keymap_japanese.h"

#define MS_BTN1 KC_MS_BTN1
#define MS_BTN2 KC_MS_BTN2
#define MS_BTN3 KC_MS_BTN3
#define MS_BTN4 KC_MS_BTN4
#define MS_BTN5 KC_MS_BTN5


enum keyboard_maps {
    CK_PRN = QK_USER,
    CK_BRC,
    CK_CLN,
    KC_LT1_SPC,
    KC_LT2_ENT
};

#define CK_PRN QK_KB_8
#define CK_BRC QK_KB_9
#define CK_CLN QK_KB_10

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_Q,         KC_W, KC_E,            KC_R,         KC_T,         /* */    /* */    KC_Y,    KC_U,         KC_I,    KC_O,   KC_P,
        KC_A,         KC_S, KC_D,            KC_F,         KC_G,         /* */    /* */    KC_H,    KC_J,         KC_K,    KC_L,   LCTL_T(KC_TAB),
        LSFT_T(KC_Z), KC_X, KC_C,            KC_V,         KC_B,         /* */    /* */    KC_N,    KC_M,         KC_COMM, KC_DOT, KC_SLSH,
        /* */         /* */ LCTL_T(KC_LNG1), LT(1,KC_SPC), LT(5,KC_ESC), KC_LGUI, MS_BTN1, KC_BSPC, LT(2, KC_ENT), LSFT_T(KC_LNG2)
    ),
    [1] = LAYOUT(
        JP_EXLM,      JP_AT, JP_HASH, JP_DLR,  JP_PERC, /* */    /* */    JP_PIPE, JP_AMPR,      JP_ASTR, JP_GRV,  JP_TILD,
        JP_1,         JP_2,  JP_3,    JP_4,    JP_5,    /* */    /* */    JP_PLUS, JP_EQL,       JP_MINS, JP_CIRC, _______,
        LSFT_T(JP_6), JP_7,  JP_8,    JP_9,    JP_0,    /* */    /* */    JP_BSLS, JP_UNDS,      _______, _______, _______,
        /* */         /* */  _______, _______, _______, _______, _______, KC_DEL,  _______, _______
    ),
    [2] = LAYOUT(
        JP_EXLM,         JP_AT,   JP_HASH, JP_DLR,       JP_PERC, /* */    /* */    JP_PIPE, JP_AMPR, JP_ASTR,       JP_GRV,       JP_TILD,
        JP_COLN,         JP_LCBR, JP_LBRC, JP_LPRN,      JP_DQUO, /* */    /* */    KC_LEFT, KC_DOWN, KC_UP,         KC_RGHT,      _______,
        LSFT_T(JP_SCLN), JP_RCBR, JP_RBRC, JP_QUOT,      JP_RPRN, /* */    /* */    KC_HOME, KC_END,  LSFT(KC_COMM), LSFT(KC_DOT), _______,
        /* */            /* */    _______, LT(3,KC_SPC), KC_ESC,  _______, _______, _______, _______, _______
    ),
    [3] = LAYOUT(
        JP_EXLM,      JP_AT, JP_HASH,         JP_DLR, JP_PERC, /* */    /* */    JP_PIPE, JP_AMPR, JP_ASTR, JP_GRV,  JP_TILD,
        JP_1,         JP_2,  JP_3,            JP_4,   JP_5,    /* */    /* */    JP_PLUS, JP_EQL,  JP_MINS, JP_CIRC, LCTL_T(KC_TAB),
        LSFT_T(JP_6), JP_7,  JP_8,            JP_9,   JP_0,    /* */    /* */    JP_BSLS, JP_UNDS, KC_COMM, KC_DOT,  KC_SLSH,
        /* */         /* */  LCTL_T(KC_LNG1), KC_SPC, KC_ESC,  KC_LGUI, MS_BTN1, KC_DEL,  KC_ENT,  LSFT_T(KC_LNG2)
    ),
    [4] = LAYOUT(
        XXXXXXX, SCRL_SW, MS_BTN4, MS_BTN5, XXXXXXX, /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        KC_LCTL, CPI_SW,  MS_BTN3, MS_BTN2, XXXXXXX, /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        KC_LSFT, SCRL_IN, ROT_L15, ROT_R15, XXXXXXX, /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        /* */    /* */    _______, _______, _______, _______, MS_BTN1, _______, _______, _______
    ),
    [5] = LAYOUT(
        KC_F1,  KC_F2,      KC_F3,      KC_F4,        KC_F5,      /* */        /* */    KC_F6,      KC_F7,        KC_F8,      KC_F9,      KC_F10,
        KC_F11, LALT(KC_S), LALT(KC_D), LALT(KC_F),   LALT(KC_G), /* */        /* */    LALT(KC_H), LALT(KC_J),   LALT(KC_K), LALT(KC_L), _______,
        KC_F12, LALT(KC_X), LALT(KC_C), LALT(KC_V),   LALT(KC_B), /* */        /* */    LALT(KC_N), LALT(KC_M),   XXXXXXX,    XXXXXXX,    _______,
        /* */   /* */       _______,    LALT(KC_SPC), _______,    LCA(KC_DEL), _______, TT(6),      LALT(KC_ENT), KC_LALT
    ),
    [6] = LAYOUT(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /* */    /* */    RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX,  RGB_SAI, RGB_SAD,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX,  RGB_VAI, RGB_VAD,
        /* */    /* */    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [7] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
};


#ifdef VIAL_TAP_DANCE_ENABLE
/* タップダンスの定義 */
void keyboard_post_init_user(void) {
    vial_tap_dance_entry_t td0 = { KC_TAB, KC_LCTL, KC_COLN, KC_LCTL, 200 };
    /* vial_tap_dance_entry_t td0 = { KC_LPRN, KC_LPRN, KC_RPRN, KC_RPRN, 200 }; */
    /* vial_tap_dance_entry_t td1 = { KC_LBRC, KC_LALT, KC_RBRC, KC_LALT, 200 }; */
    /* vial_tap_dance_entry_t td2 = { KC_LCBR, KC_LCBR, KC_RCBR, KC_RCBR, 180 }; */
    /* vial_tap_dance_entry_t td3 = { KC_AMPR, KC_AMPR, KC_QUOT, KC_QUOT, 200 }; */
    /* vial_tap_dance_entry_t td4 = { KC_ASTR, KC_ASTR, KC_DQT,  KC_DQT,  200 }; */
    /* vial_tap_dance_entry_t td5 = { KC_Q,    KC_Q,    KC_ESC,  KC_ESC,  200 }; */
    /* vial_tap_dance_entry_t td6 = { KC_COLN, KC_COLN, KC_SCLN, KC_SCLN, 180 }; */
    /* vial_tap_dance_entry_t td7 = { KC_F11,  KC_F11,  KC_F1,   KC_F1,   200 }; */
    /* vial_tap_dance_entry_t td8 = { KC_F12,  KC_F12,  KC_F2,   KC_F2,   200 }; */
    /* vial_tap_dance_entry_t td9 = { KC_DQT,  KC_DQT,  KC_QUOT, KC_QUOT, 200 }; */
    dynamic_keymap_set_tap_dance(0, &td0);
    /* dynamic_keymap_set_tap_dance(1, &td1); */
    /* dynamic_keymap_set_tap_dance(2, &td2); */
    /* dynamic_keymap_set_tap_dance(3, &td3); */
    /* dynamic_keymap_set_tap_dance(4, &td4); */
    /* dynamic_keymap_set_tap_dance(5, &td5); */
    /* dynamic_keymap_set_tap_dance(6, &td6); */
    /* dynamic_keymap_set_tap_dance(7, &td7); */
    /* dynamic_keymap_set_tap_dance(8, &td8); */
    /* dynamic_keymap_set_tap_dance(9, &td9); */
}
#endif


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_PGUP, KC_PGDN) },
    [1] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [2] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [3] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [4] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [5] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [6] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
    [7] =   { ENCODER_CCW_CW(XXXXXXX, XXXXXXX) },
};
#endif



bool is_mouse_record_kb(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
      case KC_LCTL:
        return true;
      case KC_LSFT:
        return true;
      case SCRL_MO:
        return true;
      default:
        return false;
    }
    return is_mouse_record_user(keycode, record);
}

/*
 * キーを2連打した際にhold/tapどちらののキーが認識されるかを切り替える
 * 設定しなければ、元のキーが押し続けられた状態になる
 */
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_SPC):
        case LT(2, KC_ENT):
        case LT(3, KC_SPC):
        /* case LCTL_T(KC_LNG1): */
        /* case LSFT_T(KC_LNG2): */
        case LCTL_T(KC_A):
        case LALT_T(KC_A):
        case LSFT_T(KC_Z):
        case LCTL_T(KC_TAB):
        case LALT_T(KC_TAB):
        case LSFT_T(KC_SLSH):
        case LALT_T(KC_SLSH):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}

/* キーコードのカスタマイズ */
static uint16_t ctrl_pressed_timer;
static bool ctrl_active         = false;
static bool ctrl_pressed        = false;

static bool delkey_registered  = false;
static bool prnkey_registered  = false;
static bool brckey_registered  = false;
static bool cbrkey_registered  = false;
static bool qotkey_registered  = false;

uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    mod_state = get_mods();

    if (record->event.pressed && keycode != CK_CLN && ctrl_pressed && !ctrl_active) {
        if (mod_state & MOD_MASK_SHIFT) {
            del_mods(MOD_MASK_SHIFT);
            tap_code16(KC_SCLN);
            set_mods(mod_state);
        } else {
            tap_code16(KC_COLN);
        }
        ctrl_pressed = false;
    }

    switch (keycode) {
        case KC_BSPC:
        case LSFT_T(KC_BSPC):
            {
                if (record->event.pressed) {
                    if (mod_state & MOD_MASK_SHIFT) {
                        del_mods(MOD_MASK_SHIFT);
                        register_code(KC_DEL);
                        delkey_registered = true;
                        set_mods(mod_state);
                        return false;
                    }
                } else { // on release of KC_BSPC
                    if (delkey_registered) {
                        unregister_code(KC_DEL);
                        delkey_registered = false;
                        return false;
                    }
                }
                return true;
            }
        case KC_DQT:
            {
                if (record->event.pressed) {
                    if (mod_state & MOD_MASK_SHIFT) {
                        del_mods(MOD_MASK_SHIFT);
                        register_code16(KC_QUOT);
                        qotkey_registered = true;
                        set_mods(mod_state);
                    /* } else if (mod_state & MOD_MASK_CTRL) { */
                    /*     del_mods(MOD_MASK_CTRL); */
                    /*     register_code16(KC_QUOT); */
                    /*     qotkey_registered = true; */
                    /*     set_mods(mod_state); */
                    } else {
                        register_code16(KC_DQT);
                    }
                } else {
                    if (qotkey_registered) {
                        unregister_code16(KC_QUOT);
                        qotkey_registered = false;
                    } else {
                        unregister_code16(KC_DQT);
                    }
                }
                return false;
            }
        case KC_LPRN:
            {
                if (record->event.pressed) {
                    if (mod_state & MOD_MASK_SHIFT) {
                        del_mods(MOD_MASK_SHIFT);
                        register_code16(KC_RPRN);
                        prnkey_registered = true;
                        set_mods(mod_state);
                    } else if (mod_state & MOD_MASK_CTRL) {
                        del_mods(MOD_MASK_CTRL);
                        register_code16(KC_RPRN);
                        prnkey_registered = true;
                        set_mods(mod_state);
                    } else {
                        register_code16(KC_LPRN);
                    }
                } else {
                    if (prnkey_registered) {
                        unregister_code16(KC_RPRN);
                        prnkey_registered = false;
                    } else {
                        unregister_code16(KC_LPRN);
                    }
                }
                return false;
            }
        case KC_LBRC:
            {
                if (record->event.pressed) {
                    if (mod_state & MOD_MASK_SHIFT) {
                        del_mods(MOD_MASK_SHIFT);
                        register_code16(KC_RBRC);
                        brckey_registered = true;
                        set_mods(mod_state);
                    } else if (mod_state & MOD_MASK_CTRL) {
                        del_mods(MOD_MASK_CTRL);
                        register_code16(KC_RBRC);
                        brckey_registered = true;
                        set_mods(mod_state);
                    } else {
                        register_code16(KC_LBRC);
                    }
                } else {
                    if (brckey_registered) {
                        unregister_code16(KC_RBRC);
                        brckey_registered = false;
                    } else {
                        unregister_code16(KC_LBRC);
                    }
                }
                return false;
            }
        case KC_LCBR:
            {
                if (record->event.pressed) {
                    if (mod_state & MOD_MASK_SHIFT) {
                        del_mods(MOD_MASK_SHIFT);
                        register_code16(KC_RCBR);
                        cbrkey_registered = true;
                        set_mods(mod_state);
                    } else if (mod_state & MOD_MASK_CTRL) {
                        del_mods(MOD_MASK_CTRL);
                        register_code16(KC_RCBR);
                        cbrkey_registered = true;
                        set_mods(mod_state);
                    } else {
                        register_code16(KC_LCBR);
                    }
                } else {
                    if (cbrkey_registered) {
                        unregister_code16(KC_RCBR);
                        cbrkey_registered = false;
                    } else {
                        unregister_code16(KC_LCBR);
                    }
                }
                return false;
            }
        case CK_CLN:
            {
                if (record->event.pressed) {
                    ctrl_pressed_timer = timer_read();
                } else if (ctrl_pressed) {
                    if (ctrl_active) {
                        /* unregister_code(KC_LALT); */
                        unregister_code(KC_LCTL);
                        ctrl_active = false;
                    } else if (timer_elapsed(ctrl_pressed_timer) <= AUTO_SHIFT_TIMEOUT) {
                        if (mod_state & MOD_MASK_SHIFT) {
                            del_mods(MOD_MASK_SHIFT);
                            tap_code16(KC_SCLN);
                            set_mods(mod_state);
                        } else {
                            tap_code16(KC_COLN);
                        }
                    }
                }

                ctrl_pressed = record->event.pressed;
                return false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
    if (ctrl_pressed && !ctrl_active && timer_elapsed(ctrl_pressed_timer) > AUTO_SHIFT_TIMEOUT) {
        /* register_code(KC_LALT); */
        register_code(KC_LCTL);
        ctrl_active = true;
    }
}

/* qmk_settings.cに定義済みのため指定不可 */
/* bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) { */
/*     switch(keycode) { */
/*         // Capture all mod-tap keycodes. */
/*         case QK_MOD_TAP ... QK_MOD_TAP_MAX: */
/*             return false; */
/*         default: */
/*             return false; */
/*     } */
/* } */

void pointing_device_init_user(void) {
    cocot_config.scrl_inv = COCOT_SCROLL_INV_DEFAULT;
    eeconfig_update_kb(cocot_config.raw);
}

#ifdef RGB_MATRIX_ENABLE

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    int is_layer = get_highest_layer(layer_state|default_layer_state);
    HSV hsv = {0, 255, rgblight_get_val()};

    if (is_layer == 1) {
      hsv.h = 184; //PURPLE
      hsv.s = 255;
    } else if (is_layer == 2)  {
      hsv.h = 145; //PURPLE
      hsv.s = 200;
    } else if (is_layer == 3)  {
      hsv.h = 165; //PURPLE
      hsv.s = 0;
    } else if (is_layer == 4)  {
      hsv.h = 110; //GREEN
    } else if (is_layer == 5)  {
      hsv.h = 135; //CYAN
    } else if (is_layer == 6)  {
      hsv.h = 43; //YELLOW
    } else if (is_layer == 7)  {
      hsv.h = 0; //RED
    } else {
      hsv.h = 165;
      hsv.s = 100;
      /* hsv.h = 180; //PURPLE */
      /* hsv.s = 200; */
    }
    RGB rgb = hsv_to_rgb(hsv);

    for (uint8_t i = led_min; i <= led_max; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], 0x02)) {
          rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
    return false;
};

#endif

