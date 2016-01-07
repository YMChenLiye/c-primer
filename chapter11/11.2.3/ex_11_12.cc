#include <iostream>
#include <vector>
#include <string>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::pair;

int main()
{
	vector<pair<string,int>> vec;
	string str;
	int i;
	while(cin>>str>>i)
	{
		vec.push_back(make_pair(str,i));
	}

	for(auto i:vec) cout<<i.first<<" "<<i.second<<endl;

	return 0;
}
