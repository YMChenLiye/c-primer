#include <iostream>
#include <string>
#include <forward_list>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void foo(forward_list<string> &li, string str1, string str2)
{
	for(auto prev=li.before_begin(),curr=li.begin();;)
	{
		if(curr==li.end())
		{

			li.insert_after(prev,str2);
			return;
		}

		if(*curr==str1)
		{
			prev=curr;
			li.insert_after(prev,str2);
			return;
		}
		else
		{
			prev=curr;
			++curr;
		}
	}
	return ;
}

int main()
{
	string str1="hehe";
	string str2="hi";
	forward_list<string> li={"dsaf","dafdfggfx","hehe","ejhidjsf"};
	foo(li,str1,str2);
	for(auto i:li) cout<<i<<" ";
	cout<<endl;


	return 0;
}

