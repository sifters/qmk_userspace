//
#include QMK_KEYBOARD_H
#include "sftr_layers.h"
#include "features/sftr_macros.h"
#include "sftr_keyrecords.h"
#include "sftr_tapping.c"
#include "sftr_wrappers.h"
#include "features/capsword_override.c"

#include "features/sftr_postinit.h"

#define BL_GAME     DF(_GAME)               // Default Layer: Game

#define KC_TH_L1     LT(_SYMBOL, KC_SPC)
#define KC_TH_L2     LT(_NUMPAD, KC_TAB)
#define KC_TH_L2A    LT(_NUMPAD, KC_MINS)
#define KC_TH_R1     LT(_NAV, KC_ENT)
#define KC_TH_R2     LT(_SYMBOL, KC_BSPC)

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_TH_R2, KC_DEL);
const key_override_t *key_overrides[] = {
    &delete_key_override
    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//Base Layer: QWERTY MacOS
  [_QWERTY_MACOS] = LAYOUT_crkbd_wrapper(
  ___________QWERTY_MACOS_L1___________,                   ___________QWERTY_MACOS_R1___________, \
  ___________QWERTY_MACOS_L2___________,                   ___________QWERTY_MACOS_R2___________, \
  ___________QWERTY_MACOS_L3___________,                   ___________QWERTY_MACOS_R3___________, \
                     KC_MACCH, KC_TH_L2, KC_TH_L1,   KC_TH_R1, KC_TH_R2, KC_DEL
  ),

//Base Layer: QWERTY
  [_QWERTY] = LAYOUT_crkbd_wrapper(
  ______________QWERTY_L1______________,                    ______________QWERTY_R1______________, \
  ______________QWERTY_L2______________,                    ______________QWERTY_R2______________, \
  ______________QWERTY_L3______________,                    ______________QWERTY_R3______________, \
                     KC_PASTA, KC_TH_L2, KC_TH_L1,   KC_TH_R1, KC_TH_R2, KC_DEL
  ),
 
//Base Layer: Colemak-modDH
  [_COLEMAKDH] = LAYOUT_crkbd_wrapper(
  ____________COLEMAKDH_L1_____________,                   ____________COLEMAKDH_R1_____________, \
  ____________COLEMAKDH_L2_____________,                   ____________COLEMAKDH_R2_____________, \
  ____________COLEMAKDH_L3_____________,                   ____________COLEMAKDH_R3_____________, \
                     KC_PASTA, KC_TH_L2, KC_TH_L1,   KC_TH_R1, KC_TH_R2, KC_DEL
  ),

//Base Layer: Colemak-modDH MacOS
  [_COLEMAKDH_MACOS] = LAYOUT_crkbd_wrapper(
  _________COLEMAKDH_MACOS_L1__________,                   _________COLEMAKDH_MACOS_R1__________, \
  _________COLEMAKDH_MACOS_L2__________,                   _________COLEMAKDH_MACOS_R2__________, \
  _________COLEMAKDH_MACOS_L3__________,                   _________COLEMAKDH_MACOS_R3__________, \
                     KC_MACCH, KC_TH_L2, KC_TH_L1,   KC_TH_R1, KC_TH_R2, KC_DEL
  ),

//Base Layer: Game
  [_GAME] = LAYOUT_crkbd_wrapper(
  _______________GAME_L1_______________,                   _______________GAME_R1_______________, \
  _______________GAME_L2_______________,                   _______________GAME_R2_______________, \
  _______________GAME_L3_______________,                   _______________GAME_R3_______________, \
                     KC_PASTA, KC_TH_L2, KC_SPC,   KC_ENT, KC_TH_R2, BL_QWER
  ),

//Navivation Layer.  Inverted-T Arrows on Right, Mouse on Left
  [_NAV] = LAYOUT_crkbd_wrapper(
  ___________NAVIGATION_L1_____________,                    ___________NAVIGATION_R1_____________, \
  ___________NAVIGATION_L2_____________,                    ___________NAVIGATION_R2_____________, \
  ___________NAVIGATION_L3_____________,                    ___________NAVIGATION_R3_____________, \
                     KC_TRNS, KC_TH_L2, KC_TH_L1,   KC_TH_R1, KC_TH_R2, KC_SINS
  ),                                   

//Customized symbol layer, modified from Pascal Getreuer [https://getreuer.info/posts/keyboards/symbol-layer/index.html]
  [_SYMBOL] = LAYOUT_crkbd_wrapper(
_____________SYMBOL_L1_______________,                      _____________SYMBOL_R1_______________, \
_____________SYMBOL_L2_______________,                      _____________SYMBOL_R2_______________, \
_____________SYMBOL_L3_______________,                      _____________SYMBOL_R3_______________, \
                     KC_TRNS, KC_TH_L2A, KC_UNDS,   KC_UNDS, KC_TH_R2, KC_DEL
  ),

// Function F- Keys
  [_FUNCTION] = LAYOUT_split_3x6_3(
      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      XXXXXXX, KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                     KC_TRNS, KC_TH_L2, KC_TH_L1,          KC_TH_R1, KC_TH_R2, KC_DEL
  ),

// Number Pad simulation
  [_NUMPAD] = LAYOUT_crkbd_wrapper(
  _____________NUMPAD_L1_______________,                    _____________NUMPAD_R1_______________, \
  _____________NUMPAD_L2_______________,                    _____________NUMPAD_R2_______________, \
  _____________NUMPAD_L3_______________,                    _____________NUMPAD_R3_______________, \
                     KC_TRNS, KC_TH_L2, KC_TH_L1,   KC_MINS, KC_0, KC_DOT
  ),

  [_ADJUST] = LAYOUT_crkbd_wrapper(
  _____________ADJUST_L1_______________,                    _____________ADJUST_R1_______________, \
  _____________ADJUST_L2_______________,                    _____________ADJUST_R2_______________, \
  _____________ADJUST_L3_______________,                    _____________ADJUST_R3_______________, \
                     KC_TRNS, KC_TH_L2, KC_TH_L1,   KC_TH_R1, _______, BL_GAME
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
// Set ADJUST layer
    state = update_tri_layer_state(state, _NAV, _SYMBOL, _ADJUST);
// Set FUNCTION layer
    state = update_tri_layer_state(state, _SYMBOL, _NUMPAD, _FUNCTION);
////  Set numlock on Numpad Layer
//    uint8_t dlayer = biton32(default_layer_state);
//    led_t led_state = host_keyboard_led_state();
//    switch (get_highest_layer(state)) {
//    case _NUMPAD:
//      // check if host keyboard led and led_state of existing keyboard is off:
//		if ( !(host_keyboard_leds() & (led_state.num_lock) )) {
//            switch (dlayer) {
//                // 'fall through' switch and ignore numlock keypress on MacOS layers'
//                case _QWERTY_MACOS:
//                case _COLEMAKDH_MACOS:
//                    break;
//                default:
//                  // numlock keypress to activate numlock
//      	        register_code(KC_NUM_LOCK);
//    		        unregister_code(KC_NUM_LOCK);
//                };
//  		    };
//        break;
////  Set default behavior to disable NUMLOCK if it is enabled on layer change
//    default: //  for any other layers, or the default layer
//		if ( (host_keyboard_leds() & (led_state.num_lock)  )) {
//            // disable numlock on any layer, if numlock is turned on
//  			register_code(KC_NUM_LOCK);
//    		    unregister_code(KC_NUM_LOCK);
//  		};
//        break;
//    }
  return state;
}


#ifdef OLED_ENABLE
    oled_rotation_t oled_init_user(oled_rotation_t rotation) {
      if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
      }
      return rotation;
    }


