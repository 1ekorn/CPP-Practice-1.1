#include <iostream>

int main()
{
	const int LETTER_NUM = 26;
	int letter = 65, element = 0;
	char engAlph[LETTER_NUM];

	do {
		engAlph[element] = letter;
		std::cout << engAlph[element] << ' ';
		element++;
		letter++;
	} while (element < LETTER_NUM);

	/*for (int i = 0; i < LETTER_NUM; i++)
	{
		engAlph[i] = letter;
		letter++;
		std::cout << engAlph[i] << ' ';
	}*/
}