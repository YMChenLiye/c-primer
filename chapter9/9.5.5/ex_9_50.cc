#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
	vector<string> s{"1.2","2.3","3.1","4.6","5.0"};
	double sum=0;
	for(auto i:s) sum+=stod(i);
	cout<<sum<<endl;
	return 0;
}
