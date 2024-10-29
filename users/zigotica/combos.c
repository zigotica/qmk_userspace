/* Copyright 2020 Sergi Meseguer <zigotica@gmail.com>
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

#include "combos.h"

enum combos {
    COMBO_EMAIL,
    COMBO_ESCAPE,
    COMBO_CAPS,
    COMBO_PARENS,
    COMBO_BRACKET,
    COMBO_CURLY,
    COMBO_MINUS,
    COMBO_PLUS,
    COMBO_EQUAL,
    COMBO_SLSH,
    COMBO_ASTR,
};

const uint16_t PROGMEM combo_email[] = {LT(_SYM, KC_E), KC_M, COMBO_END};
const uint16_t PROGMEM combo_escape[] = {LT(_NUM, KC_TAB), LT(_NAV, KC_SPC), COMBO_END};
const uint16_t PROGMEM combo_caps[] = {LSFT_T(KC_S), RSFT_T(KC_A), COMBO_END};
const uint16_t PROGMEM combo_parens[] = {LCTL_T(KC_R), KC_W, COMBO_END};
const uint16_t PROGMEM combo_bracket[] = {LSFT_T(KC_S), KC_C, COMBO_END};
const uint16_t PROGMEM combo_curly[] = {LGUI_T(KC_T), KC_D, COMBO_END};
const uint16_t PROGMEM combo_minus[] = {RGUI_T(KC_N), KC_L, COMBO_END};
const uint16_t PROGMEM combo_plus[] = {RSFT_T(KC_A), KC_U, COMBO_END};
const uint16_t PROGMEM combo_equal[] = {RCTL_T(KC_I), KC_Y, COMBO_END};
const uint16_t PROGMEM combo_slsh[] = {RGUI_T(KC_N), KC_J, COMBO_END};
const uint16_t PROGMEM combo_astr[] = {RSFT_T(KC_A), KC_K, COMBO_END};

combo_t key_combos[] = {
    [COMBO_EMAIL] = COMBO_ACTION(combo_email),
    [COMBO_ESCAPE] = COMBO(combo_escape, KC_ESC),
    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS),
    [COMBO_PARENS] = COMBO(combo_parens, ZK_PRN),
    [COMBO_BRACKET] = COMBO(combo_bracket, ZK_BRC),
    [COMBO_CURLY] = COMBO(combo_curly, ZK_CRL),
    [COMBO_MINUS] = COMBO(combo_minus, KC_MINUS),
    [COMBO_PLUS] = COMBO(combo_plus, KC_PLUS),
    [COMBO_EQUAL] = COMBO(combo_equal, KC_EQUAL),
    [COMBO_SLSH] = COMBO(combo_slsh, KC_SLSH),
    [COMBO_ASTR] = COMBO(combo_astr, KC_ASTR),
};

void process_combo_event(uint16_t index, bool pressed) {
  switch(index) {
    case COMBO_EMAIL:
      if (pressed) {
        SEND_STRING("zigotica@gmail.com");
      }
      break;
  }
}
