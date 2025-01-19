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

#pragma once
#include "zigotica.h"

// clang-format off
#define _BLANK_THUMB    _______, _______
#define _BLANK_ROW      _______, _______, _______, _______, _______

// Aliases for readability
#define PRSTEN  DF(_PRSTEN)
#define STENAI  DF(_STENAI)
#define QWERTY  DF(_QWERTY)

/*
 * PRSTEN Features:
 *
 * - Keymap optimized for combination of english and latin languages
 * - E thumb from Maltron or RSTHD: most used alpha, easier finger
 * - Home row mods
 * - Most common letters (english + latin languages) in home row or thumb
 *   Exception: L in spanish (but using index finger), H in english
 *   RST from Colemak, or RSTHD (just one to the left)
 *   MNAIO from RSTHD
 * - JK (Vim use) in same QWERTY position, just one row lower
 * - T/N homing keys leverage Colemak/Dvorak keycap sets
 * - Common combos with one hand: cmd(T) + WCPRSXV, cmd(N) + OZ
 */

/*
 * PRSTEN Layer
 * Includes combos used in all layers, see COMBO_ONLY_FROM_LAYER in config.h
 * Apple: meta:  ⌘
 *        alt:   ⌥
 *        shift: ⇧
 *        ctrl:  󰘴
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║  ` ~  ║   W   ║   C   F   D   ║   F   ║         ║   Q   ║   L   Q   U   ║   Y   ║  ' "  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬══ ( ══╬══ [ ══╬══ { ══╬═══════╣         ╠═══════╬══ - ══╬══ + ══╬══ = ══╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   P   ║   R   ║   S   ║   T   ║   G   ║      ┌───▫  M   ║   N   ║   A   ║   I   ║   O   ║
 *   ║  alt  ║ ctrl  ║ shft ▫║ meta  ║       ║      │  ║       ║  meta ║▫ shft ║ ctrl  ║  alt  ║
 *   ╠═══════╬═══════╬══════│╬═══════╬═══════╣      │  ╠═══════╬══ / ══╬│═ * ══╬═══════╬═══════╣
 *   ║       ║       ║      │║       ║       ║      │  ║       ║       ║│      ║       ║       ║
 *   ║   X   ║   H   ║   V  │/   B   ║  / ?  ║    email║  , <  ║   J   ,│  K   ║   Z   ║  . >  ║
 *   ║       ║       ║      │║       ║       ║      │  ║  ; td ║       ║│      ║       ║  : td ║
 *   ╚═══════╩═══════╩══════│╬═══════╬═══════╣      │  ╠═══════╬═══════╬│══════╩═══════╩═══════╝
 *                          │║       ║       ║      │  ║       ║       ║│
 *                          │║  TAB  ║  SPC  ║      └───▫  E   ║ INTRO ║│
 *                          │║   fn  ║  num  ║         ║  sym  ║  nav  ║│
 *                          │╚═══════╩═══════╝         ╚═══════╩═══════╝│
 *                          │   └── esc ──┘                             │
 *                          └────────────────── caps ───────────────────┘
 */
#define _PRSTEN_L1   KC_GRV,           KC_W,            KC_C,          KC_D,          KC_F
#define _PRSTEN_L2   LALT_T(KC_P),     LCTL_T(KC_R),    LSFT_T(KC_S),  LGUI_T(KC_T),  KC_G
#define _PRSTEN_L3   KC_X,             KC_H,            KC_V,          KC_B,          KC_SLSH
#define _PRSTEN_LT   LT(_FN, KC_TAB), LT(_NUM, KC_SPC)

#define _PRSTEN_R1   KC_Q,             KC_L,            KC_U,          KC_Y,          KC_QUOT
#define _PRSTEN_R2   KC_M,             RGUI_T(KC_N),    RSFT_T(KC_A),  RCTL_T(KC_I),  RALT_T(KC_O)
#define _PRSTEN_R3   ZK_SEMI,          KC_J,            KC_K,          KC_Z,          ZK_COLON
#define _PRSTEN_RT   LT(_SYM, KC_E),   LT(_NAV, KC_ENT)

