#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
	vector<int> ivec;
	ivec[0]=42;
	return 0;
}
//[1]    6020 segmentation fault (core dumped)  ./a.out
