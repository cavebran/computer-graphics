ADD_LIBRARY(${ImageLibrary} Image.cpp Image.hpp)
TARGET_LINK_LIBRARIES(${ImageLibrary} ${PixelLibrary})
