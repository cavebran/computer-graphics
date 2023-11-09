#include "../lib/Obj/Obj.hpp"
#include "../lib/ObjFile/ObjFile.hpp"
#include "../lib/Vec3/Vec3.hpp"
#include <gtest/gtest.h>
#include <sstream>

// Test ReadFile
TEST(ObjFileLibTest, Readfile) {
	ObjFile objfile("activity-3/tests/mock/ObjFile_test_object.obj");

	string actual_filepath = objfile.getFilepath();
	string expected_filepath = "activity-3/tests/mock/ObjFile_test_object.obj";
	EXPECT_EQ(expected_filepath, actual_filepath);

	// #TODO
}