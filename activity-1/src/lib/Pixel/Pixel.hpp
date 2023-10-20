#ifndef PIXEL_HPP
#define PIXEL_HPP

#include <string>

class Pixel {
public:
  int r; // red
	int g; // green
	int b; // blue

  /**
   * @brief Construct a new Pixel object
   * 
   * @param red red amount value
   * @param green green amount value
   * @param blue blue amount value
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