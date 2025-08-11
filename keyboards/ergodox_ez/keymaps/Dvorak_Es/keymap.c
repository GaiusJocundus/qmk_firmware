#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_spanish.h"

enum layers {
    BASE,  // default layer
    FUNC,
    NUMPAD,
};

enum custom_keycodes {
    VRSN = SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |    º   |   1  |   2  |   3  |   4  |   5  | ACC  |           |  Ç   |   6  |   7  |   8  |   9  |   0  | CapsLk |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   .  |   ,  |   Ñ  |   P  |   Y  | HOME |           | PGUP |   F  |   G  |   C  |   R  |   L  |   /    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | ESC    |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -    |
 * |--------+------+------+------+------+------| END  |           | PGDN |------+------+------+------+------+--------|
 * | LShift |   <  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | ALGR |   +  |   ¿  | Left | Right|                                       |  Up  | Down |   '  |  GRV | ALGR |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | LGUI | LALT |       | RGUI | IEXP   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | FUNC |       | NUM  |        |      |
 *                                 | BSPC | DEL  |------|       |------| ENTER  |SPACE |
 *                                 |      |      | LCTL |       | RCTL |        |      |
 *                                 `--------------------'       `----------------------'
 */
[BASE] = LAYOUT_ergodox_pretty(
  // left hand
  ES_MORD,         ES_1,        ES_2,          ES_3,    ES_4,    ES_5,    ES_ACUT,              ES_CCED,      ES_6,    ES_7,    ES_8,    ES_9,    ES_0,    KC_CAPS,
  KC_TAB,          ES_DOT,      ES_COMM,       ES_NTIL, ES_P,    ES_Y,    KC_HOME,              KC_PGUP,      ES_F,    ES_G,    ES_C,    ES_R,    ES_L,    ES_SLSH,
  KC_ESC,          ES_A,        ES_O,          ES_E,    ES_U,    ES_I,                                        ES_D,    ES_H,    ES_T,    ES_N,    ES_S,    ES_MINS,
  KC_LSFT,         ES_LABK,     ES_Q,          ES_J,    ES_K,    ES_X,    KC_END,               KC_PGDN,      ES_B,    ES_M,    ES_W,    ES_V,    ES_Z,    KC_RSFT,
  KC_ALGR,         ES_PLUS,     ES_IQUE,       KC_LEFT, KC_RGHT,                                                       KC_UP,   KC_DOWN, ES_QUOT, ES_GRV,  KC_ALGR,
                                                                  KC_LGUI, KC_LALT,                KC_RGUI, ES_IEXL,
                                                                          TG(FUNC),                TG(NUMPAD),
                                                          KC_BSPC, KC_DEL, KC_LCTL,                KC_RCTL, KC_ENT, KC_SPC
),

/* Keymap 1: FUNCTION ACCESS
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |    º   |  F1  |  F2  |  F3  |  F4  |  F5  | F11  |           | F12  |  F6  |  F7  |  F8  |  F9  | F10  | CapsLk |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   .  |   ,  |   Ñ  |   P  |   Y  | HOME |           | PGUP |   F  |   G  |   C  |   R  |   L  |   /    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | ESC    |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -    |
 * |--------+------+------+------+------+------| END  |           | PGDN |------+------+------+------+------+--------|
 * | LShift |   <  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | ALGR |   +  |   ¿  | Left | Right|                                       |  Up  | Down |   '  |  GRV | ALGR |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | LGUI | LALT |       | RGUI | IEXP   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | FUNC |       | NUM  |        |      |
 *                                 | BSPC | DEL  |------|       |------| ENTER  |SPACE |
 *                                 |      |      | LCTL |       | RCTL |        |      |
 *                                 `--------------------'       `----------------------'
 */
[FUNC] = LAYOUT_ergodox_pretty(
  // left hand
  ES_MORD,         KC_F1,       KC_F2,         KC_F3,   KC_F4,   KC_F5,   KC_F11,               KC_F12,       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_CAPS,
  KC_TAB,          ES_DOT,      ES_COMM,       ES_NTIL, ES_P,    ES_Y,    KC_HOME,              KC_PGUP,      ES_F,    ES_G,    ES_C,    ES_R,    ES_L,    ES_SLSH,
  KC_ESC,          ES_A,        ES_O,          ES_E,    ES_U,    ES_I,                                        ES_D,    ES_H,    ES_T,    ES_N,    ES_S,    ES_MINS,
  KC_LSFT,         ES_LABK,     ES_Q,          ES_J,    ES_K,    ES_X,    KC_END,               KC_PGDN,      ES_B,    ES_M,    ES_W,    ES_V,    ES_Z,    KC_RSFT,
  KC_ALGR,         ES_PLUS,     ES_IQUE,       KC_LEFT, KC_RGHT,                                                       KC_UP,   KC_DOWN, ES_QUOT, ES_GRV,  KC_ALGR,
                                                                  KC_LGUI, KC_LALT,                KC_RGUI, ES_IEXL,
                                                                           KC_TRNS,                KC_TRNS, 
                                                          KC_BSPC, KC_DEL, KC_LCTL,                KC_RCTL, KC_ENT, KC_SPC
),

/* Keymap 2: Number Pad and Multimedia
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |    º   |   1  |   2  |   3  |   4  |   5  | PLAY |           | MUTE |   6  | NMLK |   /  |   *  |   -  | CapsLk |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   .  |   ,  |   Ñ  |   P  |   Y  | NEXT |           | VOLU |   F  |   7  |   8  |   9  |   +  |   /    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | ESC    |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   4  |   5  |   6  |   =  |   -    |
 * |--------+------+------+------+------+------| PREV |           | VOLD |------+------+------+------+------+--------|
 * | LShift |   <  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   1  |   2  |   3  |   .  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | ALGR |   +  |   ¿  | Left | Right|                                       |  Up  | Down |   0  |  GRV | ALGR |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | LGUI | LALT |       | RGUI | IEXP   |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | FUNC |       | NUM  |        |      |
 *                                 | BSPC | DEL  |------|       |------| ENTER  |SPACE |
 *                                 |      |      | LCTL |       | RCTL |        |      |
 *                                 `--------------------'       `----------------------'
 */
[NUMPAD] = LAYOUT_ergodox_pretty(
  // left hand
  ES_MORD,         ES_1,        ES_2,          ES_3,    ES_4,    ES_5,    KC_MPLY,              KC_MUTE,      ES_6,    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, KC_CAPS,
  KC_TAB,          ES_DOT,      ES_COMM,       ES_NTIL, ES_P,    ES_Y,    KC_MNXT,              KC_VOLU,      ES_F,    KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, ES_SLSH,
  KC_ESC,          ES_A,        ES_O,          ES_E,    ES_U,    ES_I,                                        ES_D,    KC_KP_4, KC_KP_5, KC_KP_6, KC_PEQL, ES_MINS,
  KC_LSFT,         ES_LABK,     ES_Q,          ES_J,    ES_K,    ES_X,    KC_MPRV,              KC_VOLD,      ES_B,    KC_KP_1, KC_KP_2, KC_KP_3, KC_PDOT, KC_RSFT,
  KC_ALGR,         ES_PLUS,     ES_IQUE,       KC_LEFT, KC_RGHT,                                                       KC_UP,   KC_DOWN, KC_KP_0, ES_GRV,  KC_ALGR,
                                                                  KC_LGUI, KC_LALT,                KC_RGUI, ES_IEXL,
                                                                           KC_TRNS,                KC_TRNS, 
                                                          KC_BSPC, KC_DEL, KC_LCTL,                KC_RCTL, KC_ENT, KC_SPC
),
};
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case VRSN:
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
                return false;
        }
    }
    return true;
}

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

bool led_update_user(led_t led_state) {
    if(led_state.caps_lock) {
	ergodox_right_led_2_on();
    } else {
	ergodox_right_led_2_off();
    }
    if(led_state.num_lock) {
	ergodox_right_led_3_on();
    } else {
	ergodox_right_led_3_off();
    }
    return true;
}

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        default:
            break;
    }

    return state;
};
