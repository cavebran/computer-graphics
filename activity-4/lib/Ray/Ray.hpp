#ifndef RAY_H
#define RAY_H

#include "../Vec3/Vec3.hpp"

/**
 * @brief Class to handle rays
 * 
 */
class Ray {
	private:
		Vec3 origin;
		Vec3 direction;
		
	public:
		/**
		 * @brief Construct a new empty Ray object
		 * 
		 */
		Ray() {}

		/**
		 * @brief Construct a new Ray object
		 * 
		 * @param origin: Vec3 - origin
		 * @param direction: Vec3 - direction
		 */
		Ray(Vec3 origin, Vec3 direction);

		/**
		 * @brief Get the Origin object
		 * 
		 * @return Vec3: origin value
		 */
		Vec3 getOrigin();

		/**
		 * @brief Get the Direction object
		 * 
		 * @return Vec3: direction value
		 */
		Vec3 getDirection();

		/**
		 * @brief Get the position of the Ray
		 * 
		 * @param t: double - value of the direction
		 * @return Vec3: Ray origin plus direction
		 */
		Vec3 at(double t);
};

#endif