#include <iostream>
#include <sstream>
#include <string>
using std::istream;

istream & foo(istream &is)
{
	std::string buf;
	while(is>>buf)
	{
		std::cout<<buf<<std::endl;
	}
	is.clear();
	return is;
}

int main()
{
	std::istringstream iss("hello");
	foo(iss);
	return 0;
}
