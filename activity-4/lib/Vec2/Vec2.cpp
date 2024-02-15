#include "Vec2.hpp"

Vec2::Vec2(double e0, double e1): e{ e0, e1 } {}

double Vec2::x() const {
	return e[0];
}

double Vec2::y() const {
	return e[1];
}

double Vec2::length() const {
	return sqrt(length_squared());
}

double Vec2::length_squared() const {
  return e[0]*e[0] + e[1]*e[1];
}

std::string Vec2::to_string() {
	std::ostringstream ss;
	ss << e[0] << " " << e[1];

	return ss.str();
}

// Operators Overloadings
double Vec2::operator[](int i) const {
	return e[i];
}

Vec2 Vec2::operator-() {
	return Vec2(-e[0], -e[1]);
}

Vec2& Vec2::operator+=(const Vec2 &v) {
	e[0] += v.e[0];
	e[1] += v.e[1];

	return *this;
}
Vec2 Vec2::operator+(const Vec2 &v) {
	return Vec2(e[0] + v.e[0], e[1] + v.e[1]);
}
Vec2 Vec2::operator+(double t) {
	return Vec2(e[0] + t, e[1] + t);
}

Vec2& Vec2::operator*=(const Vec2 &v) {
	e[0] *= v.e[0];
	e[1] *= v.e[1];
	
	return *this;
}
Vec2 Vec2::operator*(const Vec2 &v) {
	return Vec2(e[0] * v.e[0], e[1] * v.e[1]);
}
Vec2 Vec2::operator*(double t) {
	return Vec2(e[0] * t, e[1] * t);
}

Vec2& Vec2::operator/=(const Vec2 &v) {
	if(v.e[0] == 0 || v.e[1] == 0) {
		throw "Division by zero";
	}

	e[0] /= v.e[0];
	e[1] /= v.e[1];
	
	return *this;
}
Vec2 Vec2::operator/(const Vec2 &v) {
	if(v.e[0] == 0 || v.e[1] == 0) {
		throw "Division by zero";
	}

	return Vec2(e[0] / v.e[0], e[1] / v.e[1]);
}
Vec2 Vec2::operator/(double t) {
	if(t == 0) {
    throw "Division by zero";
  }

  return Vec2(e[0] / t, e[1] / t);
}

std::ostream& operator<<(std::ostream &out, const Vec2 &v) {
	return out << v.e[0] << ' ' << v.e[1];
}