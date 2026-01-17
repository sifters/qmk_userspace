#include "sftr_macros.h"
// Replace KC_TEMPLATE and STR_TEMPLATE with appropriate values
__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KC_TEMPLATE:
        if (record->event.pressed) {
            // when keycode KC_TEMPLATE is pressed
            SEND_STRING(STR_TEMPLATE);
        } else {
            // when keycode KC_TEMPLATE is released
        }
        break;
    }
    return process_record_keymap(keycode, record);
};


