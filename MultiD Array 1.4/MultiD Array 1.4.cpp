#include <iostream>
#include <limits>
#include <string>

int main()
{
	const int SHOP = 2, GOODS = 3;

	int goodsQuantity[SHOP][GOODS];
	std::string shopNames[SHOP] = { "JustBuy", "At All Costs" };
	std::string goodsNames[GOODS] = { "oranges", "apples", "bananas" };

	for (int i = 0; i < SHOP; i++)
	{
		for (int j = 0; j < GOODS; j++)
		{
			std::cout << "Enter amount of " << goodsNames[j] << " in \"" << shopNames[i] << "\": ";
			while (!(std::cin >> goodsQuantity[i][j]) || goodsQuantity[i][j] < 0){
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Wrong input! Try again: ";
			}
		}
		std::cout << '\n';
	}

	for (int i = 0; i < SHOP; i++)
	{
		std::cout << shopNames[i] << " shop has:";
		for (int j = 0; j < GOODS; j++)
		{
			std::cout << "\n- " << goodsNames[j] << ": " << goodsQuantity[i][j];
		}
		std::cout << '\n';
	}
}