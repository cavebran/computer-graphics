ADD_EXECUTABLE(${ACTIVITY_NAME}_Vec3_test Vec3_test.cpp)
TARGET_LINK_LIBRARIES(${ACTIVITY_NAME}_Vec3_test ${Vec3Library} gtest_main)

ADD_EXECUTABLE(${ACTIVITY_NAME}_Obj_test Obj_test.cpp)
TARGET_LINK_LIBRARIES(${ACTIVITY_NAME}_Obj_test ${ObjLibrary} ${Vec3Library} gtest_main)

ADD_EXECUTABLE(${ACTIVITY_NAME}_ObjFile_test ObjFile_test.cpp)
TARGET_LINK_LIBRARIES(${ACTIVITY_NAME}_ObjFile_test ${ObjFileLibrary} ${ObjLibrary} ${Vec3Library} gtest_main)
