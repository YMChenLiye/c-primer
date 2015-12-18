#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int func(int,int);

using pf=int(*)(int,int);

int add(int a,int b) {return a+b;}
int sub(int a,int b) {return a-b;}
int product(int a,int b) {return a *b;}
int div1(int a,int b) {return (b==0)? 0 : a/b;}

int main()
{
	vector<pf> vec={add,sub,product,div1};
	for(auto i:vec)
	{
		cout<<i(12,6)<<endl;
	}

	return 0;
}
