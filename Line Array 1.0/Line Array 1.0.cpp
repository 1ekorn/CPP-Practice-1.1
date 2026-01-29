#include <iostream>

int main()
{
	char word1[] = "Hello";
	char word2[] = "World";
	char sentence[15];

	int sentenceIndex = 0;

	for (int i = 0; i < 5; i++, sentenceIndex++)
		sentence[sentenceIndex] = word1[i];

	sentence[sentenceIndex++] = ' ';

	for (int i = 0; i < 5; i++, sentenceIndex++)
		sentence[sentenceIndex] = word2[i];

	sentence[sentenceIndex++] = '\0';

	std::cout << sentence << '\n';

	return 0;
}

// Program copies text from the first and second arrays into the third one