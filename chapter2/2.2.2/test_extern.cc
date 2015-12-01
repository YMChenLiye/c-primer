#include <iostream> 


int main()
{

//	extern int i=10;   error: ‘i’ has both ‘extern’ and initializer
	extern int i;//    can run success!!
	return 0;

}
