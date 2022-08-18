/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#define PRODUCT_ID 0x0280
#define DEVICE_VER 0x0101

#ifdef RGB_MATRIX_ENABLE
/* Clete configs */
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS UINT8_MAX
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_TYPING_HEATMAP

#    define RGB_MATRIX_STARTUP_HUE 240
#    define RGB_MATRIX_STARTUP_SAT UINT8_MAX
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS

#    define RGB_MATRIX_STARTUP_SPD 8
/* End Clete configs */

/* RGB Matrix driver configuration */
#    define DRIVER_COUNT 2

#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100
#    define DRIVER_1_LED_TOTAL 47
#    define DRIVER_2_LED_TOTAL 40
#    define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

/* Clete: I want RGB to shutoff on USB mode */
#    define RGB_DISABLE_TIMEOUT (1000 * 600)
/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 8

#    ifdef VIA_ENABLE
#        define VIA_QMK_RGBLIGHT_ENABLE
#    endif

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #    define ENABLE_RGB_MATRIX_BREATHING
// #    define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
/* enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined */
/* Default is 25 */
#    define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 500
/* HSV -> 25 scale8 -> 35 http://fastled.io/docs/3.1/group___scaling.html */
/* V -> 48 / 100 * 255 -> rounded */
#    define RGB_MATRIX_TYPING_HEATMAP_BACKGROUND_HSV {HSV_WHITE}
#    define RGB_MATRIX_BACKGROUND_HSV {HSV_WHITE}
#    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    define ENABLE_RGB_MATRIX_CYCLE_ALL
// #    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// #    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// #    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// #    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// #    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// #    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// #    define ENABLE_RGB_MATRIX_DUAL_BEACON
// #    define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    define ENABLE_RGB_MATRIX_PIXEL_RAIN


/*  enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined*/
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    define ENABLE_RGB_MATRIX_SPLASH
// #    define ENABLE_RGB_MATRIX_SOLID_SPLASH

/* Set LED driver current */
#    define CKLED2001_CURRENT_TUNE \
        { 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38 }

#endif
