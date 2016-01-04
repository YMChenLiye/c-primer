#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{1,2,3,4,5};
	cout<<accumulate(vec.begin(),vec.end(),0)<<endl;

	return 0;
}
