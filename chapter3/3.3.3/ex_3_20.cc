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
	for(int i=0;i<ivec.size();i=i+2)
	{
		int sum;
		if(i==ivec.size()-1)
		{
			sum=ivec[i];
		}
		else
		{
			sum =ivec[i]+ivec[i+1];
		}
		cout<<sum<<endl;

	}
	return 0;
}
