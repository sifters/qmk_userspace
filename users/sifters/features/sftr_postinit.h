#include "os_detection.h"

void keyboard_post_init_user(void) {
    uint32_t set_os_default_layer(uint32_t trigger_time, void* cb_arg) {
        switch (detected_host_os()) {
            case OS_UNSURE:
            case OS_MACOS:
            case OS_IOS:
                break;
            case OS_WINDOWS:
            case OS_LINUX:
                default_layer_set(1UL << _QWERTY);
                break;
            default:
                default_layer_set(1UL << _QWERTY);
                break;
        }
        return 0;
    }
    defer_exec(500,set_os_default_layer, NULL);
}

