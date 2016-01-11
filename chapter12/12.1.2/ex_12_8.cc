//The p will convert to a bool , which means that the dynamic memory allocated has no chance to be freed. As a result, memory leakage will occur.
#include <iostream>
#include <memory>

bool b()
{
	int *p=new int;


	return p;
}


int main()
{
	std::cout<<	b()<<std::endl;
	return 0;
}
