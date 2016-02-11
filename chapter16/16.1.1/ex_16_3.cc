#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Sales_data{
	public:
		string bookNo;
		double price;

};

template <typename T>
int compare(const T &v1,const T &v2)
{
	if(v1<v2) return -1;
	else if(v2<v1) return 1;
	else return 0;
}

int main()
{
	Sales_data s1,s2;
	cout<<compare(s1,s2)<<endl;
	return 0;
}
