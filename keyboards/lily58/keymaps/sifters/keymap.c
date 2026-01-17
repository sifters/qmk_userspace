//
#include QMK_KEYBOARD_H
#include "sftr_layers.h"
#include "features/sftr_macros.h"
#include "sftr_keyrecords.h"
#include "sftr_wrappers.h"
#include "sftr_tapping.c"
#include "features/capsword_override.c"

#include "features/sftr_postinit.h"

#define BL_GAME     DF(_GAME)               // Default Layer: GAME

#define TL_SYMB     LT(_SYMBOL, KC_BSPC)    // Layer toggle (Symbol) on Backspace hold
#define TL_SYMS     LT(_SYMBOL, KC_SPC)     // Layer toggle (Symbol) on Space hold
#define TL_SYMTB    LT(_SYMBOL, KC_TAB)     // Layer toggle (Symbol) on Tab hold
#define TL_NUMTB    LT(_NUMPAD, KC_TAB)     // Layer toggle (Symbol) on Tab hold
#define TL_NAV      LT(_NAV, KC_ENT)        // Layer toggle (Navigation) on Space hold

#define TL_MOUS     TG(_MOUSEY)             // Mouse keys on right hand

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, TL_SYMB, KC_DEL);
const key_override_t *key_overrides[] = {
    &delete_key_override
    };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
  ,-----------------------------------------.                    ,-----------------------------------------.
  | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
  |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
  |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | Tab  | /Space  /       \Space \  |Enter |BackSP|      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT_wrapper( \
  ______________QWERTY_L0______________,                   ______________QWERTY_R0______________, \
  ______________QWERTY_L1______________,                   ______________QWERTY_R1______________, \
  ______________QWERTY_L2______________,                   ______________QWERTY_R2______________, \
  ______________QWERTY_L3______________, KC_LBRC, KC_RBRC, ______________QWERTY_R3______________, \
            KC_LALT, KC_PASTA, TL_NUMTB, TL_SYMS,  TL_NAV, TL_SYMB, KC_DEL, XXXXXXX \
),
/* QWERTY MacOS
  ,-----------------------------------------.                    ,-----------------------------------------.
  | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
  |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
  |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | Tab  | /Space  /       \Space \  |Enter |BackSP|      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */

 [_QWERTY_MACOS] = LAYOUT_wrapper( \
  ___________QWERTY_MACOS_L0___________,                   ___________QWERTY_MACOS_R0___________, \
  ___________QWERTY_MACOS_L1___________,                   ___________QWERTY_MACOS_R1___________, \
  ___________QWERTY_MACOS_L2___________,                   ___________QWERTY_MACOS_R2___________, \
  ___________QWERTY_MACOS_L3___________, KC_LBRC, KC_RBRC, ___________QWERTY_MACOS_R3___________, \
            KC_LALT, KC_MACCH, TL_NUMTB, TL_SYMS,  TL_NAV, TL_SYMB, KC_DEL, XXXXXXX \
),

/* Game
  ,-----------------------------------------.                    ,-----------------------------------------.
  | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
  |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
  |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \   |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | Tab  | /Space  /       \Space \  |Enter |BackSP|      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */

 [_GAME] = LAYOUT_wrapper( \
_______________GAME_L0_______________,                   _______________GAME_R0_______________, \
_______________GAME_L1_______________,                   _______________GAME_R1_______________, \
_______________GAME_L2_______________,                   _______________GAME_R2_______________, \
_______________GAME_L3_______________, KC_LBRC, KC_RBRC, _______________GAME_R3_______________, \
              _______, KC_F1, _______, KC_SPC,  TL_NAV,  MO(_NAV),  _______, DF(_QWERTY) \
),

/* COLEMAK-DH
  ,-----------------------------------------.                    ,-----------------------------------------.
  | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  =   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |LCTRL |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
  |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
  |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |  \   |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |Enter |BackSP|      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
*/

 [_COLEMAKDH] = LAYOUT_wrapper( \
  ____________COLEMAKDH_L0_____________,                   ____________COLEMAKDH_R0_____________, \
  ____________COLEMAKDH_L1_____________,                   ____________COLEMAKDH_R1_____________, \
  ____________COLEMAKDH_L2_____________,                   ____________COLEMAKDH_R2_____________, \
  ____________COLEMAKDH_L3_____________, KC_LBRC, KC_RBRC, ____________COLEMAKDH_R3_____________, \
            KC_LALT, KC_PASTA, TL_NUMTB, TL_SYMS,  TL_NAV, TL_SYMB, KC_DEL, XXXXXXX \
),

