#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	int tmp;
	vector<int> ivec;
	while(cin>>tmp)
	{
		ivec.push_back(tmp);
	}
	for(int i=0;i<(ivec.size()+1)/2;i++)
	{
		cout<<ivec[i]+ivec[ivec.size()-1-i]<<endl;
	}
	return 0;
}
