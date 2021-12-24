/* Copyright 2020 andimoto
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    K000, 		K001, K002, K003,  \
    K100, 		K101, K102, K103,  \
	K200,		K201, K202,        \
    K300, 		K301, K302, K303,  \
	K400,		      K402         \
) { \
	{ K000,  K001,  K002,  K003 }, \
    { K100,  K101,  K102,  K103 }, \
    { K200,  K201,  K202,  KC_NO}, \
    { K300,  K301,  K302,  K303 }, \
    { K400,  KC_NO, K402,  KC_NO}  \
}
