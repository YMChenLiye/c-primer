#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &words)
{
	words.sort();
	words.unique();
}



int main()
{
	list<string> words;
	string word;
	while(cin>>word)
	{
		words.push_back(word);
	}
	for(auto i:words) cout<<i<<" ";
	cout<<endl;

	elimDups(words);
	for(auto i:words) cout<<i<<" ";
	cout<<endl;

	return 0;
}
