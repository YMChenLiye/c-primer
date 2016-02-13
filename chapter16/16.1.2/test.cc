#include <iostream>
#include "Blob.h"
using std::cout;
using std::endl;

int main()
{	
	Blob<int> vec={0,1,2,3,4,5,6,7,8,9};
	for(size_t i=0;i!=vec.size();++i)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
	for(size_t i=0;i!=vec.size();++i)
	{
		vec[i]=i*i;
	}
	for(size_t i=0;i!=vec.size();++i)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;


	return 0;
}
