#include <iostream>

void HelloD();
void HelloK();

int main()
{
	HelloD();
	HelloK();
	HelloK();
	HelloD();
	HelloK();

	return 0;
}

void HelloD()
{
	std::cout << "Hello Demian!\n";
}

void HelloK()
{
	std::cout << "Hello Kassy!\n";
}