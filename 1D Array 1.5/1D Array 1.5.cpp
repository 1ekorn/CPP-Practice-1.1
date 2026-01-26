#include <iostream>

int main()
{
	const unsigned int SIZE = 7;

	int array[SIZE] = { 1,5,10,15,20,25,30 };

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << array[i];
		if (i != SIZE - 1)
			std::cout << ", ";
		else
			std::cout << ". ";
	}

	return 0;
}