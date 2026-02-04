#include <iostream>
#include <random>

void print_array(const int array[], int size);
void sort(int array[], int size);
int random_number(int min, int max);
void initialize(int array[], int size, int min, int max);

int main()
{
	const int SIZE = 50;
	int rangeMin = 0, rangeMax = 50;
	int array[SIZE];
	initialize(array, SIZE, rangeMin, rangeMax);

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
	{
		int arrayIndex = i;
		for (int j = i + 1; j < size; j++)
			if (array[arrayIndex] > array[j])
				arrayIndex = j;
		std::swap(array[i], array[arrayIndex]);
	}
}

void initialize(int array[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = random_number(min, max);
	}
}

void print_array(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i != size - 1) std::cout << array[i] << ", ";
		else std::cout << array[i] << "; ";
	}
	std::cout << '\n';
}

int random_number(int min, int max)
{
	static std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dist(min, max);

	return dist(gen);
}