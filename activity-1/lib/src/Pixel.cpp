#include "../headers/Pixel.hpp"

Pixel::Pixel(int red, int green, int blue) {
	if(red < green < blue < 0 || red > green > blue > 255) {
		throw "Color doest exists";
	}

	this->r = red;
	this->g = green;
	this->b = blue;
}

std::string Pixel::print() {
	std::string printString = std::to_string(this->r) + " " + std::to_string(this->g) + " " + std::to_string(this->b);
	return printString;
}