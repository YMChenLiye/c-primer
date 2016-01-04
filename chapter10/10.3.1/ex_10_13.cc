#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

bool longerThanFive(const string &s)
{
	return s.size() >4;
}

int main()
{
	vector<string> words;
	string word;
	while(cin>>word) words.push_back(word);

	auto part=partition(words.begin(),words.end(),longerThanFive);
	for(auto iter=words.begin();iter!=part;iter++)
	{
		cout<<*iter<<" ";
	}

	cout<<endl;



	return 0;
}
