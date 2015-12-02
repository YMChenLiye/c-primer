#include <iostream>

int main()
{
	const int v2=0;//v2 top
	int v1=v2;//v1 none
	int *p1=&v1,&r1=v1;//none
	const int *p2=&v2,*const p3 =&i,&r2=v2;//p2 low ,p3 both , r2 low

	return 0;
}
