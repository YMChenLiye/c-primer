#include <iostream>
using std::cout;
using std::endl;
using std::cin;
int fact(int val)
{
	int ret=1;
	while(val>1)
	{
		ret *= val--;
	}

	return ret;
}

int main()
{
	cout<<"please enter a number"<<endl;
	int num;
	cin>>num;
	cout<<fact(num)<<endl;

	return 0;
}
