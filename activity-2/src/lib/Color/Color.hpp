#ifndef COLOR_H
#define COLOR_H

#include "../Vec3/Vec3.hpp"

class Color : public Vec3 {
	public:
		Color(int r, int g, int b);

	private:
		double adjustColor(int color);
};	

#endif