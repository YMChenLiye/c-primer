#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
	forward_list<int> li{1,2,3,4,5,6,7};

	for(auto prev=li.before_begin(),curr=li.begin();curr!=li.end();)
	{
		if(*curr % 2 !=0)
		{
			curr=li.erase_after(prev);
		}
		else
		{
			prev=curr;
			++curr;
		}
	}

	for(auto i:li) cout<<i<<" ";
	cout<<endl;

	return 0;
}
			
