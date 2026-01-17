#include "sftr_combos.h"
void process_combo_event(uint16_t combo_index, bool pressed){
  switch(combo_index) {
    case Tab_BACKTICK:
      if (pressed) {
        tap_code16(KC_GRV);
        }
      break;
    case QW_Esc:
      if (pressed) {
        tap_code16(KC_ESC);
        }
      break;
//    case JK_Colon:
//      if (pressed) {
//        tap_code16(KC_COLN);
//        }
//      break;
//    case AZ_Tab:
//      if (pressed) {
//        tap_code16(KC_TAB);
//        }
//      break;
    }
  }

