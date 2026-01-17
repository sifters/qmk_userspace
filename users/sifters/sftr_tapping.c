uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOD_S:
            return TAPPING_TERM + 100;
        case MOD_A:
            return TAPPING_TERM + 100;
        case MOD_L:
            return TAPPING_TERM + 100;
        case MOD_SCLN:
            return TAPPING_TERM + 100;
        case MOD_ESC:
            return TAPPING_TERM - 100;
        case MOD_K:
            return TAPPING_TERM - 50;
        case MOD_D:
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}

