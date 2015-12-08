#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

bool equal(int *pb1,int *pe1,int *pb2,int *pe2)
{
	if(pe1-pb1 != pe2-pb2)
	{
		return false;
	}
	else
	{
		while(pb1 !=pe1)
		{
			if(*pb1!=*pb2)
			{
				return false;
			}
			pb1++;
			pb2++;
		}
		return true;
	}
}


int main()
{	
	int arr1[3]={1,2,3};
	int arr2[3]={1,2,4};

	if(equal(begin(arr1),end(arr1),begin(arr2),end(arr2)))
	{
		cout<<" the same"<<endl;
	}
	else
	{
		cout<<" different"<<endl;
	}
	

	vector<int> ivec1{1,2,3};
	vector<int> ivec2{1,2,3};
	if(ivec1==ivec2)
	{
		cout<<" the same"<<endl;
	}
	else
	{
		cout<<" different"<<endl;
	}

	return 0;
}

