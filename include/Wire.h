// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#pragma once

#include "api/Common.h"

int analogRead(pin_size_t);
void analogWrite(pin_size_t, int);
PinStatus digitalRead(pin_size_t);
void digitalWrite(pin_size_t, PinStatus);
void pinMode(pin_size_t, PinMode);

static const pin_size_t A0 = 0;
static const pin_size_t A1 = 1;
static const pin_size_t A2 = 2;
static const pin_size_t A3 = 3;
static const pin_size_t A4 = 4;
static const pin_size_t A5 = 5;
static const pin_size_t A6 = 6;
static const pin_size_t A7 = 7;
static const pin_size_t A8 = 8;
static const pin_size_t A9 = 9;
static const pin_size_t A10 = 10;
static const pin_size_t A11 = 11;

static const pin_size_t D0 = 0;
static const pin_size_t D1 = 1;
static const pin_size_t D2 = 2;
static const pin_size_t D3 = 3;
static const pin_size_t D4 = 4;
static const pin_size_t D5 = 5;
static const pin_size_t D6 = 6;
static const pin_size_t D7 = 7;
static const pin_size_t D8 = 8;
static const pin_size_t D9 = 9;
static const pin_size_t D10 = 10;
static const pin_size_t D11 = 11;