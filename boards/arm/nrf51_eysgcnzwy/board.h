/*
 * Copyright (c) 2018 Owen Kirby <oskirby@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Push button switch 0 KEY1 */
#define SW0_GPIO_PIN     17
#define SW0_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW0_GPIO_PIN_PUD GPIO_PUD_PULL_UP

#endif /* __INC_BOARD_H */
