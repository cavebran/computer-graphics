#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>
#include <sstream>

using std::sqrt;

class Vec3 {
	public:
		double e[3];

		/**
		 * @brief Construct a new Vec3 object
		 * 
		 * @param e0 e0 value = 0.0
		 * @param e1 e1 value = 0.0
		 * @param e2 e2 value = 0.0
		 */
		Vec3(double e0 = 0.0, double e1 = 0.0, double e2 = 0.0);

		/**
		 * @brief Get x value (vector first position)
		 * 
		 * @return double: x value
		*/
		double x() const;

		/**
		 * @brief Get y value (vector second position)
		 * 
		 * @return double: y value
		*/
		double y() const;

		/**
		 * @brief Get z value (vector third position)
		 * 
		 * @return double: z value
		*/
		double z() const;

		/**
		 * @brief Get squared root of vec3 length squared
		 * 
		 * @return double: squared root of vec3 length squared
		*/
		double length() const;

		/**
		 * @brief Get squared length of vec3
		 * 
		 * @return double: squared length of vec3
		*/
		double length_squared() const;

		/**
		 * @brief convert x, y and z values to string
		 * 
		 * @return std::string 
		 */
		std::string to_string();


		// Operators Overloadings
		/**
		 * @brief Easy access to Vec3 vector position value
		 * 
		 * @param i Vec3 vector attribute index position
		 * @return double 
		 */
		double operator[](int i) const;
		
		/**
		 * @brief Invert signal of Vec3 vector values
		 * 
		 * @return Vec3 
		 */
		Vec3 operator-();

		/**
		 * @brief Accumulate (sum) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator+=(const Vec3 &v);

		/**
		 * @brief Sum two Vec3 vectors values
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator+(const Vec3 &v);

		/**
		 * @brief Sum Vec3 vector values by a constant t value
		 * 
		 * @param t double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator+(double t);

		/**
		 * @brief Accumulate (multiply) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator*=(const Vec3 &v);

		/**
		 * @brief Multiply two Vec3 vectors values
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator*(const Vec3 &v);

		/**
		 * @brief Multiply Vec3 vector values by a constant t value
		 * 
		 * @param t double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator*(double t);

		/**
		 * @brief Accumulate (divide) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator/=(const Vec3 &v);

		/**
		 * @brief Divide two Vec3 vectors values
		 * 
		 * @param v Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator/(const Vec3 &v);


		/**
		 * @brief Divide Vec3 vector values by a constant t value
		 * 
		 * @param t double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator/(double t);

		/**
		 * @brief 
		 * 
		 * @param out std::ostream pointer to output - Operation left side
		 * @param v Vec3 - Operation right side
		 * @return std::ostream& 
		 */
		friend std::ostream& operator<<(std::ostream &out, const Vec3 &v);
};

#endif