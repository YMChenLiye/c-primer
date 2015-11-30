#include <iostream>

int main()
{
	std::cout << " Enter two numbers: ";
	std::cout << std::endl;
	int val1=0;int val2=0;
	std::cin >> val1;
	std::cin >> val2;
	std::cout << "The sum of ";
	std::cout << val1;
	std::cout << " and ";
	std::cout << val2;
	std::cout << " is ";
	std::cout << val1+val2;
	std::cout << std::endl;

	return 0;

}
