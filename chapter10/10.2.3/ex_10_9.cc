#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}


int main()
{
	vector<string> words;
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
