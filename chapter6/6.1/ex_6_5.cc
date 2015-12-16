#include <iostream>

int abs(int val)
{
	return val<0 ? -val : val;
}


int main()
{
	std::cout<<abs(10)<<" "<<abs(-3)<<std::endl;

	return 0;
}
