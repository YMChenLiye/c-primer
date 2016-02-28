#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
	bitset<30> b;
	vector<int> v={1,2,3,5,8,13,21};

	for(auto i:v)
		b.set(i);
	cout<<b<<endl;

	return 0;
}
