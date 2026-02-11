#include <iostream>

int accountsCount = 0;
double totalBalance = 0.0;

void createAccount()
{
	double initialBalance = 0;
	accountsCount++;

	std::cout << "You created new account\nEnter your initial balance: ";
	while (!(std::cin >> initialBalance))
	{
		std::cout << "Incorrect value! Try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	totalBalance += initialBalance;
}

bool deposit(double money)
{
	if (money <= 0)
		return false;

	totalBalance += money;
	return true;
}

bool withdraw(double money)
{
	if (money <= 0 || money > totalBalance)
		return false;

	totalBalance -= money;
	return true;
}

void showAccountCount()
{
	std::cout << "Number of account(s) you have: " << accountsCount << '\n';
}

void showTotalBalance()
{
	std::cout << "Total balance: " << totalBalance << '\n';
}