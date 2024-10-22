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

#include "zigotica.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_PRSTEN] = LAYOUT_wrapper(
       _PRSTEN_L1,    _PRSTEN_R1,
       _PRSTEN_L2,    _PRSTEN_R2,
       _PRSTEN_L3,    _PRSTEN_R3,
       _PRSTEN_LT,    _PRSTEN_RT
    ),

    [_STENAI] = LAYOUT_wrapper(
       _STENAI_L1,    _STENAI_R1,
       _STENAI_L2,    _STENAI_R2,
       _STENAI_L3,    _STENAI_R3,
       _STENAI_LT,    _STENAI_RT
    ),

    [_QWERTY] = LAYOUT_wrapper(
       _QWERTY_L1,    _QWERTY_R1,
       _QWERTY_L2,    _QWERTY_R2,
       _QWERTY_L3,    _QWERTY_R3,
       _QWERTY_LT,    _QWERTY_RT
    ),

    [_NUM] = LAYOUT_wrapper(
      ____NUM_L1,     ____NUM_R1,
      ____NUM_L2,     ____NUM_R2,
      ____NUM_L3,     ____NUM_R3,
      ____NUM_LT,     ____NUM_RT
    ),

    [_NAV] = LAYOUT_wrapper(
      ____NAV_L1,     ____NAV_R1,
      ____NAV_L2,     ____NAV_R2,
      ____NAV_L3,     ____NAV_R3,
      ____NAV_LT,     ____NAV_RT
    ),

    [_SYM] = LAYOUT_wrapper(
      ____SYM_L1,     ____SYM_R1,
      ____SYM_L2,     ____SYM_R2,
      ____SYM_L3,     ____SYM_R3,
      ____SYM_LT,     ____SYM_RT
    ),

    [_FN] = LAYOUT_wrapper(
      ____FN_L1,     ____FN_R1,
      ____FN_L2,     ____FN_R2,
      ____FN_L3,     ____FN_R3,
      ____FN_LT,     ____FN_RT
    ),

    [_SETUP] = LAYOUT_wrapper(
      ____SETUP_L1,     ____SETUP_R1,
      ____SETUP_L2,     ____SETUP_R2,
      ____SETUP_L3,     ____SETUP_R3,
      ____SETUP_LT,     ____SETUP_RT
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _NUM, _FN, _SETUP);
}
