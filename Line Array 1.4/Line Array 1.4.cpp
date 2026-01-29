#include <iostream>
#include <cstring>

int main()
{
	const int STRING_SIZE = 260;
	int wordQuantity = 0;
	int textSize = 0;

	char string[STRING_SIZE];

	std::cout << "Enter a text: ";
	std::cin.getline(string, STRING_SIZE);


	for (int i = 0; string[i] != '\0'; i++)
		textSize++;

	for (int i = 0; i < textSize; i++)
	{
		if (strchr(" ", string[i]))
			wordQuantity++;
	}

	std::cout << "Number of words in text: " << wordQuantity << '\n';

	return 0;
}

// Programm calculates the number of words in text you entered