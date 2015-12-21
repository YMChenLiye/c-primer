#ifndef ex_7_2_h
#define ex_7_2_h

#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Sales_data
{
	string bookNo;
	unsigned units_sold;
	double revenue;

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

#endif
