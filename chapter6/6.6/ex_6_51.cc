#include <iostream>

using std::cout;
using std::endl;


void f()
{
	cout<<"this is f()"<<endl;
}

void f(int)
{
	cout<<"this is f(int)"<<endl;
}

void f(int,int)
{
	cout<<"this is f(int,int)"<<endl;
}

void f(double,double=3.14)
{
	cout<<"this is f(double,double=3.14)"<<endl;
}

int main()
{
//	f(2.56,42);
	f(42);
	f(42,0);
	f(2.56,3.14);

	return 0;
}

