#ifndef OBJFILE_H
#define OBJFILE_H

#include "../Obj/Obj.hpp"
#include <cmath>
#include <vector>
#include <stdexcept>
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::ofstream;
using std::runtime_error;

/**
 * @brief Class to read .obj files
 * 
 */
class ObjFile {
	private:
		string filepath;
		vector<Obj> objects;

		/**
		 * @brief Read a .obj file
		 * 
		 * @param filepath: string - filepath to .obj file
		 */
		void readFile(string filepath);

		/**
		 * @brief Get the Last Obj object in array of objects
		 * 
		 * @return Obj*: Pointer to last Obj
		 */
		Obj* getLastObj();
	
	public:
		/**
		 * @brief Construct a new ObjFile object
		 * 
		 * @param filepath: string - filepath to .obj file
		 */
		ObjFile(string filepath);

		/**
		 * @brief Get the filepath of ObjFile
		 * 
		 * @return string: filepath of ObjFile
		 */
		string getFilepath();

		/**
		 * @brief Set the filepath of  ObjFile
		 * 
		 * @param filepath: string - filepath to .obj file
		 */
		void setFilepath(string filepath);

		/**
		 * @brief Add an Obj in array of Objs objects
		 * 
		 * @param obj: const Obj& - Obj to add
		 */
		void addObj(const Obj& obj);

		/**
		 * @brief Save ObjFile in memory to a file in disk
		 * 
		 * @param filepath: string - filepath to save ObjFile file
		 */
		void saveToFile(string filepath);
};

#endif