#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::ifstream;
int main()
{
	ifstream in("in.txt");
	vector<string> vs;
	string line;
	while(getline(in,line))
	{
		vs.push_back(line);
	}

	for(auto &i:vs)
	{
		std::cout<<i<<std::endl;
	}

	return 0;
}
