#include <iostream>
#include <vector>
#include <cassert>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::begin;
using std::end;

#define NDEBUG

void print(vector<int>::iterator beg,vector<int>::iterator end)
{
#ifndef NDEBUG
	cout<<"size is "<<end-beg<<endl;
#endif
	if(beg!=end)
	{
		cout<<*beg<<endl;
		print(++beg,end);
	}
	return ;
}


int main()
{
	vector<int> i={1,2,3,4,55};
	print(begin(i),end(i));
	return 0;
}

