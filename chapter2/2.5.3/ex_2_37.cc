#include <iostream>

int main()
{
	int a=3,b=4;
	decltype(a) c=a;
	decltype(a=b) d =a;//a=b  is not run,just now the type

	
	std::cout << a <<" "<<b<< " " <<c<< " " << d<< " "<< std::endl;
//print 3 4 3 3
	return 0;
}
