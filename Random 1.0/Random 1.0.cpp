#include <iostream>
#include <limits>
#include <cstdlib>
#include <ctime>

int input();
bool playGame(int targetNumber, int maxAttempts, int& attempts);

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));

	int targetNumber = rand() % 100;
	int maxAttempts = 6;
	int attempts = 0;

	std::cout << "Game: \"Guess a number!\" \nNumber of attempts you have -> " << maxAttempts << "\n\n";

	bool isGuessed = playGame(targetNumber, maxAttempts, attempts);

	std::cout << (isGuessed ? "\nYou guessed a number!" : "\nYou lose!") << '\n';
	std::cout << "Number to guess " << targetNumber << '\n';
	std::cout << "Number of attempts: " << attempts << '\n';
}

int input()
{
	int userNum = 0;

	while (!(std::cin >> userNum) || (userNum < 0 || userNum > 99))
	{
		std::cout << "Wrong input! Try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return userNum;
}
bool playGame(const int targetNumber, const int maxAttempts, int& attempts)
{
	int userNum = 0;

	for (int i = 0; i < maxAttempts; i++)
	{
		attempts++;

		std::cout << "That is attempt #" << attempts << "\nEnter a number(0 to 99): ";
		userNum = input();

		if (userNum == targetNumber)
			return true;
		std::cout << ((userNum < targetNumber) ? "Number to guess is bigger!" : "Number to guess is smaller!") << "\n\n";
	}
	return false;
}