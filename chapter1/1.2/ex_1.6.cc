#include <iostream>

int main()
{
	int v1=5; int v2=4;
	std::cout << " The sum of " <<v1;
			  << " and " << v2;
			  << " is " << v1 + v2 << std::endl;

	return 0;
}

//this is illegal;  ex_1.6.cc:7:6: error: expected primary-expression before ‘<<’ token
//how to fix it?  ----> delete some ';'
