#include <iostream>
#include <vector>
#include <list>

using std::cout;using std::endl;using std::vector;using std::list;using std::end;


int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int> vi(ia,end(ia));
	list<int> li(ia,end(ia));
	
	for(auto iter=vi.begin();iter!=vi.end();)
	{
		if(*iter % 2 ==0)
		{
			iter=vi.erase(iter);
		}
		else
		{
			++iter;
		}
	}

	
	for(auto iter=li.begin();iter!=li.end();)
	{
		if(*iter % 2 !=0)
		{
			iter=li.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	
	for(auto i:vi) cout<<i<<" ";
	cout<<endl;
	for(auto i:li) cout<<i<<" ";
	cout<<endl;


	return 0;
}
