#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
	vector<int> v1(10,42);
	vector<int> v2{10,42};
	vector<int> v3{42,42,42,42,42,42,42,42,42,42};
	vector<int> v4;
	for(int i=0;i<10;v4.push_back(42),i++);

	cout<<"the first method is better"<<endl;

	return 0;
}
