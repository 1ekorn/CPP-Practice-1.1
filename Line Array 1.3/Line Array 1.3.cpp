#include <iostream>

int main()
{
	const int STRING_SIZE = 100;

	char string[STRING_SIZE];

	std::cout << "Enter a text: ";
	std::cin.getline(string, STRING_SIZE);

	char targetChar, replacementChar;
	
	int textSize = 0;

	for (int i = 0; string[i] != '\0'; i++)
		textSize++;

	std::cout << "Enter the symbol you want to change > replacement symbol: ";
	std::cin >> targetChar >> replacementChar;

	for (int i = 0; i < textSize; i++)
	{
		if (string[i] == targetChar)
			string[i] = replacementChar;
	}

	std::cout << string << '\n';

	return 0;
}

// Replaces a target character with a new one in the input sentence