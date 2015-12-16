#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int nums(void)
{
	static int cnt=0;

	return cnt++;
}


int main()
{
	for(int i=0;i<10;cout<<nums()<<endl,i++);

	return 0;
}
