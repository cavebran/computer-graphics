#ifndef OBJ_H
#define OBJ_H

#include "../Vec3/Vec3.hpp"
#include <cmath>
#include <vector>
#include <sstream>
#include <iostream>
#include <stdexcept>

using std::string;
using std::vector;

/**
 * @brief Class to handle objects of .obj files
 * 
 */
class Obj {
	private:
		string name;
    vector<Vec3> vertices;

	public:
		/**
	 * @brief Construct a new Obj object
	 * 
	 * @param name:string - name of Obj
	 * @param e2:vector<Vec3> - array of vertices 
	 */
		Obj(string name);

		/**
		 * @brief Get the name of Obj
		 * 
		 * @return string: name of Obj
		 */
		string getName();

		/**
		 * @brief Set the name of Obj
		 * 
		 * @param name: string - new name of Obj 
		 */
		void setName(string name);

		/**
		 * @brief Get the array of vertices
		 * 
		 * @return vector<Vec3>: array of vertices
		 */
		vector<Vec3> getVertices();

		/**
		 * @brief Add a vertex in the end of vertices array
		 * 
		 * @param vertex: const Vec3& - the vertex to add
		 */
		void addVertex(const Vec3& vertex);

		/**
		 * @brief Get the last vertex in array of vertices (Vec3 object)
		 * 
		 * @return Vec3*: Pointer to the last vertex
		 */
		Vec3* getLastVertex();
};

#endif