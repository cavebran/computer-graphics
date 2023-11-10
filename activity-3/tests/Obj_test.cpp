#include "../lib/Obj/Obj.hpp"
#include "../lib/Vec3/Vec3.hpp"
#include <gtest/gtest.h>
#include <sstream>

// Test string Obj::getName()
TEST(ObjLibTest, GetName) {
	Obj obj("objeto1");

	string actual_name = obj.getName();
	string expected_name = "objeto1";

	EXPECT_EQ(expected_name, actual_name);
}

// Test void Obj::setName(string name)
TEST(ObjLibTest, SetName) {
	Obj obj("objeto1");
	obj.setName("objeto2");

	string actual_name = obj.getName();
	string expected_name = "objeto2";

	EXPECT_EQ(expected_name, actual_name);
}

// Test void Obj::addVertex(const Vec3& vertex) and Vec3* Obj::getLastVertex()
TEST(ObjLibTest, AddVertex) {
	Obj obj("objeto1");
	obj.addVertex(Vec3(1, 2, 3));

	string actual_vertex = obj.getLastVertex()->to_string();
	string expected_vertex = Vec3(1, 2, 3).to_string();

	EXPECT_EQ(expected_vertex, actual_vertex);
}