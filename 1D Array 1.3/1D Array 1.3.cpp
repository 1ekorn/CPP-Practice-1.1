#include <iostream>

int main()
{
	const int SIZE = 30;

	int phibNumber[30] = { 0, 1 };

	for (int i = 2; i < SIZE; i++)
	{
		phibNumber[i] = (phibNumber[i - 1] + phibNumber[i - 2]);
	}

	for (int i = 0; i < SIZE; i++)
		std::cout << phibNumber[i] << ' ';
}