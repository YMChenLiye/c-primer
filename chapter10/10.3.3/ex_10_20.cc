#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> vec;
	string word;
	while(cin>>word) vec.push_back(word);

	auto count=count_if(vec.begin(),vec.end(),[](const string &s){return s.size()>6;});
	cout<<count<<endl;

	return 0;
}
