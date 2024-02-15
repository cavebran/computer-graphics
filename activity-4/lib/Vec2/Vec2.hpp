#ifndef VEC2_H
#define VEC2_H

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdexcept>

using std::sqrt;

/**
 * @brief Class to handle 3 points vectors
 * 
 */
class Vec2 {
	private:
		double e[2];
		
	public:
		/**
		 * @brief Construct a new Vec2 object
		 * 
		 * @param e0:double - e[0] value = 0.0
		 * @param e1:double - e[1] value = 0.0
		 */
		Vec2(double e0 = 0.0, double e1 = 0.0);

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
		 * @brief Get squared root of vec2 length squared
		 * 
		 * @return double: squared root of vec2 length squared
		*/
		double length() const;

		/**
		 * @brief Get squared length of vec2
		 * 
		 * @return double: squared length of vec2
		*/
		double length_squared() const;

		/**
		 * @brief convert x, y and z values to string
		 * 
		 * @return std::string : x, y and z values concatenated to string
		 */
		std::string to_string();


		// Operators Overloadings
		/**
		 * @brief Easy access to Vec2 vector position value
		 * 
		 * @param i:int - Vec2 vector attribute index position
		 * @return double 
		 */
		double operator[](int i) const;
		
		/**
		 * @brief Invert signal of Vec2 vector values
		 * 
		 * @return Vec2 
		 */
		Vec2 operator-();

		/**
		 * @brief Accumulate (sum) into Vec2 vector, another Vec2 vector 
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2& operator+=(const Vec2 &v);

		/**
		 * @brief Sum two Vec2 vectors values
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator+(const Vec2 &v);

		/**
		 * @brief Sum Vec2 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator+(double t);

		/**
		 * @brief Accumulate (multiply) into Vec2 vector, another Vec2 vector 
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2& operator*=(const Vec2 &v);

		/**
		 * @brief Multiply two Vec2 vectors values
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator*(const Vec2 &v);

		/**
		 * @brief Multiply Vec2 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator*(double t);

		/**
		 * @brief Accumulate (divide) into Vec2 vector, another Vec2 vector 
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2& operator/=(const Vec2 &v);

		/**
		 * @brief Divide two Vec2 vectors values
		 * 
		 * @param v:Vec2 - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator/(const Vec2 &v);

		/**
		 * @brief Divide Vec2 vector values by a constant t value
		 * 
		 * @param t:double - Operation right side
		 * @return Vec2& 
		 */
		Vec2 operator/(double t);

		/**
		 * @brief 
		 * 
		 * @param out:std::ostream pointer to output - Operation left side
		 * @param v:Vec2 - Operation right side
		 * @return std::ostream& 
		 */
		friend std::ostream& operator<<(std::ostream &out, const Vec2 &v);
};

#endif