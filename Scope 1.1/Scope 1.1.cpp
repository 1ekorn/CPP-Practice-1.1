#include <iostream>
#include "Bank.h"

void showMenu();
int enterMenuItem();
double inputMoneyAmount();
void transactionOperation(bool success);

int main()
{
	int menuItem;
	double money;

	do {
		showMenu();
		menuItem = enterMenuItem();
		switch (menuItem)
		{
		case 1: createAccount(); break;
		case 2: showTotalBalance(); break;
		case 3: showAccountCount(); break;
		case 4: transactionOperation(deposit(inputMoneyAmount()));  break;
		case 5: transactionOperation(withdraw(inputMoneyAmount())); break;
		}
	} while (menuItem != 0);

	return 0;
}

void showMenu()
{
	std::cout << "\n1 - Create new account \n2 - Show total balance \n3 - Show account quantity ";
	std::cout << "\n4 - Top-up your balance \n5 - Deduct from your balance \n0 - Exit\n\n";
}

int enterMenuItem()
{
	int choise;

	std::cout << "Enter menu item: ";
	while (!(std::cin >> choise) || (choise > 5 || choise < 0))
	{
		std::cout << "Wrong input! Try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << '\n';
	return choise;
}

double inputMoneyAmount()
{
	double money = 0;

	std::cout << "Enter amount of money: ";
	while (!(std::cin >> money))
	{
		std::cout << "Incorrect value: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	
	return money;
}
void transactionOperation(bool success)
{
	char toRepeat = 'N';

	if (success)
		std::cout << "Operation completed successfuly!\n";
	else
		std::cout << "Not enough money on your balance (or incorrect value)!\n";
}