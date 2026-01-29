#include <iostream>

int main()
{
	const int STRING_SIZE = 100;
	char string[STRING_SIZE];

	std::cout << "Enter a sentence: ";
	std::cin.getline(string, STRING_SIZE);

	int textSize = 0;

	for (int i = 0; string[i] != '\0'; i++)
		textSize++;

	std::cout << "Size of text: " << textSize;

	return 0;
}

// Program calculates the number of characters in the text you enter