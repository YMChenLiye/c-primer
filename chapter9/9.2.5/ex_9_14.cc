#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::list;
using std::vector;
using std::string;
using std::cout;
using std::endl;

int main()
{
	list<const char *> l1={"hello","world"};
	vector<string> v;
	v.assign(l1.begin(),l1.end());
	for(auto i:v) cout<<i<<" ";
	cout<<endl;

	return 0;
}
