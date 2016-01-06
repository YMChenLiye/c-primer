#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::istream_iterator;
int main()
{
	istream_iterator<string> in(cin),eof;
	vector<string> vec(in,eof);
	for(auto i:vec) cout<<i<<" ";cout<<endl;

	return 0;
}
