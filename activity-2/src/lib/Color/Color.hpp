#ifndef COLOR_H
#define COLOR_H

#include "../Vec3/Vec3.hpp"

/**
 * @brief Implements funcionalities for manipulate Color objects
 * 
 */
class Color : public Vec3 {
	public:
		/**
		 * @brief Construct a new Color object
		 * 
		 * @param r:int - red
		 * @param g:int - green
		 * @param b:int - blue
		 */
		Color(int r, int g, int b);

	private:
		/**
		 * @brief Check if the color fit the range for rgb color
		 * 
		 * @param color:int - color
		 * @return double: adjusted color
		 */
		double adjustColor(int color);
};	

#endif