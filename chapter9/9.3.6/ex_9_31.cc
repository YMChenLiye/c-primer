#include <iostream>
#include <forward_list>
#include <list>

using std::cout;using std::endl;using std::list;using std::forward_list;

void remove_even_duplicate_odd(list<int> &li)
{
	auto iter=li.begin();
	while(iter!=li.end())
	{
		if(*iter %2)
		{
			iter=li.insert(iter,*iter);
			iter++;
			iter++;
		}
		else
		{
			iter=li.erase(iter);
		}
	}
	return ;
}

void remove_even_duplicate_odd(forward_list<int> &fli)
{
	auto curr=fli.begin();
	auto prev=fli.before_begin();
	while(curr!=fli.end())
	{
		if(*curr %2)
		{
			curr=fli.insert_after(curr,*curr);
			++curr;
			prev++;
			prev++;
		}
		else
		{
			curr=fli.erase_after(prev);
		}
	}
	return ;
}

int main()
{
	list<int> li{1,2,3,4,5,6,7,8};
	forward_list<int> fli{1,2,3,4,5,6,7,8};
	remove_even_duplicate_odd(li);

	remove_even_duplicate_odd(fli);

	for(auto i:li) cout<<i<<" ";
	cout<<endl;
	for(auto i:fli) cout<<i<<" ";
	cout<<endl;

	
	return 0;
}
