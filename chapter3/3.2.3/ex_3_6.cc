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
	for(char & c:str)
	{
		c='X';
	}
	cout<<"now your sting is being "<<str<<endl;

	return 0;
}
