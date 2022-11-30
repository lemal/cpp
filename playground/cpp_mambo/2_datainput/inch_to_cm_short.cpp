#include <iostream>

int main(void)
{
	int	inches;

	std::cout << "Enter inches: ";
	std::cin >> inches;
	std::cout << inches << " in = " << inches * 2.54 << " cm\n";
	return (0);
}