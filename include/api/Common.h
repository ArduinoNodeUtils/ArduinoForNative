// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#pragma once

#include <cstdint>
#include <chrono>

unsigned long millis();

enum PinStatus {
    LOW = 0,
    HIGH = 1
};
enum PinMode {
    INPUT = 0,
    INPUT_PULLUP = 1,
    INPUT_PULLDOWN = 2,
    OUTPUT = 3
};
using pin_size_t = uint8_t;