/*
 * STENAI Features:
 *
 * - Keymap optimized for combination of english and latin languages
 * - E thumb from Maltron or RSTHD: most used alpha, easier finger
 * - Home row mods
 * - Most common letters (english + latin languages) in home row or thumb
 *   Exception: L in spanish (but using index finger)
 *   RST from Colemak, or RSTHD (just one to the left)
 *   MNAIO from RSTHD
 * - JK (Vim use) in same QWERTY position, just one row lower
 * - XCVB in same relative positions, just one to the left
 * - T/N homing keys leverage Colemak/Dvorak keycap sets
 * - Common combos with one hand: cmd(T) + WDRSXCV, cmd(N) + OZ
 */

/*
 * STENAI Layer
 * Apple: meta: 󰘳
 *        alt:  󰘵
 *        ctrl: 󰘴
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║  ` ~  ║   W   ║   D   ║   P   ║   F   ║         ║   Q   ║   L   ║   U   ║   Y   ║  ' "  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   H   ║   R   ║   S   ║   T   ║   G   ║         ║   M   ║   N   ║   A   ║   I   ║   O   ║
 *   ║  alt  ║ ctrl  ║ shft  ║ meta  ║       ║         ║       ║  meta ║  shft ║ ctrl  ║  alt  ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   X   ║   C   ║   V   ║   B   ║  / ?  ║         ║  , <  ║   J   ║   K   ║   Z   ║  . >  ║
 *   ║       ║       ║       ║       ║       ║         ║  ; td ║       ║       ║       ║  : td ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║       ║       ║         ║       ║       ║
 *                           ║  TAB  ║  SPC  ║         ║   E   ║ INTRO ║
 *                           ║   fn  ║  num  ║         ║  sym  ║  nav  ║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 *
 */
#define _STENAI_L1   KC_GRV,           KC_W,            KC_D,          KC_P,          KC_F
#define _STENAI_L2   LALT_T(KC_H),     LCTL_T(KC_R),    LSFT_T(KC_S),  LGUI_T(KC_T),  KC_G
#define _STENAI_L3   KC_X,             KC_C,            KC_V,          KC_B,          KC_SLSH
#define _STENAI_LT   LT(_FN, KC_TAB), LT(_NUM, KC_SPC)

#define _STENAI_R1   KC_Q,             KC_L,            KC_U,          KC_Y,          KC_QUOT
#define _STENAI_R2   KC_M,             RGUI_T(KC_N),    RSFT_T(KC_A),  RCTL_T(KC_I),  RALT_T(KC_O)
#define _STENAI_R3   ZK_SEMI,          KC_J,            KC_K,          KC_Z,          ZK_COLON
#define _STENAI_RT   LT(_SYM, KC_E),   LT(_NAV, KC_ENT)

/*
 * QWERTY Layer
 * Apple: meta: 󰘳
 *        alt:  󰘵
 *        ctrl: 󰘴
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   Q   ║   W   ║   E   ║   R   ║   T   ║         ║   Y   ║   U   ║   I   ║   O   ║   P   ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   A   ║   S   ║   D   ║   F   ║   G   ║         ║   H   ║   J   ║   K   ║   L   ║  ' "  ║
 *   ║  alt  ║ ctrl  ║ shft  ║ meta  ║       ║         ║       ║  meta ║  shft ║ ctrl  ║  alt  ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   Z   ║   X   ║   C   ║   V   ║   B   ║         ║   N   ║   M   ║  , <  ║  . >  ║  ` ~  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║  ; td ║  : td ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║       ║       ║         ║       ║       ║
 *                           ║  TAB  ║  SPC  ║         ║  SPC  ║ INTRO ║
 *                           ║   fn  ║  num  ║         ║  sym  ║  nav  ║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 *
 */

