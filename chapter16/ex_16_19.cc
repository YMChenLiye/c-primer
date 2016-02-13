#include <iostream>
#include <vector>


using namespace std;

template<typename Container>
void print(Container &c)
{
	for(typename Container::size_type i=0;i!=c.size();++i)
	{
		std::cout<<c[i]<<" ";
	}
	std::cout<<std::endl;

}


int main()
{
	vector<int> v{1,2,3,4,5,6};
	print(v);

	return 0;
}
