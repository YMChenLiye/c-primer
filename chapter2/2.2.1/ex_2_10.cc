#include <iostream>

std::string global_str;
int global_int;
int main()
{
	int local_int;//undefined
	std::string local_str;
	std::cout << global_int << "lalala" << local_int << std::endl;
	std::cout << global_str << "lalala" << local_str << std::endl;


	return 0;

}

