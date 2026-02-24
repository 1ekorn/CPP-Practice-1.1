#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void showValue(T value);

template <typename T>
void showValue(T arr[], int size, char symbol);

template <typename T>
void initializeArr(T array[], int size);

int getRandNum();

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	const int SIZE = 20;
	int arr[SIZE];

	showValue(getRandNum());
	showValue(static_cast<char>(getRandNum()));
	showValue(15.5);

	std::cout << '\n';

	initializeArr(arr, SIZE);
	showValue(arr, SIZE, '-');
}

template <typename T>
void showValue(T value)
{
	std::cout << value << '\n';
}

template <typename T>
void showValue(T arr[], int size, char symbol)
{
	for (int i = 0; i < size; i++) 
	{
		std::cout << arr[i];
			if (i != size - 1)
				std::cout << symbol;
	}
	std::cout << '\n';
}

template <typename T>
void initializeArr(T array[], int size)
{
	for (int i = 0; i < size; i++)
		array[i] = getRandNum();
}

int getRandNum()
{
	return rand() % 100;
}