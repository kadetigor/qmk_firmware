/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

// Left-hand home row mods 0 layer
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LALT_T(KC_F)

// Right-hand home row mods 0 layer
#define HOME_J LALT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

//Left hand home row 1 layer
#define HOME_ESC RGUI_T(KC_ESC)

//Right hand home row 1 layer
#define HOME_LAR LALT_T(KC_LEFT)
#define HOME_DAR RGUI_T(KC_DOWN)
#define HOME_UAR RCTL_T(KC_UP)
#define HOME_RAR RSFT_T(KC_RIGHT)

//Left hand home row 2 layer
#define HOME_BSLS LSFT_T(KC_BSLS)
#define HOME_LPRN LCTL_T(LSFT(KC_9))
#define HOME_MINS LGUI_T(KC_MINS)
#define HOME_RPRN LALT_T(LSFT(KC_0))

//Right hand home row 2 layer
#define HOME_LCBR LALT_T(RSFT(KC_LBRC))
#define HOME_SCLN2 RGUI_T(KC_SCLN)
#define HOME_RCBR RCTL_T(RSFT(KC_RBRC))
#define HOME_EXLM RSFT_T(KC_EXLM)

//Left hand home row 3 layer
#define HOME_F5 LCTL_T(KC_F5)
#define HOME_F6 LGUI_T(KC_F6)
#define HOME_F7 LALT_T(KC_F7)

//Right hand home row 3 layer
#define HOME_VOLD LALT_T(KC_VOLD)
#define HOME_MUTE RGUI_T(KC_MUTE)
#define HOME_VOLU RCTL_T(KC_VOLU)

// enum {
//     TD_LPAREN_CTRL,   // our tap-dance for ( / Ctrl
//     TD_RPAREN_ALT,
//     TD_LBRACE_ALT,    // our tap-dance for { / Alt
//     TD_RBRACE_CTRL,
//     // …you can add more here…
// };

// qk_tap_dance_action_t tap_dance_actions[] = {
//     [TD_LPAREN_CTRL] = ACTION_TAP_DANCE_FN_ADVANCED(
//         NULL,              // no “on_each_tap”
//         dance_paren_finished,
//         dance_paren_reset
//     ),
//     [TD_RPAREN_ALT] = ACTION_TAP_DANCE_FN_ADVANCED(
//         NULL,              // no “on_each_tap”
//         dance_paren_finished,
//         dance_paren_reset
//     ),
//     [TD_LBRACE_ALT]  = ACTION_TAP_DANCE_FN_ADVANCED(
//         NULL,
//         dance_brace_finished,
//         dance_brace_reset
//     ),
//     [TD_RBRACE_CTRL]  = ACTION_TAP_DANCE_FN_ADVANCED(
//         NULL,
//         dance_brace_finished,
//         dance_brace_reset
//     ),
// };

// // Called once the tapping is “finished” (after tapping term)
// void dance_lparen_finished(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         // tapped once
//         tap_code(KC_LPRN);        // send “(”
//     } else {
//         // held (or tapped multiple times—we treat any >1 as a hold)
//         register_mods(MOD_MASK_CTRL);  // hold Ctrl
//     }
// }

// // Called when QMK is cleaning up the dance (when key is released)
// void dance_lparen_reset(qk_tap_dance_state_t *state, void *user_data) {
//     // If we registered Ctrl, unregister it now
//     unregister_mods(MOD_MASK_CTRL);
// }

// // Called once the tapping is “finished” (after tapping term)
// void dance_rparen_finished(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         // tapped once
//         tap_code(KC_RPRN);        // send “(”
//     } else {
//         // held (or tapped multiple times—we treat any >1 as a hold)
//         register_mods(MOD_MASK_CTRL);  // hold Ctrl
//     }
// }

// // Called when QMK is cleaning up the dance (when key is released)
// void dance_rparen_reset(qk_tap_dance_state_t *state, void *user_data) {
//     // If we registered Ctrl, unregister it now
//     unregister_mods(MOD_MASK_CTRL);
// }

// void dance_lbrace_finished(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         tap_code(KC_LCBR);           // send “{”
//     } else {
//         register_mods(MOD_MASK_ALT); // hold Alt
//     }
// }
// void dance_lbrace_reset(qk_tap_dance_state_t *state, void *user_data) {
//     unregister_mods(MOD_MASK_ALT);
// }

// void dance_rbrace_finished(qk_tap_dance_state_t *state, void *user_data) {
//     if (state->count == 1) {
//         tap_code(KC_LCBR);           // send “{”
//     } else {
//         register_mods(MOD_MASK_ALT); // hold Alt
//     }
// }
// void dance_rbrace_reset(qk_tap_dance_state_t *state, void *user_data) {
//     unregister_mods(MOD_MASK_ALT);
// }


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     XXXXXXX ,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX ,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,                         KC_H,  HOME_J,  HOME_K,  HOME_L,HOME_SCLN,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     XXXXXXX ,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_QUOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_BSPC,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_TAB
                                      //`--------------------------'  `--------------------------'

  ),

    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,HOME_ESC, KC_LALT, KC_LSFT, KC_LCTL, LGUI(KC_C),                   XXXXXXX,HOME_LAR,HOME_DAR,HOME_UAR,HOME_RAR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LGUI(KC_V),                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX,   MO(3), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, KC_LCBR,  KC_EQL, KC_RCBR,  KC_GRV,                      KC_CIRC, KC_LBRC, KC_UNDS, KC_RBRC, KC_QUES, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,HOME_BSLS,HOME_LPRN,HOME_MINS,HOME_RPRN,KC_PLUS,                 KC_PERC,HOME_LCBR,HOME_SCLN2,HOME_RCBR,HOME_EXLM,XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_HASH, KC_ASTR, KC_COLN, KC_SLSH, XXXXXXX,                      XXXXXXX, KC_PIPE, KC_TILD, KC_AMPR, KC_DLR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   MO(3), XXXXXXX,    XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,                      RGB_TOG, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAD,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT, HOME_F5, HOME_F6, HOME_F7,   KC_F8,                      RGB_MOD,HOME_VOLD,HOME_MUTE,HOME_VOLU,KC_RSFT,RGB_VAI,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, _______, XXXXXXX,    XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};
