#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(GRV,  1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, DEL, \
           TAB,  Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, INS, \
           CAPS, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,       HOME,\
           LSFT, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT,  SLSH,   RSFT,  UP,   END, \
           LCTL, LGUI, LALT,          SPC,           FN1, PGUP, PGDOWN ,LEFT, DOWN, RIGHT),

    /* 1: FN 1 */
    KEYMAP(ESC, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12,  TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS,\
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, VOLD, VOLU,  MUTE, TRNS, TRNS, TRNS,\
           TRNS, TRNS, TRNS            TRNS,                   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),

};
