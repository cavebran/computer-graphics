ADD_LIBRARY(${ObjLibrary} Obj.cpp Obj.hpp)
TARGET_LINK_LIBRARIES(${ObjLibrary} ${Vec2Library} ${Vec3Library})