#pragma once
#include <string>

class Circle {
private:
	double x, y;
	double radius;
	std::string color;

public:
	Circle() {
		x = 0;
		y = 0;
		radius = 3;
		color = "white";
	}
};
