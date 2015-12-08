#include <iostream>
#include <vector>


using std::endl;
using std::cout;
using std::vector;
using std::begin;
using std::end;

int main()
{
	int arr[5]={1,2,3,4,5};
	vector<int> ivec(begin(arr),end(arr));

	for(auto i:ivec)
	{
		cout<<i<<" ";
	}

	return 0;
}
