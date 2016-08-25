/*
 * Copyright (c) 2016, CESAR.
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms
 * of the BSD license. See the LICENSE file for details.
 *
 */
#include <Arduino.h>
#include <stdint.h>
#include "nrf24l01_io.h"
#include "spi.h"

#define CE	1

void delay_us(float us)
{
	delayMicroseconds(us);
}

void delay_ms(float ms)
{
	delay(ms);
}

void enable(void)
{
	PORTB |= (1 << CE);
}

void disable(void)
{
	PORTB &= ~(1 << CE);
}

void io_setup(void)
{

}

void io_reset(void)
{

}