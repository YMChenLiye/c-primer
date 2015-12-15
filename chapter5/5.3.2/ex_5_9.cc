#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char i;
	int cnt=0;

	while(cin>>i)
	{
		if(i=='a' ||i=='e' || i=='i' || i=='o' || i=='u')
		{
			++cnt;
		}
	}

	cout<<"the number of vowels is "<<cnt<<endl;

	return 0;
}
