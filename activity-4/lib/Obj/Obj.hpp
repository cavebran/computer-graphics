#ifndef OBJ_H
#define OBJ_H

#include "../Vec3/Vec3.hpp"
#include "../Vec2/Vec2.hpp"
#include <cmath>
#include <vector>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <regex>
#include <fstream>



using std::string;
using std::vector;
using std::regex;
using std::ifstream;


/**
 * @brief Class to handle objects of .obj files
 * 
 */
class Obj {
	private:
		string name;
    vector<Vec3> vertices;
		vector<Vec2> textures;
		vector<Vec3> normals;
		vector<vector<Vec3> > faces;

	public:
		/**
	 * @brief Construct a new Obj object
	 * 
	 * @param name:string - name of Obj
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
		 * @brief Get vertex based on index
		 * 
		 * @param idx - idx: index of vertex
		 * @return Vec3: vertex
		 */
		Vec3 getVertex(int idx);

		/**
		 * @brief Get texture coordenate based on index
		 * 
		 * @param idx - idx: index of texture coordenate
		 * @return Vec2: texture
		 */
		Vec2 getTextures(int idx);

		/**
		 * @brief Get normal based on index
		 * 
		 * @param idx - idx: index of normal
		 * @return Vec3: normal
		 */
		Vec3 getNormal(int idx);


		/**
		 * @brief Get the Face object in i and j range
		 * 
		 * @param i first index
		 * @param j last index
		 * @return vector<vector<Vec3> >: face object
		 */
		vector<Vec3> getFace(int i, int j);

		/**
		 * @brief Read an .obj file and store into this class
		 * 
		 * @param filename
		 * @return true: successful read
		 * @return false : failed to read
		 */
		bool readObjFromFile(string filename);

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