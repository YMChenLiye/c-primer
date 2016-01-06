#include <iostream>
#include <vector>
#include <iterator>
#include <list>
using std::list;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{1,2,3,4,5,6,7,8,9};
	vector<int> v1,v2;
	list<int> l3;
	copy(vec.begin(),vec.end(),inserter(v1,v1.begin()));
	copy(vec.begin(),vec.end(),back_inserter(v2));
	copy(vec.begin(),vec.end(),front_inserter(l3));

	for(auto i:v1) cout<<i<<" ";
	cout<<endl;
	for(auto i:v2) cout<<i<<" ";
	cout<<endl;
	for(auto i:l3) cout<<i<<" ";
	cout<<endl;

	return 0;
}
