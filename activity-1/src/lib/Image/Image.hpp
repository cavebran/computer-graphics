#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "../Pixel/Pixel.hpp"
#include <vector>

class Image {
public:
  int width;
  int height;
  std::vector<std::vector<Pixel> > canvas;

	/**
	 * @brief Construct a new Image object
	 * 
	 * @param w Image width
	 * @param h Image height
	 */
  Image(int w, int h);

  /**
   * @brief Set the Pixel object
   * 
   * @param x x Pixel coordinate 
   * @param y y Pixel coordinate
   * @param pixel Pixel object 
   */
  void setPixel(int x, int y, Pixel pixel);

	/**
	 * @brief Save image to .ppm format
	 * 
	 */
  void saveToPPM();
};

#endif