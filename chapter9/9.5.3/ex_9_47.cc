#include <iostream>
#include <string>

void foo(const string &s)
{
	string numbers("0123456789");
	for(size_t pos=0;pos!=string::npos;++pos)
	{
		pos=s.find_first_of(numbers,pos);
		cout<<s[pos]<<" ";
	}