void oled_render_layer_state(void) {
    oled_write_P(PSTR("Base: "), false);
     switch (biton32(default_layer_state)) {
        case _QWERTY_MACOS:
            oled_write_ln_P(PSTR("MacOS"), false);
            break;
        case _QWERTY:
            oled_write_ln_P(PSTR("QWERTY"), false);
            break;
        case _COLEMAKDH:
            oled_write_ln_P(PSTR("Colemak-DH"), false);
            break;
        case _COLEMAKDH_MACOS:
            oled_write_ln_P(PSTR("Colemak MacOS"), false);
            break;
        case _GAME:
            oled_write_ln_P(PSTR("Game"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    oled_write_P(PSTR("Layer: "), false);
    switch(get_highest_layer(layer_state)) {
        case _SYMBOL:
            oled_write_P(PSTR("Symbol\n"), false);
            break;
       case _NAV:
            oled_write_P(PSTR("Navigation\n"), false);
            break;
       case _NUMPAD:
            oled_write_P(PSTR("Number Pad\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("Function\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adjust\n"), false);
            break;
        default:
            oled_write_P(PSTR("Default\n"), false);
        }
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ?       PSTR("NUM ")   : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ?      PSTR("CAP ")   : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ?    PSTR("SCR \n") : PSTR("    \n"), false);
    }

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        //oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE
