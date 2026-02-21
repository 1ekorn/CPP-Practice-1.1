#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>

int getUserInput();
void processRound(int user, int pc, int& userScore, int& computerScore);
void showFinalResult(int userScore, int computerScore);
void showMenu();

int main()
{
	srand(static_cast<unsigned>(time(nullptr)));
	std::cout << "Welcome to \"Rock, Paper, Scissors\" game!\n";
	
	int rock = 1, paper = 2, scissors = 3;
	std::string name[3] = { "rock", "paper", "scissors" };
	int userChoice = 0, computerChoice = 0;
	int userScore = 0, computerScore = 0;
	int min = 1, max = 3;
	int totalRounds = 3;


	for (int i = 0; i < totalRounds; i++)
	{
		showMenu();
		computerChoice = min + rand() % (max - min + 1);
		userChoice = getUserInput();
		std::cout << name[userChoice - 1] << " vs " << name[computerChoice - 1] << '\n';
		processRound(userChoice, computerChoice, userScore, computerScore);
	}
	showFinalResult(userScore, computerScore);
}

int getUserInput()
{
	int number;

	std::cout << "Enter: ";
	while(!(std::cin >> number) || (number < 1 || number > 3))
	{
		std::cout << "Wrong input! Try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	return number;
}

void processRound(int user, int pc, int& userScore, int& computerScore)
{
	if (user == pc)
	{
		std::cout << "\nRound result: draw\n\n";
		return;
	}

	else if ((user == 1 && pc == 3) || 
		(user == 2 && pc == 1) || 
		(user == 3 && pc == 2))
	{
		userScore++;
		std::cout << "\nRound result: you win!\n\n";
	}

	else
	{
		computerScore++;
		std::cout << "\nRound result: you lose!\n\n";
	}
}

void showFinalResult(int userScore, int computerScore)
{
	std:: cout << "Final result: \n";

	if (userScore > computerScore)
		std::cout << "You win! Congratulations :)\n";
	else if (userScore < computerScore)
		std::cout << "You lose :(\n";
	else
		std::cout << "It's draw!\n";
}

void showMenu()
{
	std::cout << "Choose: \n1. Rock \n2. Paper \n3. Scissors\n";
}