#include <iostream>
using std::cout;
using std::endl;

struct numbered{
	static int curr;
	numbered(){ mysn=curr++; }
	numbered(const numbered& n){ mysn=curr++;}
	//numbered & operator=(const numbered &n){
	//	mysn=++n.curr;
	//}
	int mysn=0;
};

int	numbered::curr=0;
void f (numbered s) { cout<<s.mysn<<endl;}

int main()
{
	numbered a,b=a,c=b;
	f(a);
	f(b);
	f(c);

	return 0;
}
