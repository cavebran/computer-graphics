#include "Image.hpp"
#include <iostream>
#include <sstream>

Image::Image(int w, int h) : width(w), height(h) {
    canvas.resize(height, std::vector<Color>(width, Color(0, 0, 0)));
}

void Image::setColor(int x, int y, Color color) {
	if(!checkPosition(x, y)) {
		std::string errorMessage = R"(
			Color must be set in a valid canvas position!
			- Height range [0, )" + std::to_string(height - 1) + R"(]
			- Width range [0, )" + std::to_string(width - 1) + R"(]
			Attempted position [)" + std::to_string(x) + ", " + std::to_string(y) + "]";

		throw std::out_of_range(errorMessage);
	}

  canvas[x][y] = color;
}

void Image::saveToPPM() {
    std::cout << "P3\n"
              << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
					std::cout << canvas[j][i] << '\n';        
				}
    }
}

bool Image::checkPosition(int x, int y) {
	return (x >= 0 && x < height) && (y >= 0 && y < width);
}