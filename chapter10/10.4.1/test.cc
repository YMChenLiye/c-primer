#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using std::string;
int main()
{
	std::vector<string> vec{"hi","hi","hello","hi" };
	std::list<string> lst;

	std::unique_copy(vec.begin(), vec.end(), back_inserter(lst));
	for (auto i : lst)
		std::cout << i << " ";
	std::cout << std::endl;
}
