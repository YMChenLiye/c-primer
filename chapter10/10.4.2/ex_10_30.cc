#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
	istream_iterator<int> in(cin),eof;
	vector<int> vec(in,eof);
	sort(vec.begin(),vec.end());
	copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));

	return 0;
}
