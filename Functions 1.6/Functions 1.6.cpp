#include <iostream>

void print_array(const int array[], int size);
void sort(int array[], int size);

int main()
{
	const int SIZE = 6;
	int array[SIZE] = { 2,4,1,5,6,3 };

	std::cout << "Elements before sorting:\n";
	print_array(array, SIZE);

	sort(array, SIZE);

	std::cout << "Elements after sorting:\n";
	print_array(array, SIZE);

	return 0;
}

void sort(int array[], int size)
{
	for (int i = 0; i < size; i++)
		for (int j = i; j < size; j++)
			if (array[i] > array[j])
				std::swap(array[i], array[j]);
}

void print_array(const int array[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << array[i] << '\t';
	std::cout << '\n';
}