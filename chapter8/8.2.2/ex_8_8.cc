#include <fstream>
#include <iostream>

#ifndef ex_7_21_h
#define ex_7_21_h
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Sales_data
{

friend Sales_data add(const Sales_data &,const Sales_data &);
friend std::istream &read(std::istream &is,Sales_data &item);
friend std::ostream &print(std::ostream &os,const Sales_data &item);

public:
	Sales_data() =default;
	Sales_data(const string &s):bookNo(s){}
	Sales_data(const string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n) {}
	Sales_data(std::istream &is){read(is,*this);};
	std::string isbn() const{return bookNo;}
	Sales_data &combine(const Sales_data &);

private:
	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;

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
std::ostream &print(std::ostream &os,const Sales_data &item)
{
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
	return os;
}
#endif


using std::ifstream; using std::ofstream; using std::cout; using std::endl; using std::cerr;

int main(int argc, char **argv)
{
    ifstream input(argv[1]);
 	ofstream output(argv[2],ofstream::app);   
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
    
    return 0;
}
