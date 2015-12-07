#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
	vector<int> ivec;
	for(int tmp;cin>>tmp;ivec.push_back(tmp));

	for(auto i=ivec.cbegin();i != ivec.cend();i=i+2)
	{
		int sum=0;
		if(i+1 != ivec.cend())
		{
			sum =*i +*(i+1);
			cout<<sum<<endl;
		}
		else
		{	
			sum=*i;
			cout<<sum<<endl;
			return 0;
		}

	}

	return 0;
}
