#include "String.h"
std::allocator<char> String::alloc;
int main()
{
	std::vector<String> vec;
	String s1("Hello");
	String s2("World");
	vec.push_back(s1);
	vec.push_back(s2);

	return 0;
	return 0;
}
