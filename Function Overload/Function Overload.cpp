#include <iostream>

double calculateArea(double length, double width);
double calculateArea(double sideLength);

int main()
{
	double squareArea = calculateArea(5);
	std::cout << "Square area (5 units): " << squareArea << '\n';
	double ractangleArea = calculateArea(4, 6);
	std::cout << "Ractangle area (4 by 6 units): " << ractangleArea << '\n';
}

double calculateArea(double sideLength)
{
	return sideLength * sideLength;
}

double calculateArea(double length, double width)
{
	return length * width;
}