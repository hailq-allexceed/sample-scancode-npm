/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <vector>
#include <algorithm>

std::vector<int> sortVector(std::vector<int> input) {
    std::sort(input.begin(), input.end());
    return input;
}

int sumVector(const std::vector<int>& v) {
    int total = 0;
    for (int x : v) total += x;
    return total;
}
