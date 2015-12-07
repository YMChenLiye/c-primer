#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> strings;
	for(string tmp;getline(cin,tmp);strings.push_back(tmp));

	for(auto i=strings.begin();i != strings.end();i++)
	{
		for(auto &j:*i)
		{
			if(isalpha(j))
			{
				j=toupper(j);
			}
		}
	}

	auto i=strings.cbegin();
	cout<<*i<<endl;
	return 0;
}
