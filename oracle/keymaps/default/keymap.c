/* Copyright 2021 projectcain
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define ____ KC_TRNS

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [2] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
};
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
         KC_1, KC_2, KC_3, KC_4,        KC_F5,           KC_6, KC_7, KC_8, KC_9,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ESC,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, 
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,  KC_ENTER, KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE,   
    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_LCTL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  
         KC_LCTL,       MO(1), SFT_T(KC_BSPC), KC_SPACE, KC_SPACE, MO(2),      KC_LALT
  ),

  [1] = LAYOUT(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  
                   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS
  ),
  
  [2] = LAYOUT(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  
                   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS
  ),

  [3] = LAYOUT(
         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS, 
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   
    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  
                   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS
  ),

};



enum combos {
  KL_SLSH,
  JK_MINUS,
  LQUOTE_ENTER,
  QW_ESC,
  AS_TAB,
  FJ_LGUI
};

const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM lquote_combo[] = {KC_L, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM fj_combo[] = {KC_F, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [KL_SLSH] = COMBO(kl_combo, S(KC_SLSH)),
  [JK_MINUS] = COMBO(jk_combo, KC_MINUS),
  [LQUOTE_ENTER] = COMBO(lquote_combo, KC_ENTER),
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [AS_TAB] = COMBO(as_combo, KC_TAB),
  [FJ_LGUI] = COMBO(fj_combo, KC_LGUI)
};
