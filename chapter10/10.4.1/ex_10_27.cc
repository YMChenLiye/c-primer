#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using std::cout;
using std::cin;
using std::list;
using std::vector;
using std::string;
using std::endl;

int main()
{
	vector<string> vec;
	string word;
	while(cin>>word) vec.push_back(word);
	for(auto i:vec) cout<<i<<" ";
	cout<<endl;
	list<string> lst;
	std::unique_copy(vec.begin(),vec.end(),back_inserter(lst));
	for(auto i:lst) cout<<i<<" ";
	cout<<endl;

	return 0;
}
