#include <iostream>

int main()
{
	const int FIRST_D = 2, SECOND_D = 3, THIRD_D = 4;
	int multiDArray[FIRST_D][SECOND_D][THIRD_D] =
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };

	for (int i = 0; i < FIRST_D; i++)
	{
		for (int j = 0; j < SECOND_D; j++)
		{
			for (int t = 0; t < THIRD_D; t++)
				std::cout << multiDArray[i][j][t] << ' ';
			std::cout << '\n';
		}
		std::cout << '\n';
	}

	return 0;
}