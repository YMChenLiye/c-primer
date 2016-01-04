#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using std::string;
using std::list;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	list<string> lst{"hi","hello","hi","hi","hi1"};
	cout<<count(lst.begin(),lst.end(),"hi")<<endl;

	return 0;
}
