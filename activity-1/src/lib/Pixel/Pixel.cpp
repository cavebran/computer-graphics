#include "Pixel.hpp"
#include <iostream>

Pixel::Pixel(int red, int green, int blue) {
	if(red < 0 || red > 255 || green < 0 || green > 255 || blue < 0 || blue > 255) {
		throw std::out_of_range("Color values must be in the range [0, 255]");
	}

	this->r = red;
	this->g = green;
	this->b = blue;
}

std::string Pixel::print() {
	std::string printString = std::to_string(this->r) + " " + std::to_string(this->g) + " " + std::to_string(this->b);
	
	return printString;
}