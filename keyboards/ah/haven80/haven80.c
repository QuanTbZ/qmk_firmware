/* Copyright 2023 CMM.S Freather
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

#include "quantum.h"

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(6, 140.25, 255);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_CHRISTMAS);
}
#endif

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if (res) {
    if (led_state.caps_lock) {
        int mode = rgblight_get_mode();
        rgblight_sethsv_noeeprom(6, 140.25, 255);
        rgblight_mode_noeeprom(mode);
    } else {
        int mode2 = rgblight_get_mode();
        rgblight_sethsv_noeeprom(222, 13.26, 248.88);
        rgblight_mode_noeeprom(mode2);
    }
  }
    return res;
}
