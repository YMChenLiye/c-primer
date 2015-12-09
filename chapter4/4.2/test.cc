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
	vector<string> svec={"haha","hi","lalala"};
	for(auto s:svec)
	{
		s="nihao";
		cout<<s<<endl;
	}

	for(auto s:svec)
	{
		cout<<s<<endl;
	}


	return 0;
}
