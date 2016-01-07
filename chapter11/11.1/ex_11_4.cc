#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
int main()
{
	map<string,size_t> word_count;
	set<string> exclude={"The","But","And","Or","An","A"};
	string word;
	while(cin>>word)
	{
		for(auto &i:word) i=tolower(i);
		word.erase(remove_if(word.begin(),word.end(),ispunct),word.end());
		if(exclude.find(word)==exclude.end())
		{
			++word_count[word];
		}
	}
	for(auto i:word_count) cout<<i.first<<" occurs "<<i.second<<" times "<<endl;

	return 0;
}
