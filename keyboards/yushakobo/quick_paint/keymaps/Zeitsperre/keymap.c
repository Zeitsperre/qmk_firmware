#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            KC_P7, KC_P8, KC_P9, KC_P0, KC_KB_MUTE,
            KC_P4, KC_PSCR, KC_P6, KC_PEQL, KC_NO,
            KC_P1, KC_P2, KC_P3, KC_PENT, KC_NO
        )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN)}
};
#endif
