#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
	vector<string> strings;
	string tmp;
	while(cin>>tmp)
	{
		strings.push_back(tmp);
	}
	for(auto &i:strings)
	{
		for(auto &j:i)
		{
			j=toupper(j);
		}
	}
	int cnt=1;
	for(auto i:strings)
	{
		if(cnt>8)
		{
			cnt=1;
			cout<<endl;
		}
		cout<<i<<" ";
		++cnt;
	}
	return 0;
}
