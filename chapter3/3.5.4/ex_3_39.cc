#include <iostream>
#include <string>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str1="hello";
	string str2="hi";
	if(str1==str2)
	{
		cout<<"same as"<<endl;
	}
	else if(str1<str2)
	{
		cout<<"str1 < str2"<<endl;
	}
	else
	{
		cout<<"str1 > str2"<<endl;
	}

	char cstr1[]="hello";
	char cstr2[]="hello";
	if(strcmp(cstr1,cstr2)==0)
	{
		cout<<"same"<<endl;
	}
	else if(strcmp(cstr1,cstr2)<0)
	{
		cout<<"cstr1 < cstr2"<<endl;
	}
	else
	{
		cout<<"cstr1 > cstr2"<<endl;
	}

	return 0;
}
