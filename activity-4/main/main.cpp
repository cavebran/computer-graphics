#include "../lib/Obj/Obj.hpp"
#include "../lib/Ray/Ray.hpp"
#include <iostream>

int main() {
	Obj cube("cube");
	cube.readObjFromFile("activity-4/.objs/sword.obj");
	std::cout << cube.getNormal(0);

	// Ray ray(Vec3(0,0,0), Vec3(1,1,1));
	// std::cout << ray.at(10);

	// Obj test("test");
	// std::cout << test.getName();

	return 0;
}