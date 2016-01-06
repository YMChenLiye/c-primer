#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::back_inserter;
int main()
{
	vector<int> vec{0,1,2,3,4,5,6,7,8,9};
	list<int> lst;
	copy(vec.begin()+3,vec.begin()+8,front_inserter(lst));
	for(auto i:lst) cout<<i<<" ";
	cout <<endl;

	return 0;
}
