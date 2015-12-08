#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::string;


int main()
{
	const char str1[]="hello";
	const char str2[]=" chen";//const is necessary,without this,constexpr will error;
	constexpr size_t len=strlen(str1)+strlen(str2)+1;
	char str3[len];
	strcpy(str3,str1);
	strcat(str3,str2);
	cout<<str3<<endl;

	return 0;
}

