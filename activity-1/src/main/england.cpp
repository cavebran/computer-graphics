#include "../lib/Image/Image.hpp"
#include "../lib/Pixel/Pixel.hpp"
#include <iostream>


int main() {
	int imageWidth = 900;
	int imageHeight = 600;

	Image england(imageWidth, imageHeight);

	int redStripeWidth = (int) imageWidth / 15;
	int width_5of10 = (int) (imageWidth / 2) - redStripeWidth;
	int width_6of10 = (int) (imageWidth / 2) + redStripeWidth;
	int height_5of10 = (int) (imageHeight / 2) - redStripeWidth;
	int height_6of10 = (int) (imageHeight / 2) + redStripeWidth;

	// std::cout << width_5of10 << " " << width_6of10 << "\n" << height_5of10 << " " << height_6of10;

	for (int i = 0; i < imageWidth; i++) {
		for (int j = 0; j < imageHeight; j++) {
			if((i >= width_5of10 && i <= width_6of10) || (j >= height_5of10 && j <= height_6of10)) {
				england.setPixel(j, i, Pixel(206, 17, 36));
			} else {
				england.setPixel(j, i, Pixel(255, 255, 255));
			}
		}
	}

	england.saveToPPM();
}