#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> vec{1,2,3,4,5,6};
	for_each(vec.rbegin(),vec.rend(),[](int i){cout<<i<<" ";});
	cout<<endl;
	auto end=vec.end();
	end--;
	for(;end!=vec.begin();--end)
	{
		cout<<*end<<" ";
	}
	cout<<*vec.begin()<<endl;
	return 0;
}
