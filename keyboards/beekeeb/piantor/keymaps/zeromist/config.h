// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define BOOTMAGIC_ROW    0
#define BOOTMAGIC_COLUMN 5

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 185
#define TAPPING_TERM_PER_KEY
#define TAPPING_TOGGLE 5
#define QUICK_TAP_TERM 120
#define QUICK_TAP_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.

#define ONESHOT_TAP_TOGGLE 5  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.

#define COMBO_COUNT 2
#define SPLIT_USB_DETECT

