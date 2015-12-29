#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool found(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
	while(beg!=end)
	{
		if(*beg == val)
		{
			return true;
		}
		++beg;
	}
	return false;
}


int main()
{
	vector<int>  v={1,2,3,4,5,6,7,8,9};
	cout <<found(v.begin(),v.end(),51)<<endl;
	return 0;
}
