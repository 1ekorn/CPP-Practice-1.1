#include <iostream>
#include <limits>

void DrawLine(char symbol, int quantity);
int get_quantity();

int main()
{
	char symbol;
	int quantity;

	std::cout << "Enter a symbol: ";
	std::cin >> symbol;
	std::cout << "Enter quantity: ";
	quantity = get_quantity();

	for (int i = 0; i < 5; i++)
	{
		DrawLine(symbol, quantity);
		std::cout << '\n';
	}
}

void DrawLine(char symbol, int quantity)
{
	for (int i = 0; i < quantity; i++)
		std::cout << symbol;
}
int get_quantity()
{
	int quantity;
	while (!(std::cin >> quantity) || quantity <= 0) 
	{
		std::cout << "Wrong input! Try again: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	return quantity;
}