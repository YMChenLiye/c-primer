#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std::placeholders;
using std::cout;
using std::endl;
using std::vector;
using std::string;

bool check_size(const string &s,size_t sz)
{
	return s.size()<sz;
}

int main()
{
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	string str="hello";
	auto i=find_if(vec.begin(),vec.end(),bind(check_size,str,_1));
	cout<<*i<<endl;
	return 0;
}
