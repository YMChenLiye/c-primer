#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::placeholders::_1;
bool foo(const string &s,int sz)
{
	return s.size()>sz;
}

int main()
{
	vector<string> vec;
	string word;
	while(cin>>word) vec.push_back(word);

	auto count=count_if(vec.begin(),vec.end(),bind(foo,_1,6));
	cout<<count<<endl;

	return 0;
}
