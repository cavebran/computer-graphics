#include "../lib/Image/Image.hpp"
#include "../lib/Pixel/Pixel.hpp"
#include <iostream>

int main() {
	int imageWidth = 900;
	int imageHeight = 600;

	Image colombia(imageWidth, imageHeight);

	int flagTwoOfFour = (int) ((imageHeight * 2) / 4);
	int flagThreeOfFour = (int) ((imageHeight * 3) / 4);

	for (int i = 0; i < imageWidth; i++) {
		for (int j = 0; j < imageHeight; j++) {

			if(j >= 0 && j < flagTwoOfFour) {
				colombia.setPixel(j, i, Pixel(255, 205, 0));
			} else if(j >= flagTwoOfFour && j < flagThreeOfFour) {
				colombia.setPixel(j, i, Pixel(0, 48, 135));
			} else {
				colombia.setPixel(j, i, Pixel(200, 16, 46));
			}
		}
	}

	colombia.saveToPPM();
}