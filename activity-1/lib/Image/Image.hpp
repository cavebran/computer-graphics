#ifndef IMAGE_HPP
#define IMAGE_HPP

#include "../Pixel/Pixel.hpp"
#include <vector>

/**
 * @brief Implements funcionalities to create images
 * 
 */
class Image {
public:
  int width;
  int height;
  std::vector<std::vector<Pixel> > canvas;

	/**
	 * @brief Construct a new Image object
	 * 
	 * @param w:int - Image width
	 * @param h:int - Image height
	 */
  Image(int w, int h);

  /**
   * @brief Set the Pixel object
   * 
   * @param x:int - x Pixel coordinate 
   * @param y:int - y Pixel coordinate
   * @param pixel:Pixel - Pixel object 
   */
  void setPixel(int x, int y, Pixel pixel);

	/**
	 * @brief Save image to .ppm format
	 * 
	 */
  void saveToPPM(std::string fileName);

	/**
	 * @brief Save image to .jpeg format
	 * 
	 * @param fileName: std::string - file name to save
	 */
	void saveToJpeg(std::string fileName);
};

#endif