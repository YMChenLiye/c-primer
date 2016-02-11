#include <iostream>
#include <vector>
#include <list>
using namespace std;

	template <typename Iterator,typename Val>
Iterator myfind(Iterator beg,Iterator end,Val val)
{
	while(beg!=end)
	{
		if(*beg ==val)
		{
			return beg;
		}
		++beg;
	}
	return end;
}

int main()
{
	std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto is_in_vector = v.cend() != myfind(v.cbegin(), v.cend(), 5);
	std::cout << (is_in_vector ? "found\n" : "not found\n");

	std::list<std::string> l = { "aa", "bb", "cc", "dd", "ee", "ff", "gg" };
	auto is_in_list = l.cend() != myfind(l.cbegin(), l.cend(), "zz");
	std::cout << (is_in_list ? "found\n" : "not found\n");

	return 0;
}
