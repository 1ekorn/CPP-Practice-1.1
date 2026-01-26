#include <iostream>

int main()
{
	const unsigned int SIZE = 5;
	
	int firstArray[SIZE] = { 3,5,7,11,17 };
	int secondArray[SIZE] = { 4,7,9,12,23 };
	int thirdArray[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		thirdArray[i] = firstArray[i] + secondArray[i];

		std::cout << firstArray[i] << '+' << secondArray[i] << '=';
		std::cout << thirdArray[i] << '\n';
	}

	return 0;
}