#define _QWERTY_L1   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _QWERTY_L2   LALT_T(KC_A),     LCTL_T(KC_S),    LSFT_T(KC_D),  LGUI_T(KC_F),  KC_G
#define _QWERTY_L3   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B
#define _QWERTY_LT   LT(_FN, KC_TAB), LT(_NUM, KC_SPC)

#define _QWERTY_R1   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _QWERTY_R2   KC_H,    RGUI_T(KC_J),    RSFT_T(KC_K),  RCTL_T(KC_L), RALT_T(KC_QUOT)
#define _QWERTY_R3   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_GRV
#define _QWERTY_RT   LT(_SYM, KC_SPC), LT(_NAV, KC_ENT)

/*
 * FUNCTION KEYS Layer
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║  F7   ║   F8  ║   F9  ║  F10  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║  F1   ║   F2  ║   F3  ║  F11  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║  F4   ║   F5  ║   F6  ║  F12  ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║▒▒▒▒▒▒▒║       ║         ║       ║       ║
 *                           ║▒▒FNC▒▒║       ║         ║       ║  BACK ║
 *                           ║▒▒▒▒▒▒▒║       ║         ║       ║       ║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 */
#define ____FN_L1    _BLANK_ROW
#define ____FN_L2    _BLANK_ROW
#define ____FN_L3    _BLANK_ROW
#define ____FN_LT    _BLANK_THUMB

#define ____FN_R1    _______,  KC_F7,  KC_F8,  KC_F9,  KC_F10
#define ____FN_R2    _______,  KC_F1,  KC_F2,  KC_F3,  KC_F11
#define ____FN_R3    _______,  KC_F4,  KC_F5,  KC_F6,  KC_F12
#define ____FN_RT    _______,  KC_BSPC

/*
 * NUM Layer
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║   -   ║   +   ║   =   ║       ║         ║       ║   7   ║   8   ║   9   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬══ - ══╬══ + ══╬══ = ══╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║   1   ║   2   ║   3   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬══ / ══╬══ * ══╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║   /   ║   *   ║       ║       ║         ║       ║   4   ║   5   ║   6   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║       ║▒▒▒▒▒▒▒║         ║       ║       ║
 *                           ║       ║▒▒NUM▒▒║         ║   0   ║  DEL  ║
 *                           ║       ║▒▒▒▒▒▒▒║         ║       ║       ║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 *
 */
#define ____NUM_L1   _______, KC_MINS, KC_PLUS, KC_EQL,  _______
#define ____NUM_L2   _BLANK_ROW
#define ____NUM_L3   _______, KC_SLSH, KC_ASTR, _______, _______
#define ____NUM_LT   _BLANK_THUMB

#define ____NUM_R1   _______, KC_7,    KC_8,    KC_9,    _______
#define ____NUM_R2   _______, KC_1,    KC_2,    KC_3,    _______
#define ____NUM_R3   _______, KC_4,    KC_5,    KC_6,    _______
#define ____NUM_RT   KC_0,    KC_DEL

/*
 * SYMBOLS Layer
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║   ^   ║   #   ║   $   ║   €   ║         ║       ║   |   ║   &   ║   %   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬══ ( ══╬══ [ ══╬══ { ══╬═══════╣         ╠═══════╬══ - ══╬══ + ══╬══ = ══╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║   `   ║   "   ║   :   ║   ;   ║   °   ║         ║   ·   ║   _   ║   ,   ║   .   ║   '   ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬══ / ══╬══ * ══╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║   @   ║   !   ║   ?   ║   ¿   ║         ║       ║   \   ║   <   ║   >   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║       ║       ║         ║▒▒▒▒▒▒▒║       ║
 *                           ║       ║  ESC  ║         ║▒▒SYM▒▒║       ║
 *                           ║       ║       ║         ║▒▒▒▒▒▒▒║       ║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 */
