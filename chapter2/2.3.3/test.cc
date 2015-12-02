#include <iostream>

int main()
{
	int i=42;
	int *p;
	int *&r=p;
//	int &*j=p;   test.cc:8:8: error: cannot declare pointer to ‘int&’

	return 0;

}
