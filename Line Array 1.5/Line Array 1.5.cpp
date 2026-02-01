#include <iostream>

int main()
{
	const int STRING_SIZE = 100;
	char firstString[STRING_SIZE], secondString[STRING_SIZE];

	std::cout << "Enter first line: ";
	std::cin.getline(firstString, STRING_SIZE);
	std::cout << "Enter second line: ";
	std::cin.getline(secondString, STRING_SIZE);

	for (int i = 0; i < STRING_SIZE; i++)
	{
		if (firstString[i] != secondString[i]) {
			std::cout << "Lines are not identical!\n";
			break;
		}
		else{
			std::cout << "Lines are identical!\n";
			break;
		}
	}

	return 0;
}

// Checks if both input strings are identical