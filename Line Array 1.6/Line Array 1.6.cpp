#include <iostream>

int main()
{
	const int STRING_SIZE = 256;
	char string[STRING_SIZE];

	std::cout << "Enter a text: ";
	std::cin.getline(string, STRING_SIZE);

	int textSize = 0;

	for (int i = 0; string[i] != '\0'; i++)
		textSize++;

	for (int i = 0; i < textSize; i++)
	{
		if (strchr(".!?", string[i])) {
			i++; 
			continue;
		}
		if (string[i] == ' ')
			string[i + 1] = static_cast<int>(string[i + 1]) - 32;
	}

	std::cout << "Uppercase version:\n" << string << '\n';

	return 0;
}

// Programm prints the input line in uppercase