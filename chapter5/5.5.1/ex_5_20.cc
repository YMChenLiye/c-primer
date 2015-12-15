#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str,currStr;
	char flag;
	while(cin>>str)
	{
		if(str==currStr)
		{
			flag='g';
			break;
		}
		currStr=str;
	}
	if(flag=='g')
	{
		cout<<"there are the same word "<<str<<endl;
	}
	else
	{
		cout<<"no word was repeate"<<endl;
	}

	return 0;
}
