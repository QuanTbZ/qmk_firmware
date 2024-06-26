// Copyright 2023 Freather
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

enum layer_names {
    _BASE,
    _FN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
      KC_ESC,         KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           LM_TOGG, KC_PSCR, KC_SCRL, KC_PAUS,
      LSFT(JP_BSLS),  JP_1,    JP_2,    JP_3,    JP_4,    JP_5,    JP_6,    JP_7,    JP_8,    JP_9,    JP_0,    JP_MINS, JP_CIRC, JP_YEN,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
      KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,  KC_END,  KC_PGDN,
      KC_CAPS,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
      KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                                     KC_UP,
      KC_LCTL,        KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_RALT, MO(1),   KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [_FN1] = LAYOUT(
      QK_BOOT,        LM_PREV, LM_NEXT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_KB_MUTE, _______, _______, _______,
      _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
      _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                                     _______,
      _______,        _______, _______,                            _______,                                     _______, _______, _______,          _______, _______, _______
  )
};
