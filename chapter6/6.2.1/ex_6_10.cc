#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *v1,int *v2)
{
	int tmp=*v1;
	*v1=*v2;
	*v2=tmp;
}


int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	swap(&a,&b);
	cout<<a<<" "<<b<<endl;

	return 0;
}
