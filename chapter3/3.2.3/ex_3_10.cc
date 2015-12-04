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
	string result;
	for(auto &c:str)
	{
		if(!ispunct(c))
		{
			result += c;
		}
	}
	cout << result<<endl;

	return 0;
}
