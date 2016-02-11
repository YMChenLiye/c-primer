#include <iostream>
#include <string>

using namespace std;

	template<typename T,unsigned N>
constexpr unsigned get_size(const T(&)[N])
{
	return N;
}

int main()
{
	std::string s[] = { "sss" };
	std::cout << get_size(s) << std::endl;

	char c[] = "s";
	std::cout << get_size(c) << std::endl;
	// the output is 2, as '\0' is added at the end of the array
	return 0;
}
