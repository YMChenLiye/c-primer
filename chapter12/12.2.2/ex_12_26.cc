#include <iostream>
#include <memory>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::allocator;

void foo(int n)
{
	allocator<string> alloc;
	auto p=alloc.allocate(n);
	auto q=p;
	string s;
	while(cin>>s && q !=p+n )
	{
		alloc.construct(q++,s);
	}
	
	while(q!=p)
	{
		cout<<*--q<<" ";
		alloc.destroy(q);
	}
	alloc.deallocate(p,n);
	
}

int  main()
{
	foo(5);
	return 0;
}
