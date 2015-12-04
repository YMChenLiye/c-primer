#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	string s="Hello world";
	for(char &c:s)
	{
		c=toupper(c);
	}
	cout<<s<<endl;

}
