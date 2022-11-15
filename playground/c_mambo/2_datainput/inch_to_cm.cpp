#include <iostream>

int main(void)
{
	int	inch;

	std::cout << "Enter your inches: ";
	std::cin >> inch;
	std::cout << inch;
	std::cout << " in = ";
	std::cout << inch * 2.54;
	std::cout << " cm\n";
	return (0);
}