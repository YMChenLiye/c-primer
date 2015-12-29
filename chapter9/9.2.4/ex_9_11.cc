#include <iostream>
#include <vector>
using std::vector;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,1);
	vector<int> v4{1,2,3,4,5};
	
	vector<int> other{1,2,3,4};
	vector<int> v5(other);
	vector<int> v6(other.begin(),other.end());

	return 0;
}
