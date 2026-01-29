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

	for (int i = textSize; i >= 0; i--)
		std::cout << string[i];

	return 0;
}

// Programm outputs the text you entered in reversed order