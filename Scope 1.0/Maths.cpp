#include <iostream>

const double PI = 3.141;

static double radiusSquared(double radius)
{
	return radius * radius;
}
double circleArea(double radius)
{
	double area = PI * radiusSquared(radius);
	return area;
}

double circleCircumference(double radius)
{
	double circumference = 2 * PI * radius;
	return circumference;
}

double Pi()
{
	return PI;
}