#include <iostream>

int main()
{
	const int STRING_SIZE = 100;
	char string[STRING_SIZE];

	std::cout << "Enter a text: ";
	std::cin.getline(string, STRING_SIZE);

	int textSize = 0;

	for (int i = 0; string[i] != '\0'; i++)
		textSize++;
	int midpoint = textSize / 2;
	for (int i = 0, j = textSize - 1; i < midpoint && j > midpoint; i++, j--)
	{
		if (string[i] != string[j]){ 
			std::cout << "The text is not a palindrome"; 
			break;
	}
		if (i == midpoint - 1)
			std::cout << "The text is a palindrome";
	}

	return 0;
}

// Programm checks if text you entered is a palindrome