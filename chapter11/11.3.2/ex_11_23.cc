#include <iostream>
#include <string>
#include <vector>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;
using std::multimap;
int main()
{
	multimap<string,string> families;
	for(string ln,cn;cin>>ln>>cn;families.insert({ln,cn}));

	for (auto const family : families)
	{
		cout << family.first << ":";
		cout << family.second << "\n";
		cout << "\n";
	}

	return 0;
}
