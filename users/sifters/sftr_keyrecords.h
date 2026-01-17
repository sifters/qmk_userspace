// *** Base Layer *** //
#define BL_QWER     DF(_QWERTY)             // Default Layer: QWERTY
#define BL_CLMK     DF(_COLEMAKDH)          // Default Layer: COLEMAK-Mod DH
#define BL_MACQ     DF(_QWERTY_MACOS)       // Default Layer: MacOS QWERTY
#define BL_MACC     DF(_COLEMAKDH_MACOS)    // Default Layer: MacOS COLEMAK-Mod DH

// *** Momentary Hold Layers *** //
#define MO_NUM      MO(_NUMPAD)             // Momentary Layer: Numpad

// *** Tap-Hold Modifiers *** //
#define MT_QUOT      RCTL_T(KC_QUOT)        // Send right ctrl on quote hold
#define MT_BSLS      RSFT_T(KC_BSLS)        // Send right shift on backslash hold
        

// *** QWERTY home row modifiers *** //
// Left side
#define MOD_A        LGUI_T(KC_A)           // Send left GUI on A hold
#define MOD_S        LALT_T(KC_S)           // Send left ALT on A hold
#define MOD_D        LSFT_T(KC_D)           // Send left Shift on A hold
#define MOD_F        LCTL_T(KC_F)           // Send left Ctrl on A hold
#define RAL_X        ALGR_T(KC_X)           // Send Alternate Graphic (AltGr) on X hold

// Right side
#define MOD_SCLN     RGUI_T(KC_SCLN)        // Send right GUI on A hold
#define MOD_L        LALT_T(KC_L)           // Send right ALT on A hold
#define MOD_K        RSFT_T(KC_K)           // Send right on A hold
#define MOD_J        RCTL_T(KC_J)           // Send right Ctrl on A hold
#define RAL_DT       ALGR_T(KC_DOT)         // Send Alternate Graphic (AltGr) on Period hold

// *** QWERTY MacOS home row modifiers *** //
// Left side
#define MAC_A        LCTL_T(KC_A)           // Send left Ctrl on A hold
#define MAC_S        LALT_T(KC_S)           // Send left ALT on A hold
#define MAC_D        LSFT_T(KC_D)           // Send left Shift on A hold
#define MAC_F        LGUI_T(KC_F)           // Send left GUI on A hold
#define RAL_X        ALGR_T(KC_X)           // Send Alternate Graphic (AltGr) on X hold

// Right side
#define MAC_SCLN     RCTL_T(KC_SCLN)        // Send right Ctrl on A hold
#define MAC_L        LALT_T(KC_L)           // Send right ALT on A hold
#define MAC_K        RSFT_T(KC_K)           // Send right on A hold
#define MAC_J        RGUI_T(KC_J)           // Send right GUI on A hold
#define RAL_DT       ALGR_T(KC_DOT)         // Send Alternate Graphic (AltGr) on Period hold

// *** Colemak home row modifiers *** //
// Left Side
#define CMOD_A        LGUI_T(KC_A)          // Send left GUI on A hold
#define CMOD_R        LALT_T(KC_R)          // Send left ALT on R hold
#define CMOD_S        LSFT_T(KC_S)          // Send left Shift on S hold
#define CMOD_T        LCTL_T(KC_T)          // Send left Ctrl on T hold

// Right Side
#define CMOD_O        RGUI_T(KC_O)          // Send right GUI on O hold
#define CMOD_I        RALT_T(KC_I)          // Send right ALT on I hold
#define CMOD_E        RSFT_T(KC_E)          // Send right Shift on E hold
#define CMOD_N        RCTL_T(KC_N)          // Send right Ctrl on N hold

// *** Colemak MacOS home row modifiers *** //
// Left Side
#define MACC_A        LCTL_T(KC_A)          // Send left Ctrl on A hold
#define MACC_R        LALT_T(KC_R)          // Send left ALT on R hold
#define MACC_S        LSFT_T(KC_S)          // Send left Shift on S hold
#define MACC_T        LGUI_T(KC_T)          // Send left GUI on T hold

// Right Side
#define MACC_O        RCTL_T(KC_O)          // Send right Ctrl on O hold
#define MACC_I        RALT_T(KC_I)          // Send right ALT on I hold
#define MACC_E        RSFT_T(KC_E)          // Send right Shift on E hold
#define MACC_N        RGUI_T(KC_N)          // Send right GUI on N hold

// *** Misc. Keys *** //

// Control/Shortcuts
#define MOD_ESC     LCTL_T(KC_ESC)
#define KC_TASK     LCTL(LSFT(KC_ESC))      // Windows Task Manager 
#define KC_CADL     LCTL(LALT(KC_DEL))      // Windows Winlogin Screen (Ctrl+Alt+Del)
#define KC_CAED     LCTL(LALT(KC_END))      // Open Winlogin (Ctrl+Alt+Del equivalent / Ctrl+Alt+End) screen from Windows RDP sessions
#define KC_DTTO     LCTL(KC_GRAVE)          // Open Ditto clipboard 
#define KC_ATAB     LALT(KC_TAB)            // Alt+Tab window switching 
#define KC_SINS     LSFT(KC_INS)            // Easy paste to terminal
#define U_CUT       LCTL(KC_X)              // Cut (Windows)
#define U_CPY       LCTL(KC_C)              // Copy (Windows)
#define U_PST       LCTL(KC_V)              // Paste (Windows)
#define U_CUTM      LGUI(KC_X)              // Cut (MacOS)
#define U_CPYM      LGUI(KC_C)              // Copy (MacOS)
#define U_PSTM      LGUI(KC_V)              // Paste (MacOS)
