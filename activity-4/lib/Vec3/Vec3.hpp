#ifndef VEC3_H
#define VEC3_H

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>

using std::sqrt;

/**
 * @brief Class to handle 3 points vectors
 * 
 */
class Vec3 {
	private:
		double e[3];
		
	public:
		/**
		 * @brief Construct a new Vec3 object
		 * 
		 * @param e0:double - e[0] value = 0.0
		 * @param e1:double - e[1] value = 0.0
		 * @param e2:double - e[2] value = 0.0
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
		 * @return std::string : x, y and z values concatenated to string
		 */
		std::string to_string();

		/**
		 * @brief return dot
		 * 
		 * @param u 
		 * @param v 
		 * @return double 
		 */
		inline double dot(Vec3 u, Vec3 v);

		// Operators Overloadings
		/**
		 * @brief Easy access to Vec3 vector position value
		 * 
		 * @param i:int - Vec3 vector attribute index position
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
		 * @brief Subtract two Vec3 vectors values
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator-(const Vec3 &v);

		/**
		 * @brief Accumulate (sum) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator+=(const Vec3 &v);

		/**
		 * @brief Sum two Vec3 vectors values
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator+(const Vec3 &v);

		/**
		 * @brief Sum Vec3 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator+(double t);

		/**
		 * @brief Accumulate (multiply) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator*=(const Vec3 &v);

		/**
		 * @brief Multiply two Vec3 vectors values
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator*(const Vec3 &v);

		/**
		 * @brief Multiply Vec3 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator*(double t);

		/**
		 * @brief Accumulate (divide) into Vec3 vector, another Vec3 vector 
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3& operator/=(const Vec3 &v);

		/**
		 * @brief Divide two Vec3 vectors values
		 * 
		 * @param v:Vec3 - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator/(const Vec3 &v);

		/**
		 * @brief Divide Vec3 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec3& 
		 */
		Vec3 operator/(double t);

		/**
		 * @brief 
		 * 
		 * @param out:std::ostream pointer to output - Operation left side
		 * @param v:Vec3 - Operation right side
		 * @return std::ostream& 
		 */
		friend std::ostream& operator<<(std::ostream &out, const Vec3 &v);
};

#endif