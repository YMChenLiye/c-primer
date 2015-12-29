#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator found(vector<int>::iterator beg,vector<int>::iterator end,int val)
{
	while(beg!=end)
	{
		if(*beg == val)
		{
			return beg;
		}
		++beg;
	}
	return end;
}


int main()
{
	vector<int>  v={1,2,3,4,5,6,7,8,9};
	cout <<*(found(v.begin(),v.end(),1))<<endl;
	return 0;
}