/* COLEMAK-DH MacOS
  ,-----------------------------------------.                    ,-----------------------------------------.
  | GESC |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  =   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |LCTRL |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
  |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
  |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |  \   |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |Enter |BackSP|      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
*/

 [_COLEMAKDH_MACOS] = LAYOUT_wrapper( \
  _________COLEMAKDH_MACOS_L0__________,                   _________COLEMAKDH_MACOS_R0__________, \
  _________COLEMAKDH_MACOS_L1__________,                   _________COLEMAKDH_MACOS_R1__________, \
  _________COLEMAKDH_MACOS_L2__________,                   _________COLEMAKDH_MACOS_R2__________, \
  _________COLEMAKDH_MACOS_L3__________, KC_LBRC, KC_RBRC, _________COLEMAKDH_MACOS_R3__________, \
            KC_LALT, KC_MACCH, TL_NUMTB, TL_SYMS,  TL_NAV, TL_SYMB, KC_DEL, XXXXXXX \
),

/* SYMBOL
  ,-----------------------------------------.                    ,-----------------------------------------.
  |      |      |      |      |      |      |                    |      |      |      |      |      |      |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |  ~   |  <   |  >   |  $   |  %   |                    |  ^   |  &   |  (   |  )   |  %   |  _   |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |  !   |  -   |  +   |  =   |  #   |-------.    ,-------|  `   |  |   |  [   |  ]   |  ?   |      |
  |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
  |      |  ^   |  /   |  *   |  \   |      |-------|    |-------|      |      |  {   |  }   |  @   |      |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /   _   /       \Space \  |Enter |BackSP| SINS |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */
[_SYMBOL] = LAYOUT_wrapper( \
  _____________SYMBOL_L0_______________,                   _____________SYMBOL_R0_______________, \
  _____________SYMBOL_L1_______________,                   _____________SYMBOL_R1_______________, \
  _____________SYMBOL_L2_______________,                   _____________SYMBOL_R2_______________, \
  _____________SYMBOL_L3_______________, KC_MINS, XXXXXXX, _____________SYMBOL_R3_______________, \
              _______, _______, _______, KC_UNDS, KC_UNDS, _______, _______, KC_SINS
),

/* Navigation
  ,-----------------------------------------.                    ,-----------------------------------------.
  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |      | BTN2 | MS_U | BTN1 | WH_U |                    | PGUP | Home |  Up  | End  |      | PSCR |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |      | MS_L | MS_D | MS_R | WH_D |-------.    ,-------| PGDN | Left | Down | Right|      |      |
  |------+------+------+------+------+------|   <   |    |   >   |------+------+------+------+------+------|
  |      |      | WBAK | WSTP | WFWD |      |-------|    |-------|      |      |      |      |      |      |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |Enter |BackSP| Del  |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */

[_NAV] = LAYOUT_wrapper( \
  ___________NAVIGATION_L0_____________,                    ___________NAVIGATION_R0_____________, \
  ___________NAVIGATION_L1_____________,                    ___________NAVIGATION_R1_____________, \
  ___________NAVIGATION_L2_____________,                    ___________NAVIGATION_R2_____________, \
  ___________NAVIGATION_L3_____________,  KC_LT,   KC_GT,   ___________NAVIGATION_R3_____________, \
              _______, _______, _______, KC_UNDS,  _______, _______, _______, KC_SINS \
),
/* NUMPAD
  ,-----------------------------------------.                    ,-----------------------------------------.
  | ESC  |      |      |      |      |      |                    | TAB  |  =   |  /   |   *  |  -   | BSPC |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | TAB  |      | Home |  Up  | End  |      |                    | PGUP |  P7  |  P8  |  P9  |  +   | DEL  |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  | LCTRL|      | Left | Down | Right|      |-------.    ,-------| PGDN |  P4  |  P5  |  P6  |  ,   | KPENT|
  |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
  | LSFT |      |      |      |      |      |-------|    |-------|      |  P1  |  P2  |  P3  |  =   |      |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |  P0  |  .   |      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */
  [_NUMPAD] = LAYOUT_wrapper( \
  _____________NUMPAD_L0_______________,                   _____________NUMPAD_R0_______________, \
  _____________NUMPAD_L1_______________,                   _____________NUMPAD_R1_______________, \
  _____________NUMPAD_L2_______________,                   _____________NUMPAD_R2_______________, \
  _____________NUMPAD_L3_______________, XXXXXXX, XXXXXXX, _____________NUMPAD_R3_______________, \
              _______, _______, _______, _______, KC_MINS, KC_0,  KC_DOT, KC_DOT \
  ),

/* MOUSEY
  ,-----------------------------------------.                    ,-----------------------------------------.
  |      |      |      |      |      |      |                    |      |      |      |      |      |      |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |      |      |      |      |      |                    |      |      |      |      |      |      |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
  |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
  |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |      |      |      |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */
  [_MOUSEY] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, TL_MOUS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                             _______, _______, _______, _______, _______, KC_ENT,  _______, _______ \
  ),
