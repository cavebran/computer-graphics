#include "../headers/Vec3.hpp"

Vec3::Vec3(double e0, double e1, double e2): e{ e0, e1, e2 } {}

double Vec3::x() const {
	return e[0];
}

double Vec3::y() const {
	return e[1];
}

double Vec3::z() const {
	return e[2];
}

double Vec3::length() const {
	return sqrt(length_squared());
}

double Vec3::length_squared() const {
  return e[0]*e[0] + e[1]*e[1] + e[2]*e[2];
}

// Operators Overloadings
double Vec3::operator[](int i) const {
	return e[i];
}

Vec3 Vec3::operator-() {
	return Vec3(-e[0], -e[1], -e[2]);
}

Vec3& Vec3::operator+=(const Vec3 &v) {
	e[0] += v.e[0];
	e[1] += v.e[1];
	e[2] += v.e[2];

	return *this;
}
Vec3& Vec3::operator+(const Vec3 &v) {
	Vec3 result(e[0] + v.e[0], e[1] + v.e[1], e[2] + v.e[2]);

	return result;
}
Vec3& Vec3::operator+(double t) {
	Vec3 result(e[0] + t, e[1] + t, e[2] + t);

	return result;
}

Vec3& Vec3::operator*=(const Vec3 &v) {
	e[0] *= v.e[0];
	e[1] *= v.e[1];
	e[2] *= v.e[2];
	
	return *this;
}
Vec3& Vec3::operator*(const Vec3 &v) {
	Vec3 result(e[0] * v.e[0], e[1] * v.e[1], e[2] * v.e[2]);

	return result;
}
Vec3& Vec3::operator*(double t) {
	Vec3 result(e[0] * t, e[1] * t, e[2] * t);

	return result;
}

Vec3& Vec3::operator/=(const Vec3 &v) {
	if(v.e[0] == v.e[1] == v.e[2] == 0) {
		throw "Division by zero";
	}

	e[0] /= v.e[0];
	e[1] /= v.e[1];
	e[2] /= v.e[2];
	
	return *this;
}
Vec3& Vec3::operator/(const Vec3 &v) {
	if(v.e[0] == v.e[1] == v.e[2] == 0) {
		throw "Division by zero";
	}

	Vec3 result(e[0] / v.e[0], e[1] / v.e[1], e[2] / v.e[2]);

  return result;
}
Vec3& Vec3::operator/(double t) {
	if(t == 0) {
    throw "Division by zero";
  }

  Vec3 result(e[0] / t, e[1] / t, e[2] / t);

  return result;
}

std::ostream& operator<<(std::ostream &out, const Vec3 &v) {
	return out << v.e[0] << ' ' << v.e[1] << ' ' << v.e[2];
}