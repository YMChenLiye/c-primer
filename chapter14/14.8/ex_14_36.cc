#include "ex_14_35.h"
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main()
{
	ReadString rs;
	vector<string> vec;
	string word;
	while(rs(word)!="")
	{
		vec.push_back(word);
	}
	for(auto i:vec) cout<<i<<" ";
	cout<<endl;

	return 0;
}
