#include "Image.hpp"
#include <iostream>
#include <fstream>

Image::Image(int w, int h) : width(w), height(h) {
    canvas.resize(height, std::vector<Pixel>(width, Pixel(100, 100, 100)));
}

void Image::setPixel(int x, int y, Pixel pixel) {
	if((x < 0 || x >= height) || (y < 0 || y > width)) {
		throw "Error on set pixel position";
	}

  canvas[x][y] = pixel;
}

void Image::saveToPPM(std::string fileName) {
		std::fstream fs;
		fs.open(fileName + ".ppm", std::ofstream::out | std::ofstream::trunc);

    fs << "P3\n" << width << ' ' << height << "\n255\n";

    for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
					fs << canvas[j][i].print() << '\n';        
				}
    }

		fs.close();
}

void Image::saveToJpeg(std::string fileName) {
	saveToPPM(fileName);
	// #TODO
}