/* ADJUST
  ,-----------------------------------------.                    ,-----------------------------------------.
  |QWERTY|      | CADL |      |      | NOPE |                    | MAIL | CALC |      |      |      |      |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |QWERTY| MOUS | CADL |      |      | NOPE |                    | MAIL | CALC |      | MSEL | MPLY | VOL+ |
  |------+------+------+------+------+------|                    |------+------+------+------+------+------|
  |COLEMK|      |      |      |      |      |-------.    ,-------| BRIU |      |      | MPRV | MNXT | VOL- |
  |------+------+------+------+------+------| Power |    | Sleep |------+------+------+------+------+------|
  | CAPS |      |      |      |      |      |-------|    |-------| BRID |      |      |      |      | MUTE |
  `-----------------------------------------/       /     \      \-----------------------------------------'
                    | LAlt | LGUI | TAB  | /Space  /       \Space \  |Enter |BackSP| GAME |
                    |      |      |      |/       /         \      \ |      |      |      |
                    `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT_wrapper( \
  BL_QWER, XXXXXXX, KC_CADL, XXXXXXX, XXXXXXX, KC_STR3,    KC_MAIL, KC_CALC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  \
  _____________ADJUST_L1_______________,                   _____________ADJUST_R1_______________, \
  _____________ADJUST_L2_______________,                   _____________ADJUST_R2_______________, \
  _____________ADJUST_L3_______________, KC_PWR,  KC_SLEP, _____________ADJUST_R3_______________, \
              _______, _______, _______, _______, _______, _______, _______, BL_GAME \
  )
};


layer_state_t layer_state_set_user(layer_state_t state) {
// Set ADJUST layer
    state = update_tri_layer_state(state, _NAV, _SYMBOL, _ADJUST);
////  Set numlock on Numpad Layer
//    uint8_t dlayer = biton32(default_layer_state);
//    led_t led_state = host_keyboard_led_state();
//    switch (get_highest_layer(state)) {
//    case _NUMPAD:
//        // check if host keyboard led and led_state of existing keyboard is off:
//		if ( !(host_keyboard_leds() & (led_state.num_lock) )) {
//            switch (dlayer) {
//                // 'fall through' switch and ignore numlock keypress on MacOS layers'
//                case _QWERTY_MACOS:
//                case _COLEMAKDH_MACOS:
//                    break;
//                default:
//                  // numlock keypress to activate numlock
//  			    register_code(KC_NUM_LOCK);
//    		        unregister_code(KC_NUM_LOCK);
//                };
//  		    };
//        break;
////  Set default behavior to disable NUMLOCK if it is enabled on layer change
//    default: //  for any other layers, or the default layer
//		if ( (host_keyboard_leds() & (led_state.num_lock)  )) {
//            // disable numlock on any layer, if numlock is turned on
//  		    register_code(KC_NUM_LOCK);
//    		    unregister_code(KC_NUM_LOCK);
//  		};
//        break;
//    }
  return state;
}



//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_left())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
// const char *read_layer_state(void);
const char *read_logo(void);


bool oled_task_user(void) {
  if (is_keyboard_left()) {
    // If you want to change the display of OLED, you need to change here
    // oled_write_ln(read_layer_state(), false);
     oled_write_P(PSTR("Base: "), false);
     switch (biton32(default_layer_state)) {
         case _QWERTY_MACOS:
             oled_write_P(PSTR("MacOS\n"), false);
             break;
         case _QWERTY:
             oled_write_P(PSTR("QWERTY\n"), false);
             break;
         case _COLEMAKDH:
             oled_write_P(PSTR("Colemak-DH\n"), false);
             break;
         case _COLEMAKDH_MACOS:
             oled_write_P(PSTR("Colemak MacOS\n"), false);
             break;
         case _GAME:
             oled_write_P(PSTR("Game\n"), false);
             break;
         default:
             oled_write_P(PSTR("Undefined "), false);
        } 
    oled_write_P(PSTR("Layer: "), false);
    switch(get_highest_layer(layer_state)) {
        case _NAV:
            oled_write_P(PSTR("Navigation\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symbol\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("Adjust\n"), false);
            break;
        case _NUMPAD:
            oled_write_P(PSTR("Number Pad\n"), false);
            break;
        case _MOUSEY:
            oled_write_P(PSTR("Mousey\n"), false);
            break;
        default:
            oled_write_P(PSTR("Default\n"), false);
    }       
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ?       PSTR("NUM ")   : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ?      PSTR("CAP ")   : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ?    PSTR("SCR \n") : PSTR("    \n"), false);
    oled_set_brightness(30);
    return false;
  } else {
    oled_write(read_logo(), false);
    oled_set_brightness(30);
    return false;
  }
}
#endif // OLED_ENABLE




// ----------------------------- //
//    Tap Hold Configurations    //
// ----------------------------- //

// Right Shift/Right Control Tap-Hold configuration
bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RCTL_T(KC_QUOT):
            return true;
        case RSFT_T(KC_BSLS):
            return true;
        default:
            return false;
    }
}
