#include <iostream>
//#include <cstdlib>

int main()
{
	constexpr size_t array_size =10;
	int ia[array_size];
	for(auto i:ia)
	{
		std::cout<<i<<std::endl;
	}
	std::cout<<std::endl;

	for(size_t ix=1;ix<=array_size;ix++)
	{
		ia[ix]=ix;
//		std::cout<<ix<<std::endl;
//		std::cout<<ia[ix]<<std::endl;
	}
	
	for(auto i:ia)
	{
		std::cout<<i<<std::endl;
	}
	return 0;
}
