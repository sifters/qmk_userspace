#pragma once
#include "quantum.h"

enum combo_events {
    Tab_BACKTICK,
//    JK_Colon,
//    AZ_Tab
    QW_Esc
};


const uint16_t PROGMEM combo_backtick[] = {KC_TAB, KC_Q, COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
// const uint16_t PROGMEM combo_colon[] = {LALT_T(KC_L), RSFT_T(KC_K), COMBO_END};
// const uint16_t PROGMEM combo_tab[] = {KC_A, KC_Z, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    [Tab_BACKTICK] = COMBO_ACTION(combo_backtick),
    [QW_Esc] = COMBO_ACTION(combo_esc),
//    [JK_Colon] = COMBO_ACTION(combo_colon),
//    [AZ_Tab] = COMBO_ACTION(combo_tab),
};

