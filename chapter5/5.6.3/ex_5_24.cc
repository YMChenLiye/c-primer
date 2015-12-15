#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;

int main()
{
	int first,second;
	cin>>first>>second;
	if(second==0)
	{
		throw runtime_error("second number can't be zero");
	}
	cout<<first/second<<endl;

	return 0;
}
