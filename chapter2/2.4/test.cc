#include <iostream>

int main()
{
	int i=42;
	const int &r1=i;
	const int &r2=42;
	const int &r3=r1 * 2;
//	int &r4 =r1 *2;   9:14: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
	

	double dval=3.14;
//	int &ri=dval; test.cc:13:10: error: invalid initialization of reference of type ‘int&’ from expression of type ‘double’
	const int &ri=dval;//this statement can run successfully!!!
	
	return 0;
}
