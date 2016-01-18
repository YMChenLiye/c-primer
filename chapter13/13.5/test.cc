#include "ex_12_30.h"
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;
using std::cin;
void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true)
	{
		cout<<"enter word to look for,or q to quit: ";
		string s;
		if(!(cin>>s) || s=="q" ) break;
		print(cout,tq.query(s))<<endl;
	}
}

int main()
{
	ifstream infile("storyDataFile");
	runQueries(infile);
	return 0;
}
