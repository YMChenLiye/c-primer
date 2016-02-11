#include <iostream>
#include <vector>
#include <string>

using namespace std;

	template<typename T,unsigned N>
T* my_begin(T (&arr)[N])
{
	return arr;
}

	template<typename T,unsigned N>
T* my_end(T (&arr)[N])
{
	return arr+N;
}

int main()
{
	std::string s[] = { "sssss","ss","ss","ssssszzzz" };
	std::cout << *(my_begin(s)+1) << std::endl;
	std::cout << *(my_end(s) - 1) << std::endl;
	return 0;
}
