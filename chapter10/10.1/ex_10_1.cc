#include <iostream>
#include <algorithm>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	vector<int> vec{1,1,2,3,4,1,2,1,1,1};
	cout<<count(vec.begin(),vec.end(),2)<<endl;
	return 0;
}
