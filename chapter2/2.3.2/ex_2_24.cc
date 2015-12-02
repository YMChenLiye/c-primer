#include <iostream>

int main()
{
	int i =42;
	void *p =&i;//    Inherited from C, void* is a special pointer that may point to any type
//	long *lp=&i;   ex_2_24.cc:7:12: error: cannot convert ‘int*’ to ‘long int*’ in initialization

	return 0;

}
