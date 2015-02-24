/*
 * Keymap: Default Layer in QWERTY
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `~   |   1  |   2  |   3  |   4  |   5  |   6  |           |   7  |   8  |   9  |   0  |  -_  |  =+  |  BkSp  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L0  |           |   \  |   Y  |   U  |   I  |   O  |   P  |   [    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  L1  |           |  L2  |------+------+------+------+------+--------|
 * | LShft  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |   ]    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LCtrl| LGUI | Caps | Calc | LAlt |                                       |  Lft |  Dn  |  Up  | Rght | Enter|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | LCTL | LALT |       | RALT | RCTL |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |  Home|       | PgUp |      |      |
 *                                 | Space|  ESC |------|       |------| Enter| Space|
 *                                 |      |      |  End |       | PgDn |      |      |
 *                                 `--------------------'       `--------------------'
 *
 */



static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        GRAVE, 1,   2,   3,   4,   5,   6,
        TAB, Q,   W,   E,   R,   T,   FN1,
        LCTL, A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   FN2,
        LCTL,LGUI,CAPS,CALC,LALT,
                                      LCTL,LALT,
                                           HOME,
                                 SPC,ESC, END,
        // right hand
             7, 8,   9,   0,   MINUS,   PPLS,   BSPC,
             BSLS,Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN3, N,   M,   COMM,DOT, SLSH,RBRC,
                       LEFT,DOWN,UP,  RGHT,ENT,
        RALT,RCTL,
        PGUP,
        PGDN,ENT, SPC
    ),

    KEYMAP(  // layer 1 : function and symbol keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7, F8,  F9,  F10,  F11, MUTE,VOLU,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,
                  TRNS,TRNS,TRNS,TRNS,TRNS,MNXT,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,
                       TRNS,TRNS,TRNS,TRNS,MPLY,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 2: numpad
        // left hand
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,NLCK,PSLS,PAST,PMNS,TRNS,
             TRNS,TRNS,  P7,  P8,  P9,PMNS,TRNS,
                  TRNS,  P4,  P5,  P6,PPLS,TRNS,
             TRNS,TRNS,  P1,  P2,  P3,PPLS,TRNS,
                         P0,PDOT,PDOT,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /*
    KEYMAP(  // layer 3 : keyboard functions
        // left hand
        FN0, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             FN4, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    */

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0 - Teensy key
    ACTION_LAYER_SET(0, ON_PRESS),                  // FN1 - Change to layer 0
    ACTION_LAYER_SET(1, ON_PRESS),                  // FN2 - Change to layer 1
    ACTION_LAYER_SET(2, ON_PRESS),                  // FN3 - Change to layer 2
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

