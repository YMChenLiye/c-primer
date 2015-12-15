#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<int> v1={0,1,1};
	vector<int> v2={0,1,1,2,3,5,8};

	for(auto begin1=v1.begin(),begin2=v2.begin();
			begin1!=v1.end();
			begin1++,begin2++)
	{
		if(*begin1 != *begin2)
		{
			cout<<"not"<<endl;
			return -1;
		}

	}
	cout<<"right"<<endl;

	return 0;
}
