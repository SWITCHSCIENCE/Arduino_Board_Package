/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)
  Copyright (c) 2021, Switch Science, Inc. (switch-science.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  19, // D0 RX
  30, // D1 TX/A6
  29, // D2 SDA/A5
  23, // D3 SCL
  28, // D4 A4
  9,  // D5 SDA1
  12, // D6 SCL1
  10, // D7
  14, // D8
  26, // D9
  17, // D10 SS
  16, // D11 n.c
  20, // D12 n.c
  21, // D13 n.c
  8,  // D14 MISO
  6,  // D15 SCK
  13, // D16 MOSI
  31, // D17 LED_BUILTIN/A7
  2,  // D18 A0
  3,  // D19 A1
  4,  // D20 A2
  5,  // D21 A3
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

