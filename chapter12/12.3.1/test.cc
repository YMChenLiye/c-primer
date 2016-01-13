#include "ex_12_27.h"

int main()
{
	ifstream in("storyDataFile");
	TextQuery tq(in);
	for(auto i:tq.file) cout<<i<<endl;
	string word;
	cout<<"enter your word which you want to search"<<endl;
	std::cin>>word;
//	for(auto i:tq.wm[word]) cout<<i<<endl;
	print(cout,tq.query(word));
	return 0;
}