#define ____SYM_L1   _______, KC_CIRC, KC_HASH, KC_DLR, A(S(KC_2))
#define ____SYM_L2   KC_GRV,  KC_DQUO, KC_COLN, KC_SCLN, A(S(KC_8))
#define ____SYM_L3   _______, KC_AT,   KC_EXLM, KC_QUES, A(KC_QUES)
#define ____SYM_LT   _______, KC_ESC

#define ____SYM_R1   _______, KC_PIPE, KC_AMPR, KC_PERC, _______
#define ____SYM_R2   A(S(KC_9)), KC_UNDS, KC_COMM, KC_DOT, KC_QUOT
#define ____SYM_R3   _______, KC_BSLS, KC_LT,   KC_GT,  _______
#define ____SYM_RT   _BLANK_THUMB

/*
 * NAVIGATION Layer
 *
 * Media is a tap dance ala iTunes:
 * - 1 play/resume
 * - 2 fwd
 * - 3 back
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦═══════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║  WHDN ║  HOME ║   UP  ║  PGUP ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║  WHUP ║  LF   ║   DN  ║  RG   ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║  END  ║ MEDIA ║  PGDN ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║       ║       ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬═══════╩═══════╩═══════╝
 *                           ║       ║       ║         ║       ║▒▒▒▒▒▒▒║
 *                           ║       ║       ║         ║       ║▒▒NAV▒▒║
 *                           ║       ║       ║         ║       ║▒▒▒▒▒▒▒║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 */
#define ____NAV_L1   _BLANK_ROW
#define ____NAV_L2   _BLANK_ROW
#define ____NAV_L3   _BLANK_ROW
#define ____NAV_LT   _BLANK_THUMB

#define ____NAV_R1   KC_WH_D, KC_HOME, KC_UP,   KC_PGUP, _______
#define ____NAV_R2   KC_WH_U, KC_LEFT, KC_DOWN, KC_RGHT, _______
#define ____NAV_R3   _______, KC_END,  ZK_MEDIA, KC_PGDN, _______
#define ____NAV_RT   _BLANK_THUMB


/*
 * SETUP Layer
 *
 *   ╔═══════╦═══════╦═══════╦═══════╦═══════╗         ╔═══════╦═══════╦════════╦═══════╦═══════╗
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║ STENAI ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬════════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║ PRSTEN ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ╠═══════╬═══════╬═══════╬═══════╬═══════╣         ╠═══════╬═══════╬════════╬═══════╬═══════╣
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ║       ║       ║       ║       ║ BOOT  ║         ║ MAKE  ║       ║ QWERTY ║       ║       ║
 *   ║       ║       ║       ║       ║       ║         ║       ║       ║        ║       ║       ║
 *   ╚═══════╩═══════╩═══════╬═══════╬═══════╣         ╠═══════╬═══════╬════════╩═══════╩═══════╝
 *                           ║▒▒▒▒▒▒▒║       ║         ║       ║▒▒▒▒▒▒▒║
 *                           ║▒▒▒▒▒▒▒║       ║         ║       ║▒▒▒▒▒▒▒║
 *                           ║▒▒▒▒▒▒▒║       ║         ║       ║▒▒▒▒▒▒▒║
 *                           ╚═══════╩═══════╝         ╚═══════╩═══════╝
 */
#define ____SETUP_L1    _BLANK_ROW
#define ____SETUP_L2    _BLANK_ROW
#define ____SETUP_L3    _______, _______, _______, _______, QK_BOOT
#define ____SETUP_LT    _BLANK_THUMB

#define ____SETUP_R1    _______, _______, STENAI, _______, _______
#define ____SETUP_R2    _______, _______, PRSTEN, _______, _______
#define ____SETUP_R3    QK_MAKE, _______, QWERTY, _______, _______
#define ____SETUP_RT    _BLANK_THUMB


// clang-format on
