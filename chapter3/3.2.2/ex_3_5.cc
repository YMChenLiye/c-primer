#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	string total_str,str;
	while(cin>>str)
	{
		total_str=total_str+(total_str.empty() ? "" : " ")+str;
	}
	cout<<total_str<<endl;

	return 0;
}
