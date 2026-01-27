#include <iostream>

int main()
{
	const int FIRST_D = 2, SECOND_D = 3, THIRD_D = 4, FOURTH_D = 5;
	char multiArray[FIRST_D][SECOND_D][THIRD_D][FOURTH_D];
	char symbol = 'a';

	for (int i = 0; i < FIRST_D; i++)
	{
		for (int j = 0; j < SECOND_D; j++)
		{
			for (int t = 0; t < THIRD_D; t++)
			{
				for (int n = 0; n < FOURTH_D; n++)
				{
					multiArray[i][j][t][n] = symbol;
					std::cout << multiArray[i][j][t][n] << ' ';
					symbol++;
				}
			}
		}
	}

	return 0;
}