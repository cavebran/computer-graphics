ADD_EXECUTABLE(${ACTIVITY_NAME}_Vec3_test Vec3_test.cpp)
TARGET_LINK_LIBRARIES(${ACTIVITY_NAME}_Vec3_test ${Vec3Library} gtest_main)