#include "Grayscale.h"

void Grayscale::apply(Grid& pixels) {

    for (size_t row = 0; row < pixels.size(); ++row) {

        for (size_t col = 0; col < pixels[row].size(); ++col) {

            Pixel& p = pixels[row][col];

            int gray =
                static_cast<int>(
                    0.299 * p.r +
                    0.587 * p.g +
                    0.114 * p.b
                );

            p.r = gray;
            p.g = gray;
            p.b = gray;
        }
    }
}

std::string Grayscale::name() const {

    return "grayscale";
}
