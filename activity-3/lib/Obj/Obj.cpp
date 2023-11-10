#include "Obj.hpp"

Obj::Obj(string name): name(name) {}

string Obj::getName() {
	return name;
}

void Obj::setName(string name) {
	this->name = name;
}

vector<Vec3> Obj::getVertices() {
	return vertices;
}

void Obj::addVertex(const Vec3& vertex) {
	vertices.emplace_back(vertex);
}

Vec3* Obj::getLastVertex() {
	return &vertices.back();
}