// Enable debugging
// the rules.mk file local to the keyboard configurations must be adjusted to include
// CONSOLE_ENABLE = yes in order for debugging output to be viewable in the QMK CLI or 
// in the QMK Toolbox

#include "print.h"
void keyboard_post_init_user(void) {
    debug_enable=true;
    debug_keyboard=true;
    }

