#include <iostream>
#include <vector>
//#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
int main()
{
	vector<int> vec(5,1);
	for(auto i:vec) cout<<i<<" ";
	cout<<endl;
	fill_n(vec.begin(),4,0);
	for(auto i:vec) cout<<i<<" ";
	cout<<endl;
	return 0;
}
