#include <iostream>
#include <string>
using std::istream;

istream & foo(istream &io)
{
	std::string buf;
	while(io>>buf)
	{
		std::cout<<buf<<" "<<std::endl;
	}
	io.clear();
	return io;
}

int main()
{
	istream& is=foo(std::cin);
	std::cout<<is.rdstate()<<std::endl;

	return 0;
}
