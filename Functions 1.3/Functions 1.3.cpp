#include <iostream>
#include <random>

int random_number(int min, int max);

int main()
{
    const int RANGE_MIN = 1, RANGE_MAX = 100;
    int randNumber;

    for (int i = 0; i < 5; i++)
    {
        randNumber = random_number(RANGE_MIN, RANGE_MAX);

        std::cout << randNumber << '\t';
    }
}

int random_number(int min, int max)
{
    static std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> dist(min, max);

    return dist(gen);
}