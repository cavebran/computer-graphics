#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <string>

/**
 * @brief Implements funcionalities to create pixels
 * 
 */
class Pixel {
public:
  int r;
	int g;
	int b;

  /**
   * @brief Construct a new Pixel object
   * 
   * @param red:int - red amount value
   * @param green:int - green amount value
   * @param blue:int - blue amount value
   */
  Pixel(int red = 0, int green = 0, int blue = 0);

  /**
   * @brief Print Pixel object colors
   * 
   * @return std::string 
   */
	std::string print();
};

#endif