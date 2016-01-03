#include <iostream>
#include <string>
using std::string;
using std::cout;
void foo(const string &s)
{
	string numbers("0123456789");
	for(size_t pos=0;;pos++)
	{
		pos=s.find_first_of(numbers,pos);
		if(pos==string::npos)
		{
			cout<<std::endl;
			return;
		}
		cout<<s[pos]<<" ";
	}
	cout<<std::endl;
}


void foo1(const string &s)
{
	string numbers("0123456789");
	for(size_t pos=0;;pos++)
	{
		pos=s.find_first_not_of(numbers,pos);
		if(pos==string::npos)
		{
			cout<<std::endl;
			return;
		}
		cout<<s[pos]<<" ";\
	}
}

int main()
{
	 string str{ "ab2c3d7R4E6" };
	 foo(str);
	 foo1(str);
	 return 0;
}

