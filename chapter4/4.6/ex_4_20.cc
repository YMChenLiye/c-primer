#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> svec={"hello","hi"};
	vector<string>::iterator iter=svec.begin();
//ex_4_20.cc:15:11: error: ‘std::vector<std::basic_string<char> >::iterator’ has no member named ‘empty’
	if((*iter).empty())
	{
		cout<<"right"<<endl;
	}
	else
	{
		cout<<"..."<<endl;
	}

	return 0;
}
