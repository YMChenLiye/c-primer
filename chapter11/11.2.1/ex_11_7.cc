#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;

int main()
{
	map<string,vector<string>> families;
	for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q";)
		for (string cn; cout << "|-Children's names:\n", cin >> cn && cn != "@q";)
			families[ln].push_back(cn);

	for (auto const& family : families)
	{
		cout << family.first << ":\n";
		for (auto const& child : family.second)
			cout << child << " ";
		cout << "\n";
	}

	return 0;
}
