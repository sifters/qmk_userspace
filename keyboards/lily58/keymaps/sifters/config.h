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

//#define USE_MATRIX_I2C

/* -- Hand Configuration -- */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

/* -- Tap Settings -- */
/* -- Moved to Userspace -- */
// #define IGNORE_MOD_TAP_INTERRUPT
// #define IGNORE_MOD_TAP_INTERRUPT_PER_KEY
// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY

/* --  Keymap Functions  -- */
/* -- Moved to Userspace -- */
// #define GRAVE_ESC_GUI_OVERRIDE
// #define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
// #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
// #define COMBO_COUNT 4

/* --   Mouse Settings   -- */
/* -- Moved to Userspace -- */
// #define MOUSEKEY_INTERVAL 16
// #define MOUSEKEY_DELAY 0
// #define MOUSEKEY_TIME_TO_MAX 60
// #define MOUSEKEY_MAX_SPEED 7
// #define MOUSEKEY_WHEEL_DELAY 0

/* -- OLED Settings -- */
/* -- Moved to Userspace -- */
// #define OLED_BRIGHTNESS 30
// #define OLED_TIMEOUT 10000


/* -- Unicode Settings -- */
// #define UNICODE_SELECTED_MODES UC_LNX, UC_WINC

/* -- Debugger Settings -- */
// #define NO_DEBUG
// #define NO_PRINT

/* -- LED Lighting - Underglow -- */
/* Omitted until we enable RGB in rules.mk */
// #define RGBLIGHT_ANIMATIONS
// #undef RGBLED_NUM
// #define RGBLED_NUM 14    // Number of LEDs
// #define RGBLIGHT_SLEEP
// #define RGBLIGHT_LIMIT_VAL 120
// #define RGBLIGHT_HUE_STEP 10
// #define RGBLIGHT_SAT_STEP 17
