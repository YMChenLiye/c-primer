#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int i=~'q'<<6;
	char c=~'q'<<6;
	cout<<i<<" " <<c<< " "<<endl;

	return 0;
}
