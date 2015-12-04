#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;


int main()
{
	cout<<"please enter 2 strings"<<endl;
	string str1,str2;
	cin>>str1>>str2;
	cout<<str1<<" "<<str2<<endl;
	if(str1.size()==str2.size())
	{
		cout<<"these 2 strings are equal"<<endl;
	}
	else if(str1.size()>str2.size())
	{
		cout<<"the first string is longer"<<endl;
	}
	else 
	{
		cout<<"the second string is longer"<<endl;
	}

	return 0;
}
