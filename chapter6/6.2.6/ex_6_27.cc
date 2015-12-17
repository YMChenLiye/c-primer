#include <iostream>
//#include <initializer_list>

using std::initializer_list;

int sum(initializer_list<int> lst)
{
	int sum=0;
	for(auto i:lst)
	{
		sum += i;
	}

	return sum;
}


int main()
{
	
	std::cout<<sum({1,2,3,4,5})<<std::endl;

	return 0;
}
