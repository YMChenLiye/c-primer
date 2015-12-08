#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	//array
	int arr1[10];
	for(int i=0;i<10;i++)
	{
		arr1[i]=i;
	}
	int arr2[10];
	for(int i=0;i<10;i++)
	{
		arr2[i]=arr1[i];
	}


	//vector
	vector<int> ivec1(10,0);
	for(int i=0;i<10;i++)
	{
		ivec1[i]=i;
	}
	
	vector<int> ivec2=ivec1;

	return 0;

}
