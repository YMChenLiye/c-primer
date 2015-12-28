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
	string word;
	while(in>>word)
	{
		vs.push_back(word);
	}

	for(auto &i:vs)
	{
		std::cout<<i<<std::endl;
	}

	return 0;
}
