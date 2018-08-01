/*
 * Copyright (c) 2018 Owen Kirby <oskirby@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Push button switch SW1 */
#define SW0_GPIO_PIN     8
#define SW0_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW0_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Push button switch SW2 */
#define SW1_GPIO_PIN     18
#define SW1_GPIO_NAME    CONFIG_GPIO_NRF5_P0_DEV_NAME
#define SW1_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Onboard RED LED P0_16 */
#define LED0_GPIO_PIN	16
#define LED0_GPIO_PORT	CONFIG_GPIO_NRF5_P0_DEV_NAME
/* Onboard GREEN LED P0_12 */
#define LED1_GPIO_PIN	12
#define LED1_GPIO_PORT	CONFIG_GPIO_NRF5_P0_DEV_NAME
/* Onboard BLUE LED P0_15 */
#define LED2_GPIO_PIN	15
#define LED2_GPIO_PORT	CONFIG_GPIO_NRF5_P0_DEV_NAME

#endif /* __INC_BOARD_H */
