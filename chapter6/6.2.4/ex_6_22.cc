#include <iostream>
using std::cout;
using std::endl;
void swapPointer(int *&p1,int *&p2)
{
	int *tmp=p1;
	p1=p2;
	p2=tmp;
}


int main()
{
	int a=10,b=11;
	int *pa=&a;
	int *pb=&b;
	cout<<a<<" "<<b<<endl;

	swapPointer(pa,pb);
	cout<<*pa<<" "<<*pb<<endl;
	cout<<a<<" "<<b<<endl;

	return 0;
}
