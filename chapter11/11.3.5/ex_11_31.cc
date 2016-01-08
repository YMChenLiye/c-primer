#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::multimap;

int main()
{
	multimap<string,string> m={
		{ "alan", "DMA" },
		{ "pezy", "LeetCode" },
		{ "alan", "CLRS" },
		{ "wang", "FTP" },
		{ "pezy", "CP5" },
		{ "wang", "CPP-Concurrency" }
	};

	string author="wang";

	auto found=m.find(author);
	auto count=m.count(author);

	while(count)
	{
		m.erase(found);
		++found;
		--count;
	}

	for(auto i:m) cout<<i.first<<" "<<i.second<<endl;

	return 0;
}

