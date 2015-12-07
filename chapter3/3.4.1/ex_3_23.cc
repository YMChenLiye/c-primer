#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
	vector<int> ivec(10,11);

	for(auto i=ivec.begin();i != ivec.end();i++)
	{
		*i=*i * 2;
	}

	for(auto i:ivec)
	{
		cout<<i<<endl;
	}

	return 0;
}
