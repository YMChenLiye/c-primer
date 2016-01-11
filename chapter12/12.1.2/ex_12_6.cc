#include <iostream>
#include <vector>
#include <memory>
using std::cout;
using std::cin;
using std::endl;
using std::vector;


vector<int>* Creat()
{
	return new vector<int> {};
}

void Read(vector<int>* pvec)
{
	int i;
	while(cin>>i) pvec->push_back(i);
}

void Write(vector<int>* pvec)
{
	for(auto i:*pvec) cout<<i<<" ";
	cout<<endl;
}

int main()
{
	vector<int>* vec=Creat();
	Read(vec);
	Write(vec);
	delete vec;
	return 0;
}
