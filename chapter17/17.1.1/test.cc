#include "TextQuery.h"
#include <fstream>
#include <iostream>
using namespace std;
void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while(true)
	{
		cout<<"enter word to look for,or q to quit: ";
		string s;
		if(!(cin>>s) || s=="q" ) break;
		print(cout,tq.query_return_tuple(s))<<endl;
	}
}

int main()
{
	ifstream infile("storyDataFile");
	runQueries(infile);
	return 0;
}
