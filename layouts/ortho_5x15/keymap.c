/* Copyright 2023 Sergi Meseguer <zigotica@gmail.com>

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

#include "zigotica.h"

// clang-format off

// Ortho short rows
#define _BLANK_3       _______, _______, _______
#define _BLANK_4       _______, _______, _______, _______
#define ____NUM15      KC_1,    KC_2,    KC_3,   KC_4,   KC_5
#define ____NUM60      KC_6,    KC_7,    KC_8,   KC_9,   KC_0
#define ____FN_15      KC_F1,   KC_F2,   KC_F3,  KC_F4,  KC_F5
#define ____FN_60      KC_F6,   KC_F7,   KC_F8,  KC_F9,  KC_F10
#define ____LMODS      KC_LCTL, KC_LALT, KC_LGUI
#define ____TARRS      _______, KC_UP,   _______
#define ____BARRS      KC_LEFT, KC_DOWN, KC_RIGHT
#define ____LORTH      ____LMODS, KC_MINS
#define ____RORTH      KC_BSPC, KC_SCLN, KC_BSLS, ZK_BRC

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_PRSTEN] = LAYOUT_wrapper(
       KC_ESC,    ____NUM15,     _BLANK_3,    ____NUM60,     KC_DEL,
       KC_TAB,    _PRSTEN_L1,    _BLANK_3,    _PRSTEN_R1,    _______,
       KC_EQL,    _PRSTEN_L2,    _BLANK_3,    _PRSTEN_R2,    KC_ENT,
       KC_LSFT,   _PRSTEN_L3,    ____TARRS,   _PRSTEN_R3,    KC_RSFT,
       ____LORTH, _PRSTEN_LT,    ____BARRS,   _PRSTEN_RT,    ____RORTH
    ),

    [_STENAI] = LAYOUT_wrapper(
       KC_ESC,    ____NUM15,     _BLANK_3,    ____NUM60,     KC_DEL,
       KC_TAB,    _STENAI_L1,    _BLANK_3,    _STENAI_R1,    _______,
       KC_EQL,    _STENAI_L2,    _BLANK_3,    _STENAI_R2,    KC_ENT,
       KC_LSFT,   _STENAI_L3,    ____TARRS,   _STENAI_R3,    KC_RSFT,
       ____LORTH, _STENAI_LT,    ____BARRS,   _STENAI_RT,    ____RORTH
    ),

    [_QWERTY] = LAYOUT_wrapper(
       KC_ESC,    ____NUM15,     _BLANK_3,    ____NUM60,     KC_DEL,
       KC_TAB,    _QWERTY_L1,    _BLANK_3,    _QWERTY_R1,    _______,
       KC_EQL,    _QWERTY_L2,    _BLANK_3,    _QWERTY_R2,    KC_ENT,
       KC_LSFT,   _QWERTY_L3,    ____TARRS,   _QWERTY_R3,    KC_RSFT,
       ____LORTH, _QWERTY_LT,    ____BARRS,   _QWERTY_RT,    ____RORTH
    ),

    [_FN] = LAYOUT_wrapper(
      _______,    ____FN_15,     _BLANK_3,    ____FN_60,     _______,
      _______,    ____FN_L1,     _BLANK_3,    ____FN_R1,     _______,
      _______,    ____FN_L2,     _BLANK_3,    ____FN_R2,     _______,
      _______,    ____FN_L3,     _BLANK_3,    ____FN_R3,     _______,
      _BLANK_4,   ____FN_LT,     _BLANK_3,    ____FN_RT,     _BLANK_4
    ),

    [_NUM] = LAYOUT_wrapper(
      _______,    _BLANK_ROW,    _BLANK_3,    _BLANK_ROW,    _______,
      _______,    ____NUM_L1,    _BLANK_3,    ____NUM_R1,    _______,
      _______,    ____NUM_L2,    _BLANK_3,    ____NUM_R2,    _______,
      _______,    ____NUM_L3,    _BLANK_3,    ____NUM_R3,    _______,
      _BLANK_4,   ____NUM_LT,    _BLANK_3,    ____NUM_RT,    _BLANK_4
    ),

    [_SYM] = LAYOUT_wrapper(
      _______,    _BLANK_ROW,    _BLANK_3,    _BLANK_ROW,    _______,
      _______,    ____SYM_L1,    _BLANK_3,    ____SYM_R1,    _______,
      _______,    ____SYM_L2,    _BLANK_3,    ____SYM_R2,    _______,
      _______,    ____SYM_L3,    _BLANK_3,    ____SYM_R3,    _______,
      _BLANK_4,   ____SYM_LT,    _BLANK_3,    ____SYM_RT,    _BLANK_4
    ),

    [_NAV] = LAYOUT_wrapper(
      _______,    _BLANK_ROW,    _BLANK_3,    _BLANK_ROW,    _______,
      _______,    ____NAV_L1,    _BLANK_3,    ____NAV_R1,    _______,
      _______,    ____NAV_L2,    _BLANK_3,    ____NAV_R2,    _______,
      _______,    ____NAV_L3,    _BLANK_3,    ____NAV_R3,    _______,
      _BLANK_4,   ____NAV_LT,    _BLANK_3,    ____NAV_RT,    _BLANK_4
    ),

    [_SETUP] = LAYOUT_wrapper(
      _______,    _BLANK_ROW,    _BLANK_3,    _BLANK_ROW,    _______,
      _______,    ____SETUP_L1,  _BLANK_3,    ____SETUP_R1,  _______,
      _______,    ____SETUP_L2,  _BLANK_3,    ____SETUP_R2,  _______,
      _______,    ____SETUP_L3,  _BLANK_3,    ____SETUP_R3,  _______,
      _BLANK_4,   ____SETUP_LT,  _BLANK_3,    ____SETUP_RT,  _BLANK_4
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUM, _FN, _SETUP);
}
