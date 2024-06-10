/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration_adv.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_BMPWIDTH  64

const unsigned char custom_start_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00111111,B11111100,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000011,B11111111,B11111111,B11000000,B00000000,B00000000,
  B00000000,B00000000,B00011111,B11111111,B11111111,B11110000,B00000000,B00000000,
  B00000000,B00000000,B01111111,B11111111,B11111111,B11111100,B00000000,B00000000,
  B00000000,B00000000,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,
  B00000000,B00000011,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,
  B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00001111,B00000111,B10000111,B11111111,B11111111,B11100000,B00000000,
  B00000000,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B00000000,
  B00000001,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B10000000,
  B00000011,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B10000000,
  B00000111,B00011111,B10001111,B11000111,B11111111,B11111111,B11100001,B11000000,
  B00000111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11100000,
  B00001111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11100000,
  B00001111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11110000,
  B00011111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11110000,
  B00011111,B00011111,B10001111,B11000111,B11111111,B11111111,B11100001,B11110000,
  B00111111,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B11111000,
  B00111111,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B11111000,
  B00111111,B00011111,B10001111,B11000111,B11111111,B11111111,B11110001,B11111000,
  B00111111,B00011111,B10001111,B11000111,B11111111,B11111111,B11100001,B11111000,
  B01111111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11111100,
  B01111111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11111100,
  B01111111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11111100,
  B01111111,B00011111,B10001111,B11000111,B11000000,B00000000,B00000001,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,
  B01111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111100,
  B01111111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11111100,
  B01111111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11111100,
  B01111111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11111100,
  B00111111,B00001111,B11111111,B11111111,B11000111,B11100011,B11110001,B11111000,
  B00111111,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B11111000,
  B00111111,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B11111000,
  B00111111,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B11111000,
  B00011111,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B11110000,
  B00011111,B00001111,B11111111,B11111111,B11000111,B11100011,B11110001,B11110000,
  B00011111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11100000,
  B00001111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11100000,
  B00001111,B00000000,B00000000,B00000111,B11000111,B11100011,B11110001,B11000000,
  B00000111,B00001111,B11111111,B11111111,B11000111,B11100011,B11110001,B11000000,
  B00000011,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B10000000,
  B00000011,B00011111,B11111111,B11111111,B11000111,B11100011,B11110001,B00000000,
  B00000001,B00011111,B11111111,B11111111,B11000111,B11100011,B11110000,B00000000,
  B00000000,B00011111,B11111111,B11111111,B11000111,B11100011,B11110000,B00000000,
  B00000000,B00001111,B11111111,B11111111,B11000011,B11000001,B11100000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000111,B11000000,B00000000,B00000000,B00000000,
  B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B11000000,B00000000,
  B00000000,B00000011,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,
  B00000000,B00000001,B11111111,B11111111,B11111111,B11111110,B00000000,B00000000,
  B00000000,B00000000,B01111111,B11111111,B11111111,B11111100,B00000000,B00000000,
  B00000000,B00000000,B00011111,B11111111,B11111111,B11110000,B00000000,B00000000,
  B00000000,B00000000,B00000111,B11111111,B11111111,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B01111111,B11111000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000
};

// Saves 234 bytes
#define COMPACT_CUSTOM_BOOTSCREEN
const unsigned char custom_start_bmp_rle[278] PROGMEM = {
  0x0F, 0x4D, 0x4F, 0x28, 0xBF, 0x20, 0xF0, 0x4F, 0x19, 0xF0, 0x9F, 0x15, 0xF0, 0xDF, 0x12, 0xF1,
  0x0F, 0x0E, 0xF1, 0x3F, 0x0C, 0xF1, 0x5F, 0x1B, 0x4F, 0x2B, 0x4F, 0x2B, 0x4F, 0x1A, 0x34, 0x33,
  0xF0, 0x6F, 0x08, 0x52, 0x52, 0xF0, 0x72, 0x0E, 0x02, 0x52, 0x52, 0xF0, 0x72, 0x1C, 0x12, 0x52,
  0x52, 0xF0, 0x72, 0x1B, 0x22, 0x52, 0x52, 0xF0, 0x63, 0x2A, 0x22, 0x52, 0x52, 0x4F, 0x05, 0x38,
  0x32, 0x52, 0x52, 0x4F, 0x05, 0x38, 0x32, 0x52, 0x52, 0x4F, 0x05, 0x46, 0x42, 0x52, 0x52, 0x4F,
  0x05, 0x46, 0x42, 0x52, 0x52, 0xF0, 0x63, 0x45, 0x52, 0x52, 0x52, 0xF0, 0x72, 0x54, 0x52, 0x52,
  0x52, 0xF0, 0x72, 0x54, 0x52, 0x52, 0x52, 0xF0, 0x72, 0x54, 0x52, 0x52, 0x52, 0xF0, 0x63, 0x53,
  0x62, 0x52, 0x52, 0x4F, 0x05, 0x62, 0x62, 0x52, 0x52, 0x4F, 0x05, 0x62, 0x62, 0x52, 0x52, 0x4F,
  0x05, 0x62, 0x62, 0x52, 0x52, 0x4F, 0x05, 0x62, 0xF2, 0xD2, 0xF2, 0xD2, 0xF2, 0xD2, 0xF2, 0xD2,
  0xF2, 0xD2, 0x6F, 0x05, 0x42, 0x52, 0x52, 0x62, 0x6F, 0x05, 0x42, 0x52, 0x52, 0x62, 0x6F, 0x05,
  0x42, 0x52, 0x52, 0x63, 0x53, 0xF0, 0x62, 0x52, 0x52, 0x54, 0x52, 0xF0, 0x72, 0x52, 0x52, 0x54,
  0x52, 0xF0, 0x72, 0x52, 0x52, 0x54, 0x52, 0xF0, 0x72, 0x52, 0x52, 0x55, 0x42, 0xF0, 0x72, 0x52,
  0x52, 0x46, 0x43, 0xF0, 0x62, 0x52, 0x52, 0x46, 0x4F, 0x05, 0x42, 0x52, 0x52, 0x38, 0x3F, 0x05,
  0x42, 0x52, 0x52, 0x38, 0x3F, 0x05, 0x42, 0x52, 0x52, 0x2A, 0x23, 0xF0, 0x62, 0x52, 0x52, 0x2B,
  0x12, 0xF0, 0x72, 0x52, 0x52, 0x1C, 0x12, 0xF0, 0x72, 0x52, 0x52, 0x0E, 0x02, 0xF0, 0x72, 0x52,
  0x5F, 0x07, 0xF0, 0x72, 0x52, 0x5F, 0x08, 0xF0, 0x63, 0x34, 0x3F, 0x1A, 0x4F, 0x2B, 0x4F, 0x2B,
  0x4F, 0x1B, 0xF1, 0x5F, 0x0C, 0xF1, 0x3F, 0x0E, 0xF1, 0x0F, 0x12, 0xF0, 0xDF, 0x15, 0xF0, 0x9F,
  0x19, 0xF0, 0x4F, 0x20, 0xBF, 0x4B
};
