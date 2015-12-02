#include <iostream>

int main()
{
	//std::cin >> int input_value;  ex_2_9.cc:5:14: error: expected primary-expression before ‘int’
	int i={3.14};
	//double salary = wage = 9999.99;  ex_2_9.cc:7:18: error: ‘wage’ was not declared in this scope
	int j=3.14;
	std::cout << i << "  " <<j << std::endl;
	return 0;
}
