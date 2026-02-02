#include <iostream>

bool areEqual(const int array1[], const int array2[], int size1, int size2);

int main()
{
	const int SIZE1 = 6, SIZE2 = 6;

	int array1[SIZE1]{ 1, 2, 3, 3, 4, 5 };
	int array2[SIZE2]{ 1, 2, 3, 3, 4, 5 };

	bool similar = areEqual(array1, array2, SIZE1, SIZE2);
	std::cout << (similar ? "Arrays are identical" : "Arrays are not identical") << '\n';
}

bool areEqual(const int array1[], const int array2[], int size1, int size2)
{
	if (size1 != size2)
		return false;

	for (int i = 0; i < size1; i++)
		if (array1[i] != array2[i])
			return false;

	return true;
}