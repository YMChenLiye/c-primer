#include <iostream> 
using std::cout; using std::endl; 
int main()
{
	int first=10;
	auto f=[first](int sec) ->int {return first + sec; };
	cout<<f(3)<<endl;
	return 0;
}
