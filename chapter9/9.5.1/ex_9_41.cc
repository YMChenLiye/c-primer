#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<char> vc={'a','b','c'};
	string str(vc.begin(),vc.end());
	cout<<str<<endl;
	return 0;
}
