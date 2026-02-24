#include <iostream>
#include <random>
#include "functions.h"

int main()
{
	const int SIZE = 25;
	int arr[SIZE];
	int toFind;

	initializeArr(arr, SIZE);
	showArr(arr, SIZE);

	std::cout << "Enter a value to find: ";
	std::cin >> toFind;
	
	isPresent(arr, SIZE, toFind);
}