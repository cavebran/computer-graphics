#include "../lib/Image/Image.hpp"
#include "../lib/Color/Color.hpp"
#include <iostream>

int main() {
	int imageWidth = 900;
	int imageHeight = 600;

	Image france(imageWidth, imageHeight);

	int flagOneOfThree = (int) (imageWidth / 3);
	int flagTwoOfThree = (int) ((imageWidth * 2) / 3);

	for (int i = 0; i < imageWidth; i++) {
		for (int j = 0; j < imageHeight; j++) {

			if(i >= 0 && i < flagOneOfThree) {
				france.setColor(j, i, Color(0, 85, 164));
			} else if(i >= flagOneOfThree && i < flagTwoOfThree) {
				france.setColor(j, i, Color(255, 255, 255));
			} else {
				france.setColor(j, i, Color(239, 65, 53));
			}
		}
	}

	france.saveToPPM("france.ppm");
}