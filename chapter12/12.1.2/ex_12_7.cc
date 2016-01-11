#include <iostream>
#include <vector>
#include <memory>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::make_shared;
using std::shared_ptr;


shared_ptr<vector<int>> Creat()
{
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> Read(shared_ptr<vector<int>> p)
{
	int i;
	while(cin>>i) p->push_back(i);
	return p;
}

std::ostream& Write(shared_ptr<vector<int>> p)
{
	for(auto i:*p) cout<<i<<" ";
	return cout;
}

int main()
{
	Write(Read(Creat()))<<endl;
	return 0;
}
