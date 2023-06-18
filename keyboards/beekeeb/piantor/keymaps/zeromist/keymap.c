// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Define layer names
#define _QWERTY 0
#define _COLEMAK 1
#define _SYM 2
#define _EXT 3
#define _FNC 4
#define _SYM2 5
#define _ACCNT 6


const uint16_t PROGMEM combo_accent[] = {OSL(_SYM), MT(MOD_LCTL, KC_ENT), COMBO_END};
const uint16_t PROGMEM combo_sym2[] = {OSL(_SYM), MT(MOD_LSFT, KC_SPC), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_accent, MO(_ACCNT)),
    COMBO(combo_sym2, MO(_SYM2)),
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                     ┌───┐
      *               │GUI├───┐           ┌─────┤Alt│
      *               └───┤Bsp├───┐   ┌───┤TO(1)├───┘
      *                   └───┤SPC│   │ENT├─────┘
      *                       └───┘   └───┘
      */
    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T,                                                      KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO,
        KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G,                                                      KC_H, KC_J, KC_K, KC_L, KC_QUOTE, KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_V,  KC_B,                                                     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLASH, KC_NO,
         KC_LCTL, LT(_EXT, KC_BSPC), MT(MOD_LSFT, KC_SPC),                                        MT(MOD_LCTL, KC_ENT), OSL(_SYM),  KC_RALT
    ),
    [_COLEMAK] = LAYOUT_split_3x6_3(
        KC_NO, KC_Q, KC_W, KC_F, KC_P, KC_B,                                                      KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_NO,
        KC_NO, KC_A, KC_R, KC_S, KC_T, KC_G,                                                      KC_M, KC_N, KC_E, KC_I, KC_O, KC_NO,
        KC_NO, KC_Z, KC_X, KC_C, KC_D, KC_V,                                                      KC_K, KC_H, KC_COMM, KC_DOT, KC_SLASH, KC_NO,
                   KC_LCTL, LT(_EXT, KC_BSPC), MT(MOD_LSFT, KC_SPC),                              MT(MOD_LCTL, KC_ENT), OSL(_SYM),  KC_RALT
    ),
    [_SYM] = LAYOUT_split_3x6_3(
        KC_NO, KC_1,    KC_2,  KC_3,      KC_4,     KC_5,                                         KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
        KC_NO, KC_EXLM, KC_AT, KC_HASH,   KC_DLR,   KC_PERC,                                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
        KC_NO, KC_EQL,  KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC,                                       KC_LCBR, KC_RCBR, KC_SCLN, KC_COLN, KC_BSLS, KC_NO,
                                KC_LSFT,  MO(_FNC), MO(_SYM2),                                    KC_TRNS, KC_TRNS, KC_NO
    ),
    [_EXT] = LAYOUT_split_3x6_3(
        KC_NO, KC_ESC, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,                                          KC_PGUP, KC_HOME, KC_END, KC_PSCR, KC_CAPS, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),         KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_DEL, KC_NO,
        KC_NO, C(KC_Z), C(KC_X), C(KC_C), KC_TAB, C(KC_V),                                        KC_PGDN, C(KC_BSPC), KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,
                                   KC_LCTL, KC_NO, KC_LALT,                                       KC_ENT, MO(_FNC), KC_NO
    ),
    [_FNC] = LAYOUT_split_3x6_3(
        KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                                 KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
        KC_NO, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_RALT),         KC_F11, KC_F12, KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO,                                                 KC_NO, KC_NO, KC_NO
    ),
    [_SYM2] = LAYOUT_split_3x6_3(
        KC_NO, KC_TILDE, KC_GRAVE, KC_NO, KC_NO, KC_NO,                                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                             KC_NO, KC_NO, KC_NO,                                                 KC_NO, KC_NO, KC_NO
    ),
    [_ACCNT] = LAYOUT_split_3x6_3(
        KC_NO, KC_NO, KC_NO, KC_E, KC_NO, KC_NO,                                                  KC_NO, KC_NO, KC_NO, KC_O, KC_NO, KC_NO,
        KC_NO, KC_A, KC_NO, KC_NO, KC_NO, KC_NO,                                                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, DF(_QWERTY), KC_NO, KC_NO, KC_NO, KC_NO,                                           KC_NO, KC_NO, KC_NO, KC_NO, KC_RALT, KC_NO,
                               DF(_COLEMAK), KC_NO, KC_NO,                                        KC_NO, KC_NO, KC_NO
    ),
};
