/* Copyright 2019 Spaceman
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
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xB195
#define DEVICE_VER      0x0001
#define MANUFACTURER    Spaceman
#define PRODUCT         Pancake
#define DESCRIPTION     Choc Ortho Keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* diodes */
#define DIODE_DIRECTION COL2ROW

/* audio stuff */
#define QMK_SPEAKER C6
#define AUDIO_VOICES
#define C6_AUDIO
#define MUSIC_MAP
#define STARTUP_SONG SONG(PLANCK_SOUND)
#define ENCODER_RESOLUTION 4
#define MIDI_BASIC
#define MIDI_ADVANCED

/* save space */
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_DEBUG
#define NO_PRINT
