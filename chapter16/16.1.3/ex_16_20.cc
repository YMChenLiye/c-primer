#include <iostream>
#include <vector>


using namespace std;

template<typename Container>
void print(Container &c)
{
	for(typename Container::iterator iter=c.begin();iter != c.end();++iter)
	{
		std::cout<<*iter<<" ";
	}
	std::cout<<std::endl;

}


int main()
{
	vector<int> v{1,2,3,4,5,6};
	print(v);

	return 0;
}
