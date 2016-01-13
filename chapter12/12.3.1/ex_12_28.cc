#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <fstream>
#include <string>
using std::string;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::map;
using std::set;
using std::istringstream;

int main()
{
	ifstream in("storyDataFile");
	string line;
	vector<string> file;
	map<string,set<size_t>> wm;
	int curr=0;
	while(getline(in,line))
	{
		file.push_back(line);
		++curr;
		istringstream ss(line);
		string word;
		while(ss>>word)
		{
			wm[word].insert(curr);
		}
	}


	while(true)
	{
		cout<<"please enter the word you want to search or enter q to quit!"<<endl;
		string word;
		cin>>word;
		if(word=="q") break;


		cout<<word<<" occurs "<<wm[word].size()<<" times"<<endl;
		for(auto i:wm[word])
		{
			cout<<"line "<<i<<" : "<<file[i-1]<<endl;
		}

	}

	return 0;
}
