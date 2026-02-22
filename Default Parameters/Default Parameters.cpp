#include <iostream>

void makeSandwich(const char bread[] = "Whole wheat", const char filling[] = "Ham and cheese");

int main()
{
	char bread[20];
	char filling[30];

	std::cout << "Make your own sandwich!\n";
	std::cout << "Type of bread you'll use: ";
	std::cin.getline(bread, 20);
	std::cout << "Filling you'll use: ";
	std::cin.getline(filling, 30);

	makeSandwich();
	makeSandwich(bread);
	makeSandwich(bread, filling);

	return 0;
}

void makeSandwich(const char bread[], const char filling[])
{
	std::cout << "\nType of bread: " << bread << "\nFilling: " << filling << "\n";
}