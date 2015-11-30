#include <iostream>

int main()
{
	std::cout << " please enter two number " << std::endl;
	int val1,val2;
	std::cin >> val1 >> val2;
	if(val1>val2)
	{
		int tmp=val1;
		val1=val2;
		val2=tmp;
	}
	//promit val1 <= val2

	int val=val1;
	while(val <= val2)
	{
		std::cout << val << std::endl;
		val++;
	}

	return 0;
	
}
