// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include "Wire.h"

int analogRead(pin_size_t) {
    return 0;
}
void analogWrite(pin_size_t, int) {
}
PinStatus digitalRead(pin_size_t) {
    return LOW;
}
void digitalWrite(pin_size_t, PinStatus) {

}
void pinMode(pin_size_t, PinMode) {

}