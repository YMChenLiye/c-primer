#ifndef ex_7_6_h
#define ex_7_6_h
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct Sales_data
{
	Sales_data() =default;
	Sales_data(const string &s):bookNo(s){}
	Sales_data(const string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n) {}
	Sales_data(std::istream &is);
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
	string isbn() const
	{
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
};
Sales_data &Sales_data::combine(const Sales_data& rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data add(const Sales_data &lhs,const Sales_data &rhs)
{
	Sales_data sum=lhs;
	sum.combine(rhs);
	return sum;
}
std::istream &read(std::istream &is,Sales_data &item)
{
	double price=0;
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=item.units_sold * price;
	return is;
}
std::ostream &print(std::ostream &os,const Sales_data item)
{
	cout<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
	return os;
}


Sales_data::Sales_data(std::istream &is)
{
	read(is,*this);
}
#endif
