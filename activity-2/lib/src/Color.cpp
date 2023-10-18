#include "../headers/Color.hpp"

void writeColor(std::ostream &out, color pixelColor) {
	out << static_cast<int>(255.999 * pixelColor.x()) << ' '
			<< static_cast<int>(255.999 * pixelColor.y()) << ' '
			<< static_cast<int>(255.999 * pixelColor.z()) << '\n';
}