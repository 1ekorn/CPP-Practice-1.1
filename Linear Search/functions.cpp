#include "functions.h"
#include <random>

int getRandomNum(int min, int max)
{
	static std::mt19937 gen(std::random_device{}());
	std::uniform_int_distribution<> dist(min, max);
	return dist(gen);
}