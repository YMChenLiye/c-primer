#include <iostream>

int main()
{
	int i=10;
	int *pi=&i;
	int j=15;
	pi=&j;
	*pi=16;

	return 0;
}
