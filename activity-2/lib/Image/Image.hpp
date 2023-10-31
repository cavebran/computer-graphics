#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "../Color/Color.hpp"
#include <vector>
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <fstream>

/**
 * @brief Implements funcionalities to create images
 * 
 */
class Image {
	public:
		int width;
		int height;
		std::vector<std::vector<Color> > canvas;

		/**
		 * @brief Construct a new Image object
		 * 
		 * @param w:int - Image width
		 * @param h:int - Image height
		 */
		Image(int w, int h);

		/**
		 * @brief Set the Color object
		 * 
		 * @param x:int - x Color coordinate 
		 * @param y:int - y Color coordinate
		 * @param color: Color - Color object 
		 */
		void setColor(int x, int y, Color color);

		/**
		 * @brief Save image to .ppm format
		 * 
		 */
		  void saveToPPM(std::string fileName);

			/**
			 * @brief Save image to .jpeg format
			 * 
			 * @param fileName:std::string - file name to save
			 */
			void SaveToJpeg(std::string fileName);

	private:
		/**
		 * @brief check if a point is in the canvas image
		 * 
		 * @param x:int - position in canvas image 
		 * @param y:int - position in canvas image
		 * @return true if position is valid 
		 * @return false otherwise
		 */
		bool checkPosition(int x, int y);
};

#endif