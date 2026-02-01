#include <iostream>
#include <random>

void initialize(int array[], const int size, int min, int max);
void show_array(const int array[], int size);
int sumAllElements(const int array[], int size);
double getAverage(const int array[], int size);
int random_number(int min, int max);
void show_info(const int array[], int size);

int main()
{
	const int SIZE1 = 5, SIZE2 = 6, SIZE3 = 4;
	int range_min = 1, range_max = 25;

	int array1[SIZE1], array2[SIZE2], array3[SIZE3];

	initialize(array1, SIZE1, range_min, range_max);
	initialize(array2, SIZE2, range_min, range_max);
	initialize(array3, SIZE3, range_min, range_max);

	show_info(array1, SIZE1);
	show_info(array2, SIZE2);
	show_info(array3, SIZE3);
	
	return 0;
}

void show_info(const int array[], int size)
{
	show_array(array, size);
	std::cout << "Sum of all elements: " << sumAllElements(array, size) << '\n';
	std::cout << "Average value of all elements: " << getAverage(array, size) << '\n';
}

void initialize(int array[], int size, int min, int max)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = random_number(min, max);
	}
}

void show_array(const int array[], int size)
{
	std::cout << "Elements in array:\n";

	for (int i = 0; i < size; i++)
		std::cout << array[i] << '\t';
	std::cout << '\n';
}

int random_number(int min, int max)
{
	static std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dist(min, max);

	return dist(gen);
}

int sumAllElements(const int array[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += array[i];
	return sum;
}

double getAverage(const int array[], int size)
{
	double avg = static_cast<double>(sumAllElements(array, size)) / size;
	return avg;
}