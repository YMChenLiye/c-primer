#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::vector;
using std::istringstream;
using std::ifstream;
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

int main(int argc,char **argv)
{
	ifstream input(argv[1]);
	vector<string> vs;
	string line;
	while(getline(input,line))
	{
		vs.push_back(line);
	}

	for(auto s:vs)
	{
		istringstream iss(s);
		foo(iss);
	}
	return 0;
}

