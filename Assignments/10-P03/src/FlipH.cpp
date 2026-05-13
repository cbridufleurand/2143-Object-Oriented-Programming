##include "FlipH.h"

#include <utility>

void FlipH::apply(Grid& pixels) {

    for (size_t row = 0; row < pixels.size(); ++row) {

        size_t width = pixels[row].size();

        for (size_t col = 0; col < width / 2; ++col) {

            std::swap(
                pixels[row][col],
                pixels[row][width - 1 - col]
            );
        }
    }
}

std::string FlipH::name() const {

    return "flipH";
}
