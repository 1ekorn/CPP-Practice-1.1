#include <iostream>
//#include "Maths.cpp"

double Pi();
double circleArea(double radius);
double circleCircumference(double radius);

int main()
{
	double radius, area, circumference;

	std::cout << "Enter a radius: ";
	std::cin >> radius;

	area = circleArea(radius);
	circumference = circleCircumference(radius);

	std::cout << "Area of the circle: " << area << '\n';
	std::cout << "Circumference of the circle: " << circumference << '\n';
	std::cout << "Value of Pi: " << Pi() << '\n';

	return 0;
}