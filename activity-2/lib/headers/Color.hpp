#ifndef COLOR_HPP
#define COLOR_HPP

#include "./Vec3.hpp";

#include <iostream>

using color = Vec3;

void writeColor(std::ostream &out, color pixelColor);

#endif