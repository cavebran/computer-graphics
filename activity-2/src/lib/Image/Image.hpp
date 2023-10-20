#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "../Color/Color.hpp"
#include <vector>

class Image {
	public:
		int width;
		int height;
		std::vector<std::vector<Color> > canvas;

		/**
		 * @brief Construct a new Image object
		 * 
		 * @param w Image width
		 * @param h Image height
		 */
		Image(int w, int h);

		/**
		 * @brief Set the Color object
		 * 
		 * @param x x Color coordinate 
		 * @param y y Color coordinate
		 * @param color Color object 
		 */
		void setColor(int x, int y, Color color);

		/**
		 * @brief Save image to .ppm format
		 * 
		 */
		void saveToPPM();

	private:
		bool checkPosition(int x, int y);
};

#endif