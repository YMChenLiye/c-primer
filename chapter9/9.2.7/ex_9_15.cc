#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

bool equal(vector<int> v1,vector<int> v2)
{
	return v1==v2;
}

int main()
{
	vector<int> v1(10,1);
	vector<int> v2(10,1);
	cout<<equal(v1,v2)<<endl;
	vector<int> v3(10,2);
	cout<<equal(v1,v3)<<endl;

	return 0;
}
