#include "../lib/Vec3/Vec3.hpp"
#include <gtest/gtest.h>
#include <sstream>

// Test Vec3::x()
TEST(Vec3LibTest, GetX) {
	Vec3 vec3(1, 2, 3);

	double actual_x = vec3.x();
	double expected_x = 1;

	EXPECT_EQ(expected_x, actual_x);
}

// Test Vec3::y()
TEST(Vec3LibTest, GetY) {
	Vec3 vec3(1, 2, 3);

	double actual_y = vec3.y();
	double expected_y = 2;

	EXPECT_EQ(expected_y, actual_y);
}

// Test Vec3::z()
TEST(Vec3LibTest, GetZ) {
	Vec3 vec3(1, 2, 3);

	double actual_z = vec3.z();
	double expected_z = 3;

	EXPECT_EQ(expected_z, actual_z);
}

// Test Vec3::length() and Vec3::length_squared()
TEST(Vec3LibTest, Length) {
	Vec3 vec3(1, 2, 3);

	double actual = vec3.length();
	double expected = 3.74166;

	EXPECT_NEAR(expected, actual, 0.0001);
}

// Test Vec3::operator[](int i)
TEST(Vec3LibTest, GetValuebyPosition) {
	Vec3 vec3(1, 2, 3);

	double actual = vec3[1];
	double expected = 2;

	EXPECT_EQ(expected, actual);
}

// Test Vec3::operator-()
TEST(Vec3LibTest, InvertSignalOperator) {
	Vec3 vec3(1, 2, 3);

	std::string actual = (-vec3).to_string();
	std::string expected = Vec3(-1, -2, -3).to_string();

	EXPECT_EQ(expected, actual);
}

// Test Vec3::operator+=(const Vec3 &v)
TEST(Vec3LibTest, PlusEqualsVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	v1 += v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(2, 4, 6).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

// Test Vec3::operator+(const Vec3 &v)
TEST(Vec3LibTest, PlusVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	Vec3 v3 = v1 + v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string actual_v3 = v3.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();
	std::string expected_v3 = Vec3(2, 4, 6).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
	EXPECT_EQ(expected_v3, actual_v3);
}

// Test Vec3::operator+(double t)
TEST(Vec3LibTest, PlusDoubleOperator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2 = v1 + 10;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(11, 12, 13).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

// Test Vec3::operator*=(const Vec3 &v)
TEST(Vec3LibTest, MultiplyEqualsVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	v1 *= v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(1, 4, 9).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

// Test Vec3::operator*(const Vec3 &v)
TEST(Vec3LibTest, MultiplyVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	Vec3 v3 = v1 * v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string actual_v3 = v3.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();
	std::string expected_v3 = Vec3(1, 4, 9).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
	EXPECT_EQ(expected_v3, actual_v3);
}

// Test Vec3::operator*(double t)
TEST(Vec3LibTest, MultiplyDoubleOperator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2 = v1 * 10;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(10, 20, 30).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

// Test Vec3::operator/=(const Vec3 &v)
TEST(Vec3LibTest, DivideEqualsVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	v1 /= v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(1, 1, 1).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

// Test Vec3::operator/(const Vec3 &v)
TEST(Vec3LibTest, DivideVec3Operator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2(1, 2, 3);

	Vec3 v3 = v1 / v2;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string actual_v3 = v3.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(1, 2, 3).to_string();
	std::string expected_v3 = Vec3(1, 1, 1).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
	EXPECT_EQ(expected_v3, actual_v3);
}

// Test Vec3::operator/(double t)
TEST(Vec3LibTest, DivideDoubleOperator) {
	Vec3 v1(1, 2, 3);
	Vec3 v2 = v1 / 10;

	std::string actual_v1 = v1.to_string();
	std::string actual_v2 = v2.to_string();
	std::string expected_v1 = Vec3(1, 2, 3).to_string();
	std::string expected_v2 = Vec3(0.1, 0.2, 0.3).to_string();

	EXPECT_EQ(expected_v1, actual_v1);
	EXPECT_EQ(expected_v2, actual_v2);
}

TEST(Vec3LibTest, StreamOperator) {
		Vec3 vec(1, 2, 3);

		std::ostringstream actual;
		std::ostringstream expected;

		actual << vec.to_string();
		expected << "1 2 3";

		EXPECT_EQ(actual.str(), expected.str());
}