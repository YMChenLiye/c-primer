#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;
int main()
{
	map<string,size_t> word_count;
	vector<string> exclude={"The","But","And","Or","An","A"};
	string word;
	while(cin>>word)
	{
		if(find(exclude.begin(),exclude.end(),word)==exclude.end())
		{
			++word_count[word];
		}
	}
	for(auto i:word_count) cout<<i.first<<" occurs "<<i.second<<" times "<<endl;

	return 0;
}
