#include <iostream>

int larger(const int i,const int *p)
{
	return i>*p ? i : *p;
}


int main()
{
	int a=12;
	int i=10;
	int *p=&a;
	std::cout<<larger(i,p)<<std::endl;

	return 0;
}
