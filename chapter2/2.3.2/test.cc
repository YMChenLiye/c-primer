#include <iostream>

int main()
{
	int i=10;
	int &ri=i;
	std::cout<<i << " " <<ri<< std::endl;
	int *pi=&i;
	int *pri=&ri;

	std::cout << *pi << " "<< *pri << std::endl;

	return 0;
}
