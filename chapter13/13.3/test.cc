#include "ex_13_31.h"
#include <vector>
#include <algorithm>
using std::sort;
using std::vector;
int main()
{
	vector<HasPtr> vec;
	for(int i=10;i>0;i--)
	{
		vec.push_back(HasPtr("",i));
	}
	for(auto i:vec) cout<<i.i<<" ";
	cout<<endl;

	sort(vec.begin(),vec.end());
	for(auto i:vec) cout<<i.i<<" ";
	cout<<endl;
	
	return 0;
}
