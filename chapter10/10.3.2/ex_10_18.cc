#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
string make_plural(size_t ctr,const string &word, const string &ending)
{
	return (ctr==1) ? word : word+ending;//make_plural(wc, "word ", "s ")当输入中文本中
	//word数大于一是在word后加s，为words为word的复数！
}
void elimDups(vector<string> &words)
{
	sort(words.begin(),words.end());
	auto end_unique=unique(words.begin(),words.end());
	words.erase(end_unique,words.end());
}

void biggies(vector<string> words,vector<string>::size_type sz)
{
	elimDups(words);
/*	sort(words.begin(),words.end(),
			[](const string &a,const string &b)
			{return a.size()<b.size();});
	auto wc=find_if(words.begin(),words.end(),
			[sz](const string &a)
			{return a.size() >=sz;});
*/
	auto wc=partition(words.begin(),words.end(),
			[sz](const string &a)
			{return a.size()<sz;});
	int count=words.end()-wc;
	cout<<count<<" "<<make_plural(count,"word","s")<<" of length "<<sz<<" or longer"<<endl;

	for_each(wc,words.end(),
			[](const string &s)
			{cout<<s<<" ";});
	cout<<endl;

}

int main()
{
	vector<string> vec;
	string word;
	while(cin>>word) vec.push_back(word);

	biggies(vec,4);

	return 0;
}


