#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> grades(11,0);
	for(int tmp;cin>>tmp;)
	{
		auto i=grades.begin()+tmp/10;
		(*i)++;
	}
	for(auto i:grades)
	{
	
		cout<<i<<endl;
	}

	return 0;
}

