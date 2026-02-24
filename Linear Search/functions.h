#pragma once
#include <iostream>

int getRandomNum(int min, int max);

template <typename T>
void isPresent(T arr[], int size, T value)
{
	for (int i = 0; i < size; i++)
	{
		if (value == arr[i])
		{
			std::cout << "Value is in the array! Under index: " << i << '\n';
			return;
		}
	}
	std::cout << "Value is not in the array!\n";
}

template <typename T>
void initializeArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = getRandomNum(0, 100);
}

template <typename T>
void showArr(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
		if (i != size - 1)
			std::cout << '-';
	}
	std::cout << '\n';
}