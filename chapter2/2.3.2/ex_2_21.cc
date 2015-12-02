#include <iostream>

int main()
{
	int i=0;
//	double *dp=&i;  ex_2_21.cc:6:14: error: cannot convert ‘int*’ to ‘double*’ in initialization
//	int *ip=i;    ex_2_21.cc:7:10: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
	int *p =&i;

	return 0;

}
