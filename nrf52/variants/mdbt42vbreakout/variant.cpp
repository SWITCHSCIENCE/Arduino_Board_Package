/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

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

const uint32_t g_ADigitalPinMap[] = {
  // D0 - D7
  0,  // xtal 1
  1,  // xtal 2
  2,  // a0
  3,  // a1
  4,  // a2
  5,  // a3 N/A
  6,  // TXD
  7,  // N/A

  // D8 - D13
  8,  // RXD

  9,  // NFC1
  10, // NFC2

  11, // LED1

  12, // SCK
  13, // N/A
  14, // MISO

  15, // MOSI
  16, // GPIO #16

  // function set pins
  17, // N/A
  18, // N/A
  19, // N/A
  20, // DFU
  21, // Reset
  22, // N/A
  23, // N/A
  24, // N/A

  25, // SDA
  26, // N/A
  27, // N/A
  28, // SCL/A4
  29, // A5
  30, // A6
  31, // N/A
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

