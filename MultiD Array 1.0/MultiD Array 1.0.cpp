#include <iostream>

int main()
{
	const int SIZE1 = 3, SIZE2 = 4;

	int multiArray[SIZE1][SIZE2];
	//manual initialization
	multiArray[0][0] = 1;
	multiArray[0][1] = 2;
	multiArray[0][2] = 3;
	multiArray[0][3] = 4;
	multiArray[1][0] = 5;
	multiArray[1][1] = 6;
	multiArray[1][2] = 7;
	multiArray[1][3] = 8;
	multiArray[2][0] = 9;
	multiArray[2][1] = 10;
	multiArray[2][2] = 11;
	multiArray[2][3] = 12;

	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
			std::cout << multiArray[i][j] << '\t';
		std::cout << '\n';
	}

	return 0;
}