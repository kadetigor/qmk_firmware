/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//Trackpad
#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 3
#define AUTO_MOUSE_TIME 650
#define AUTO_MOUSE_DEBOUNCE 25

// Tap on the pad acts as left click
#define CIRQUE_PINNACLE_TAP_ENABLE

// Circular scroll — drag finger around the edge to scroll, iPod-style
#define POINTING_DEVICE_GESTURES_SCROLL_ENABLE

#define TAPPING_TERM 200

/* Select hand configuration — trackpad is on the right, so master must be right */
// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
