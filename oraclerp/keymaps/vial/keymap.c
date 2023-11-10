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
         KC_1, KC_2, KC_3, KC_4,             KC_F4,           KC_BSPC, KC_F5, KC_F6, KC_F7,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE,   
     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  
         KC_LCTL,           MO(1), KC_BSPC, KC_SPACE, KC_SPACE, MO(2),      KC_LALT
  ),

  [1] = LAYOUT(
           ____, ____, ____, ____,             ____,           ____, ____, ____, ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   
     ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,  
                 ____,            ____, ____, ____, ____, ____,            ____
  ),
  
  [2] = LAYOUT(
    ____, ____, ____, ____,             ____,           ____, ____, ____, ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   
     ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,  
                 ____,            ____, ____, ____, ____, ____,            ____
  ),

  [3] = LAYOUT(
    ____, ____, ____, ____,             ____,           ____, ____, ____, ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,
    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,   
     ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,  ____,  
                 ____,            ____, ____, ____, ____, ____,            ____
  ),

};