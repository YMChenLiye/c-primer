#include <iostream>
using std::cout;
using std::endl;

template <typename T>
int compare(const T &v1,const T &v2)
{
	if(v1<v2) return -1;
	else if(v1==v2) return 0;
	else return 1;
}

int main()
{
	cout<<compare(1,2)<<endl;
	return 0;
}
