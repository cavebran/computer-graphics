#include "ObjFile.hpp"

ObjFile::ObjFile(string filepath) : filepath(filepath) {
	readFile(filepath);
}

string ObjFile::getFilepath() {
	return filepath;
}

void ObjFile::setFilepath(string filepath) {
	this->filepath = filepath;
}

void ObjFile::addObj(const Obj& obj) {
	objects.emplace_back(obj);
}

Obj* ObjFile::getLastObj() {
	return &objects.back();
}
	
void ObjFile::readFile(string filepath) {
	ifstream file(filepath);
	if (!file.is_open()) {
		throw std::runtime_error("Couldn't open file: " + filepath);
	}

	string line;
	Obj* currentObj = nullptr;

	while (!file.eof()) {
		getline(file, line);
		
		istringstream iss(line);
		string token;
		iss >> token;

		if(token == "o") {
			string name;
			iss >> name;

			addObj(Obj(name));
			currentObj = getLastObj();
		} else if(token == "v") {
			double x, y, z;
			iss >> x >> y >> z;

			if(currentObj != nullptr) {
				currentObj->addVertex(Vec3(x, y, z));
			}
		}
	}

	file.close();
}

void ObjFile::saveToFile(string filepath) {
	ofstream outputFile(filepath);

	if (!outputFile.is_open()) {
		throw runtime_error("Couldn't create/open file: " + filepath);
	}

	for (auto& obj : objects) {
		outputFile << "o " << obj.getName() << "\n";

		for (auto& vertex : obj.getVertices()) {
				outputFile << vertex << "\n";
		}
	}

	outputFile.close();
}