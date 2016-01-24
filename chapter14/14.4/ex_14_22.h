#ifndef ex_14_2_h
#define ex_14_2_h
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::istream;
using std::ostream;
class Sales_data{
	friend istream& operator>>(istream&,Sales_data&);
	friend ostream& operator<<(ostream&,const Sales_data&);
	friend Sales_data operator+(const Sales_data&,const Sales_data&);
	public:
		Sales_data(const string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p) { }
		Sales_data():Sales_data("",0,0.0f) { }
		Sales_data(const string &s):Sales_data(s,0,0.0f) { }
		Sales_data(istream&);
		
		Sales_data& operator+=(const Sales_data&);
		Sales_data& operator=(const string &);
		string isbn() const { return bookNo;}

	private:
		double avg_price()const { return units_sold? revenue/units_sold : 0;}
		string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
};

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

istream& operator>>(istream &is,Sales_data& item)
{
	double price;
	is>>item.bookNo>>item.units_sold>>price;
	if(is)
	{
		item.revenue=price*item.units_sold;
	}
	else
	{
		item=Sales_data();
	}
	return is;
}
Sales_data::Sales_data(istream& is)
{
	is>>*this;
}

ostream& operator<<(ostream& os,const Sales_data& item)
{
	os<<item.bookNo<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
	return os;
}
Sales_data operator+(const Sales_data &lhs,const Sales_data &rhs)
{
	Sales_data sum=lhs;
	sum+=rhs;
	return sum;
}
Sales_data& Sales_data::operator=(const string &s)
{
	*this=Sales_data(s);
	return *this;
}

#endif
