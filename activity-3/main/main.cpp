#include "../lib/ObjFile/ObjFile.hpp"
#include "../lib/Obj/Obj.hpp"
#include <iostream>

int main() {
	ObjFile sword("activity-3/.objs/sword.obj");

	sword.saveToFile("teste.obj");

	// Obj test("test");
	// std::cout << test.getName();

	return 0;
}