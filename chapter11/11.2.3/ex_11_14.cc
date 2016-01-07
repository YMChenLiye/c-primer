#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
using std::pair;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;

int main()
{
	map<string,vector<pair<string,string>>> families;
	for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q";)
		for (string cn,birth; cout << "|-Children's names and birthdays :\n", cin >> cn >> birth && cn != "@q";)
			families[ln].push_back({cn,birth});

	for (auto const& family : families)
	{
		cout << family.first << ":\n";
		for (auto const& child : family.second)
			cout << child.first << " " << child.second<<" ";
		cout << "\n";
	}

	return 0;
}
