#include <iostream>
#include <iterator>
#include <vector>
#include <fstream>
#include <algorithm>
using std::cout;
using std::endl;
using std::vector;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main(int argc,char **argv)
{
	if(argc!=4) return -1;

	ifstream in(argv[1]);
	ofstream out1(argv[2]),out2(argv[3]);
	istream_iterator<int> is_iter(in),eof;
	vector<int> vec(is_iter,eof);
	ostream_iterator<int> os1_iter(out1," "),os2_iter(out2,"|");
	std::for_each(vec.begin(),vec.end(),[&os1_iter,&os2_iter](int i){
			if(i%2) *os1_iter++=i;
			else	*os2_iter++=i;
			});
	return 0;
}

