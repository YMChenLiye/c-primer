#include <iostream>
#include <list>
#include <deque>

using std::cout;using std::endl;using std::list;using std::deque;

int main()
{
	list<int> li={1,2,3,4,5,6,7,8,9};
	deque<int> even;
	deque<int> odd;

	for(auto iter=li.begin();iter!=li.end();iter++)
	{
		if((*iter % 2)==0)
		{
			even.push_back(*iter);
		}
		else
		{
			odd.push_back(*iter);
		}
	}

	for(auto i:even)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(auto i:odd)
	{
		cout<<i<<" ";
	}

	cout<<endl;

	return 0;
}
