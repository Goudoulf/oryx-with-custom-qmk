/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#define QUICK_TAP_TERM 0

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "jYyZJ/o0J7d"
#define LAYER_STATE_8BIT

#define RGB_MATRIX_STARTUP_SPD 60

/* QMK */
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT /* for rolling on mod-tap keys */

/* Miryoku */
#define BILATERAL_COMBINATIONS
#define BILATERAL_COMBINATIONS_LIMIT_CHORD_TO_N_KEYS 4 /* GUI, Alt, Ctrl, Shift */
#define BILATERAL_COMBINATIONS_DELAY_MODS_THAT_MATCH MOD_MASK_GUI
#define BILATERAL_COMBINATIONS_DELAY_MATCHED_MODS_BY 120  /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_CROSSOVER_AFTER 80   /* ms */
#define BILATERAL_COMBINATIONS_ALLOW_SAMESIDED_AFTER 3000 /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_TIMEOUT 160  /* ms */
#define BILATERAL_COMBINATIONS_TYPING_STREAK_MODMASK (~MOD_MASK_SHIFT)
