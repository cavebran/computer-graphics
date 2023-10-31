CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

# Nome da atividade 1
SET(ACTIVITY_NAME activity-1)

SET(ImageLibrary ${ACTIVITY_NAME}_ImageLibrary)
SET(PixelLibrary ${ACTIVITY_NAME}_PixelLibrary)

ADD_SUBDIRECTORY(lib/Image)
ADD_SUBDIRECTORY(lib/Pixel)

ADD_SUBDIRECTORY(main)