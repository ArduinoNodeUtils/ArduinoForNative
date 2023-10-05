// Copyright 2021 Jan Hermes. All rights reserved.
// SPDX-License-Identifier: BSD-3-Clause

#include "api/Common.h"

unsigned long millis() {
    using namespace std::chrono;

    auto epoch = high_resolution_clock::from_time_t(0);
    // ...
    auto now   = high_resolution_clock::now();

    return duration_cast<milliseconds>(now - epoch).count();
}
