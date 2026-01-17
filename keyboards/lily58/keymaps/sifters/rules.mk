# Build Options
#   change to "no" to disable the options, or define them in the Makefile in
#   the appropriate keymap folder that will get included automatically
#

# ------------------------------------------- #
#  Personal Settings - Moved to Userspace 
# OLED items are kept per-keyboard in the event different drivers are used or they are omitted them altogether
#
# CAPS_WORD_ENABLE = yes    # Hold down both shifts to enable shifted alpha characters
# COMBO_ENABLE = yes        # Enable Combos
# EXTRAKEY_ENABLE = yes     # Enable system and audio codes
# MOUSEKEY_ENABLE = yes     # Mouse keys
#
# ------------------------------------------- #
LTO_ENABLE      =   yes     # Link Time Optimization
MAGIC_ENABLE    = no
GRAVE_ESC_ENABLE = no
SPACE_CADET_ENABLE = no
MUSIC_ENABLE = no

# -- Display Options -- #
# OLED_DRIVER =           ssd1306
OLED_ENABLE =           yes

# -- Misc Features -- #
# OS_DETECTION_ENABLE =   yes # MOVED TO USERSPACE Detect OS type from USB Plug events
# DEFERRED_EXEC_ENABLE =  yes # MOVED TO USERSPACE Timers / function callbacks for delayed programs (used for OS detection)
BOOTMAGIC_ENABLE =      no  # Virtual DIP switch configuration
NKRO_ENABLE =           no  # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
SWAP_HANDS_ENABLE =     no  # Enable one-hand typing

# -- Keycode Functions -- #
AUTO_SHIFT_ENABLE =     no  # Auto Shift character on key hold - this is enabled by default for crkbd
KEY_LOCK_ENABLE =       no  # Simulate a 'hold' until the key is pressed a second time 
# KEY_OVERRIDE_ENABLE =   yes  # MOVED TO USERSPACE Override Mod+Key behavior.  i.e. CTRL+1 = ESC
LEADER_ENABLE =         no  # Leader Key 
TAP_DANCE_ENABLE =      no  # Enable Tap Dance Featureset
UNICODE_ENABLE =        no  # Unicode Support

# -- Debugging Operations -- #
COMMAND_ENABLE =        no  # Commands for debug and configuration
CONSOLE_ENABLE =        no  # Console for debug

# -- Lighting Options -- #
BACKLIGHT_ENABLE =      no  # Enable keyboard backlight functionality
LED_MATRIX_ENABLE =     no  # Per-Key LED
RGBLIGHT_ENABLE =       no  # Enable WS2812 RGB underlight. 
SLEEP_LED_ENABLE =      no  # Breathing sleep LED during USB suspend. Legacy code that may be removed by QMK, do not set 

# -- Audio Options -- #
AUDIO_ENABLE =          no  # Audio output on port C6
MIDI_ENABLE =           no  # MIDI controls

# -- Connectivity -- #
BLUETOOTH_ENABLE =      no  # Enable Bluetooth with the Adafruit EZ-Key HID

# If you want to change the display of OLED, you need to change here
SRC +=  ./lib/logo_reader.c 
        # ./lib/rgb_state_reader.c 
        # ./lib/keylogger.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/layer_state_reader.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/timelogger.c \

