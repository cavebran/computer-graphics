#include "Ray.hpp"

Ray::Ray(Vec3 origin, Vec3 direction): origin(origin), direction(direction) {}

Vec3 Ray::getOrigin() {
	return origin;
}

Vec3 Ray::getDirection() {
	return direction;
}

Vec3 Ray::at(double t) {
	return origin + direction*t;
}