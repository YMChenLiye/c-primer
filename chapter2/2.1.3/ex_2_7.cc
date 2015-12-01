#include <iostream>

int main()
{
	std::cout << "who goes with F\145rgus?\012" <<std::endl;
	std::cout << 3.14e1L <<std::endl;
//	std::cout << 1024f  <<std::endl;  ex_2_7.cc:7:15: error: invalid suffix "f" on integer constant
	std::cout << 3.14L <<std::endl;
	return 0;

}
