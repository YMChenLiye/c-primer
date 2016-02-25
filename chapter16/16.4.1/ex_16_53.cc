#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ostream;

template<typename T>
ostream &print(ostream &os,const T &t)
{
	return os<<t;
}

template<typename T,typename... Args>
ostream &print(ostream &os,const T &t,const Args&... rest)
{
	os<<t<<",";
	return print(os,rest...);
}

int main()
{
	print(cout,1)<<endl;
	print(cout,1,2)<<endl;
	print(cout,1,2,3,4,"sss")<<endl;

	return 0;
}
