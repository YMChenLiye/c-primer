#include <iostream>

int main()
{
	long double ld=3.1415926;

//	int a{ld},b{ld};// warning: narrowing conversion of ‘ld’ from ‘long double’ to ‘int’ inside { } [-Wnarrowing]
	int c(ld),d(ld);
	int e=3.1415926;
	return 0;
}
