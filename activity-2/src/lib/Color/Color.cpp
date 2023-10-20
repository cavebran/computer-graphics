#include "Color.hpp"

double Color::adjustColor(int color) {
	if(color >= 0 || color <= 255) {
		return static_cast<double>(color);
	} else {
		throw std::out_of_range("Color values must be in the range [0, 255]");
	}
}

Color::Color(int r, int g, int b): Vec3(adjustColor(r), adjustColor(g), adjustColor(b)) {}