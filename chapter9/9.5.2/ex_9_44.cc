#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void foo(string &s,const string &oldVal,const string &newVal)
{
	for(size_t pos=0;pos<s.size()-oldVal.size();)
	{
		if(s[pos]==oldVal[0] && oldVal==s.substr(pos,oldVal.size()))
		{
			s.replace(pos,oldVal.size(),newVal);
			pos+=newVal.size();
		}
		else
		{
			++pos;
		}
	}
}

int main()
{
	string str{ "To drive straight thru is a foolish, tho courageous act." };
	foo(str, "tho", "though");
	foo(str, "thru", "through");
	cout << str << endl;
	return 0;
}




