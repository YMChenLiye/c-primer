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
	vector<string> svec;
	string currString;
	while(cin>>currString)
	{
		svec.push_back(currString);
	}

	for(auto &s:svec)
	{
		cout<<s<<endl;
	}

	return 0;
}
