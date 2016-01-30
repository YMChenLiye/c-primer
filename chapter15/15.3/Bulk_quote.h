#ifndef Bulk_quote_h
#define Bulk_quote_h
#include "quote.h"

class Bulk_quote: public Quote{
	public:
		Bulk_quote()=default;
		Bulk_quote(const std::string&,double,std::size_t,double);
		double net_price(std::size_t) const override;
		void debug() const override;
	private:
		std::size_t min_qty=0;
		double discount=0.0;
};

Bulk_quote::Bulk_quote(const std::string &b,double p,std::size_t qty,double disc):Quote(b,p),min_qty(qty),discount(disc) { }

double Bulk_quote::net_price(std::size_t n) const
{
	if(n>=min_qty) return n*(1-discount)*price;
	else return n*price;
}

void Bulk_quote::debug() const 
{
	Quote::debug();
	std::cout<<" min_qty "<<min_qty<<" discount "<<discount<<std::endl;
}

#endif
