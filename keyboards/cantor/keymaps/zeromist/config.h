// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config.h"

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT    4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

/* Tapping Dancing and Tapping Term*/
#define TAPPING_TERM 185
#define TAPPING_TERM_PER_KEY

#define ONESHOT_TAP_TOGGLE 5 /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000 /* Time (in ms) before the one shot key is released */

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat
#define TAPPING_FORCE_HOLD

#define COMBO_COUNT 2
#define SPLIT_USB_DETECT
