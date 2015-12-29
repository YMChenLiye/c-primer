#include <iostream>
#include <vector>
#include <list>
using std::vector;
using std::cout;
using std::endl;
using std::list;

int main()
{
	list<int> l1(5,5);
	vector<int> v1(5,4);

	vector<double> v2(v1.begin(),v1.end());
	for(auto i:v2) cout<<i<<" ";
	cout<<endl;

	vector<double> v3(l1.begin(),l1.end());
	for(auto i:v3) cout<<i<<" ";
	cout<<endl;

	return 0;
}
