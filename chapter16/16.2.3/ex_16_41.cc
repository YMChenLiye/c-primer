#include <iostream>

template<typename T>
auto sum(T t1,T t2)->decltype(t1+t2)
{
	return t1+t2;
}

int main()
{
//	 auto s= sum(123456789123456789123456789123456789123456789, 123456789123456789123456789123456789123456789) ;
	 auto s=sum(123123,21342423);
	 std::cout<<s<<std::endl;

	 return 0;
}
