#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main()
{
	vector<int> ivec;
	int currItem;
	while(cin>>currItem)
	{
		ivec.push_back(currItem);
	}


	for(auto &i:ivec)
	{
		cout<<i<<endl;
	}

	return 0;
}
