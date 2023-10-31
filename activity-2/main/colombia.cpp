#include "../lib/Image/Image.hpp"
#include "../lib/Color/Color.hpp"
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
				colombia.setColor(j, i, Color(255, 205, 0));
			} else if(j >= flagTwoOfFour && j < flagThreeOfFour) {
				colombia.setColor(j, i, Color(0, 48, 135));
			} else {
				colombia.setColor(j, i, Color(200, 16, 46));
			}
		}
	}

	colombia.saveToPPM("colombia.ppm");
}