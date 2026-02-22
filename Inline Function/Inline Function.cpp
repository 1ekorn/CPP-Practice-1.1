#include <iostream>

double PI = 3.14;
inline double circleArea(double radius);

int main()
{
	double radius, area;

	std::cout << "Enter radius of a circle: ";
	std::cin >> radius;

	area = circleArea(radius);
	std::cout << "Area of a circle: " << area << '\n';
}

inline double circleArea(double radius)
{
	return PI * radius * radius;
}