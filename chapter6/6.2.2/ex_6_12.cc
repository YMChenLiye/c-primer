#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void swap(int &v1,int &v2)
{
	int tmp=v1;
	v1=v2;
	v2=tmp;
}


int main()
{
	int v1,v2;
	cin>>v1>>v2;
	cout<<v1<<" "<<v2<<endl;
	swap(v1,v2);
	cout<<v1<<" "<<v2<<endl;

	return 0 ;
}
