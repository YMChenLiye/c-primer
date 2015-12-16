#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(int &i)
{
	i=0;
}


int main()
{
	int num;
	cin>>num;
	cout<<num<<endl;
	reset(num);
	cout<<num<<endl;

	return 0;
}
