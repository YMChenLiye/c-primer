#include <iostream>
#include <string>
#include <list>
using std::cout;using std::endl;using std::string;using std::list;using std::cin;

int main()
{
	list<string> ds;
	string tmp;
	while(cin>>tmp)
	{
		ds.push_back(tmp);
	}

	for(list<string>::iterator beg=ds.begin();beg!=ds.end();beg++)
	{
		cout<<*beg<<" ";
	}
	cout<<endl;

	return 0;
}
