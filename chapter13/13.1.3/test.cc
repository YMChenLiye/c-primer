#include "ex_13_13.h"
#include <vector>

void foo(X,X)
{
	cout<<"foo(X,X)"<<endl;
}
void bar(X&,X&)
{
	cout<<"bar(X&,X&)"<<endl;
}

int main()
{
	X a,b;
	foo(a,b);
	bar(a,b);
	cout<<"=========================================="<<endl;
	auto p=new X;
	std::vector<X> vec;
	vec.push_back(*p);
	cout<<"=========================================="<<endl;
	X c(a);
	X d=a;
	X e;
	e=a;
	cout<<"++++++++++++scope will end++++++++++++++++"<<endl;

	return 0;
}
