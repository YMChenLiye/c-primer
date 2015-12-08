#include <iostream>

int main()
{
	constexpr size_t sz=5;
	int arr[sz]={1,2,3,4,5};
	int *ip=arr;
	int *ip2=ip+4;

	int *p =arr+sz;
	int *p2=arr +102;
	std::cout<<*p<<" "<<*p2<<std::endl;

	return 0;
}
