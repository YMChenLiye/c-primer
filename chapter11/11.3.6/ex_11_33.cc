#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
using std::istringstream;
using std::ifstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

map<string,string> buildMap(ifstream &file)
{
	map<string,string> trans_map;
	string key;
	string val;
	while(file>>key && getline(file,val))
	{
		trans_map[key]=val.substr(1);
	}
	return trans_map;
}

const string & transform(const string &word,map<string,string> &trans_map)
{
	auto iter=trans_map.find(word);
	if(iter!=trans_map.cend())
	{
		return iter->second;
	}
	else
	{
		return word;
	}
}


void word_transform(ifstream &map_file,ifstream &input)
{
	auto trans_map=buildMap(map_file);
	string text;
	while(getline(input,text))
	{
		istringstream stream(text);
		string word;
		while(stream>>word)
		{
			cout<<transform(word,trans_map)<<" ";
		}
		cout<<endl;
	}
}

int main(int argc,char **argv)
{
	ifstream map_file(argv[1]);
	ifstream input(argv[2]);

	word_transform(map_file,input);

	return 0;
}
