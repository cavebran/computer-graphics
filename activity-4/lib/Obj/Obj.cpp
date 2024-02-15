#include "Obj.hpp"

Obj::Obj(string name): name(name) {}

string Obj::getName() {
	return name;
}

void Obj::setName(string name) {
	this->name = name;
}

Vec3 Obj::getVertex(int idx) {
	if(idx < 0 || idx > this->vertices.size()) {
		throw std::out_of_range("idx value is out of range in array of vertices");
	}

	return this->vertices[idx];
}

Vec2 Obj::getTextures(int idx) {
	if(idx < 0 || idx > this->textures.size()) {
		throw std::out_of_range("idx value is out of range in array of texture");
	}

	return this->textures[idx];
}

Vec3 Obj::getNormal(int idx) {
	if(idx < 0 || idx > this->normals.size()) {
		throw std::out_of_range("idx value is out of range in array of normals");
	}

	return this->normals[idx];
}

vector<Vec3> Obj::getFace(int i, int j) {
	if(i < 0 || j < 0 || i > this->faces.size()) {
		throw std::out_of_range("i or j value is out of range in array of faces");
	}

	this->faces[i][j];
}

bool Obj::readObjFromFile(string filename) {
	ifstream file(filename);

	string line;
	regex regexVertex("^v (-?\\d+\\.\\d+) (-?\\d+\\.\\d+) (-?\\d+\\.\\d+)");
	regex regexTexCoord("^vt (-?\\d+\\.\\d+) (-?\\d+\\.\\d+)");
	regex regexNormal("^vn (-?\\d+\\.\\d+) (-?\\d+\\.\\d+) (-?\\d+\\.\\d+)");
	regex regexFace("^f (\\d+)/(\\d+)/(\\d+) (\\d+)/(\\d+)/(\\d+) (\\d+)/(\\d+)/(\\d+)");

	while (getline(file, line)) {
			float x, y ,z;

			if (regex_match(line, regexVertex)) {
					sscanf(line.c_str(), "v %f %f %f", &x, &y, &z);
					Vec3 vertex(x, y, z);
					vertices.push_back(vertex);
			} else if (regex_match(line, regexTexCoord)) {
					sscanf(line.c_str(), "vt %f %f", &x, &y);
					Vec2 texture(x, y);
					textures.push_back(texture);
			} else if (regex_match(line, regexNormal)) {
					sscanf(line.c_str(), "vn %f %f %f", &x, &y, &z);
					Vec3 normal(x, y, z);
					normals.push_back(normal);
			} else if (regex_match(line, regexFace)) {
					vector<Vec3> verticesFaces;
					std::smatch matches;
					
					if (std::regex_search(line, matches, regexFace)) {
						for (size_t i = 1; i < matches.size(); i += 3) {
							Vec3 faceVertex(std::stoi(matches[i]), std::stoi(matches[i + 1]), std::stoi(matches[i + 2]));
							verticesFaces.push_back(faceVertex);
						}
					}
					faces.push_back(verticesFaces);
			}
	}

	file.close();
}

void Obj::addVertex(const Vec3& vertex) {
	vertices.emplace_back(vertex);
}

Vec3* Obj::getLastVertex() {
	return &vertices.back();
}