#include "sftr_macros.h"
#include "casemodes.h"
#include "../sendstrings.h"

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

uint16_t copy_paste_timer = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_case_modes(keycode, record)) {
        return false;
    }
    switch (keycode) {
    case KC_STR1:
        if (record->event.pressed) {
            // when keycode KC_STR1 is pressed
            SEND_STRING_DELAY(STR_STR1,10);
        }
        break;
    case KC_STR2:
        if (record->event.pressed) {
            // when keycode KC_STR1 is pressed
            SEND_STRING_DELAY(STR_STR2,10);
        }
        break;
    case KC_STR3:
        if (record->event.pressed) {
            // when keycode KC_STR1 is pressed
            SEND_STRING_DELAY(STR_STR3,10);
        }
        break;
    case KC_UPDR:
        if (record->event.pressed) {
            SEND_STRING("../");
        } else {
        }
        break;
    case KC_USRD:
        if (record->event.pressed) {
            SEND_STRING("~/");
        } else {
        }
        break;
    case KC_SNEK:
        if (record->event.pressed) {
            enable_xcase_with(KC_UNDS);
        }
        break;
    case KC_KBAB:
        if (record->event.pressed) {
            enable_xcase_with(KC_MINS);
        }
        break;
    case KC_SSNEK:
        if (record->event.pressed) {
            enable_xcase_with(KC_UNDS);
            caps_word_on();
        }
        break;
    case KC_SKBAB:
        if (record->event.pressed) {
            enable_xcase_with(KC_MINS);
            caps_word_on();
        }
        break;
    case KC_PASTA: // One key copy/paste
        if (record->event.pressed) {
            copy_paste_timer = timer_read();
        } else {
            if (timer_elapsed(copy_paste_timer) > TAPPING_TERM-100) {  // Hold, copy
                tap_code16(LCTL(KC_INS));
            } else { // Tap, paste
                tap_code16(LSFT(KC_INS));
            }
        }
        break;
     case KC_MACCH: // One key copy/paste for MacOS
        if (record->event.pressed) {
            copy_paste_timer = timer_read();
        } else {
            if (timer_elapsed(copy_paste_timer) > TAPPING_TERM-100) {  // Hold, copy
                tap_code16(LGUI(KC_C));
            } else { // Tap, paste
                tap_code16(LGUI(KC_V));
            }
        }
        break;
    default:
        return true;
    }
    return process_record_keymap(keycode, record);
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // Process case modes
// 
//     // Regular user keycode case statement
//     switch (keycode) {
//         default:
//             return true;
//     }
// };

