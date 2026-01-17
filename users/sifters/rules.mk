# Optimize Flags - Link Time Optimzation
# This enables Link Time Optimization, saving a significant amount of space. 
# Because the Macro and Function features are incompatible with 
# Link Time Optimization, disable those features in config.h
# https://github.com/qmk/qmk_firmware/issues/3224#issuecomment-399769416 
# EXTRAFLAGS  += -flto

CAPS_WORD_ENABLE =  yes
COMBO_ENABLE    =   yes     # Enable Combos
EXTRAKEY_ENABLE =   yes
MOUSEKEY_ENABLE =   yes     # Mouse keys
LTO_ENABLE      =   yes     # Link Time Optimization
OS_DETECTION_ENABLE =   yes # Detect OS type from USB Plug events
DEFERRED_EXEC_ENABLE =  yes # Timers / function callbacks for delayed programs (used for OS detection)
KEY_OVERRIDE_ENABLE =   yes  # Override Mod+Key behavior.  i.e. CTRL+1 = ESC

SRC += features/sftr_macros.c \
       features/casemodes.c 

INTROSPECTION_KEYMAP_C = features/sftr_combos.c
