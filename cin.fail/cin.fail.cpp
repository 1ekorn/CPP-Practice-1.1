#include <iostream>
#include <limits>

int main()
{
	int number = 0;

	while (true)
	{
		std::cout << "Enter a number: ";
		if (std::cin >> number) break;

		std::cout << "Wrong input! \n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	std::cout << "Programm finished successfuly!\n";

	return 0;
}