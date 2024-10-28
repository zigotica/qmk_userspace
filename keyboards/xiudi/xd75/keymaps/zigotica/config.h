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

#pragma once

// these should work better for homerow modifiers
#define TAPPING_TERM 350
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0

// needed to get same layers as split keyboards
// see users/zigotica/zigotica.h
#define ORTHOLINEAR_KEYBOARD

// TAKE COMBOS KEY POSITIONS FROM LAYER 0 (PRSTEN)
#define COMBO_ONLY_FROM_LAYER 0

// QK_MAKE requires this
#define ENABLE_COMPILE_KEYCODE
