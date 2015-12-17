#include <iostream>
using std::cout;
using std::endl;
using std::begin;
using std::end;


void print(const int i)
{
	cout<<i<<endl;
}

void print(const int *i)
{
	cout<<*i<<endl;
}

void print(const int *beg,const int *end)
{
	for(;beg!=end;beg++)
	{
		cout<<*beg<<endl;
	}
}

void print(const int arr[],size_t size)
{
	for(size_t i=0;i<size;++i)
	{
		cout<<arr[i]<<endl;
	}

}


int main()
{
	int i=0,j[2]={0,1};

	print(i);
	print(&i);
	print(begin(j),end(j));
	print(j,end(j)-begin(j));

	return 0;
}
