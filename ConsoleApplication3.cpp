#include <iostream>  
#include <cmath>
#include <cstdlib>  
#include <ctime>
#include <fstream>
 
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

	Circle(double x_val, double y_val, double r_val, std::string c_val) {
		x = x_val;
		y = y_val;
		radius = r_val;
		color = c_val;
	}

	//Setter and Getter for x
	void setX(double x_val) {
		x = x_val;
	}
	double getX() {
		return x;
	}

	//Setter and Getter for y
	void setY(double y_val) {
		y = y_val;
	}
	double getY() {
		return y;
	}

	//Setter and Getter for radius
	void setRadius(double r_val) {
		radius = r_val;
	}
	double getRadius() {
		return radius;
	}

	//Setter and Getter for color
	void setColor(double c_val) {
		color = c_val;
	}
	std::string getColor() {
		return color;
	}

	double calculateCircumference() {
		return 2 * M_PI * radius;
	}

	double calculateArea() {
		return M_PI * radius * radius;
	}

	void printToFile(const std::string& filename) {
		std::ofstream file(filename);
		file << "Circle Information: " << std::endl;
		file << "Center: (" << x << ", " << y << ")" << std::endl;
		file << "Radius: " << radius << std::endl;
		file << "Color: " << color << std::endl;
		file << "Circumference: " << calculateCircumference() << std::endl;
		file << "Area: " << calculateArea() << std::endl;
		file.close();
	}

	void changeRandomColor() {
		std::string colors[] = { "red", "yellow", "orange", "blue", "green" };
		int randomIndex = rand() % 5;
		color = colors[randomIndex];
	}
};

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