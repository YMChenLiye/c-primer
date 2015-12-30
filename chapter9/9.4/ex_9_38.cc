#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
using std::cin;

int main()
{
	vector<int> vi;
	while(vi.capacity()<10000)
	{
		cout<<vi.capacity()<<endl;
		vi.push_back(0);
		vi.push_back(0);
		vi.push_back(0);
		vi.push_back(0);
		vi.push_back(0);
		for(;vi.capacity()>vi.size();vi.push_back(0))
		{
		}
	}
	return 0;
}



//0
//1
//2
//4
//8
//16
//32
//64
//128
//256
//512
//1024
//2048
//4096
//8192
//
