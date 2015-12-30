#include <iostream>
#include <string>
#include <deque>

using std::cout;using std::endl;using std::string;using std::deque;using std::cin;

int main()
{
	deque<string> ds;
	string tmp;
	while(cin>>tmp)
	{
		ds.push_back(tmp);
	}

	for(deque<string>::iterator beg=ds.begin();beg!=ds.end();beg++)
	{
		cout<<*beg<<" ";
	}
	cout<<endl;

	return 0;
}
