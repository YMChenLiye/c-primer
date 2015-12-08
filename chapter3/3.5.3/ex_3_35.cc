#include <iostream>
//#include <iterator>
using std::endl;
using std::cout;
using std::begin;
using std::end;


int main()
{
	int arr[5]={1,2,3,4,5};
	for(auto p=begin(arr);p!=end(arr);p++)
	{
		*p=0;
	}
	for(auto i:arr)
	{
		cout<<i<<" ";
	}

	return 0;
}
