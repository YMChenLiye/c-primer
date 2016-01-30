#ifndef quote_h
#define quote_h
#include <iostream>
#include <string>

class Quote{
	public:
		Quote()=default;
		Quote(const std::string &book,double sales_price):bookNo(book),price(sales_price) { }
		std::string isbn() const { return bookNo; }
		virtual double net_price(std::size_t n) const { return n*price; }
		virtual ~Quote()=default;
		virtual void debug() const { std::cout<<"bookNo "<<bookNo<<" price: "<<price<<std::endl; }

	private:
		std::string bookNo;
	protected:
		double price=0.0;
};

#endif
