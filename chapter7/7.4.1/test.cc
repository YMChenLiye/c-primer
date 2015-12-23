#include <iostream>
#include <string>
using std::string;
class Sales_data
{
public:
	Sales_data(string s="123"):bookNo(s){}
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

int main()
{
	Sales_data item;
	std::cout<<item.bookNo<<std::endl;

	return 0;
}
