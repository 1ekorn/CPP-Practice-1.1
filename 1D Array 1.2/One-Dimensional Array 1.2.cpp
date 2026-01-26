#include <iostream>

int main()
{
	const int SIZE = 3;
	double dailyTemp[SIZE];
	double avgTemp = 0, totalTemp = 0;

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Temp today: ";
		std::cin >> dailyTemp[i];
	}
	
	std::cout << '\n';

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Day " << i + 1 << " temp: " << dailyTemp[i] << '\n';
		totalTemp += dailyTemp[i];
	}
	avgTemp = totalTemp / SIZE;
	std::cout << "\nAverage temp: " << avgTemp << '\n';
}