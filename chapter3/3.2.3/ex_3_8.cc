#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	string str;
	cin>>str;
	decltype(str.size()) index=0;
	while(index<str.size())
	{
		str[index++]='X';
	}
	cout<<str<<endl;
	 return 0;

}
