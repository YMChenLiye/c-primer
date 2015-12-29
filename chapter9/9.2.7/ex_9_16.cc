#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::cout;
using std::endl;
using std::list;
bool equal(list<int> l1,vector<int> v2)
{
	vector<int> v1(l1.begin(),l1.end());
	return v1==v2;
}

int main()
{
	list<int> l1(10,1);
	vector<int> v2(10,1);
	cout<<equal(l1,v2)<<endl;

	return 0;
}
