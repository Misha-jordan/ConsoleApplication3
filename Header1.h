#pragma once
#include <iostream>
#include "Header1.h"


int main() {
	srand(static_cast<unsigned int>(time(0))); //Seed for random color selection
	Circle c1;
	std::cout << "Circumference: " << c1.calculateCircumference() << std::endl;
	std::cout << "Area: " << c1.calculateArea() << std::endl;

	Circle c2(3, 4, 1.5, "green");
	std::cout << "Circumference: " << c2.calculateCircumference() << std::endl;
	std::cout << "Area: " << std::endl;

	c1.printToFile("circle_info.txt");

	c2.changeRandomColor();
	std::cout << "New color: " << c2.getColor() << std::endl;

	return 0;
}