#ifndef Bulk_quote_h
#define Bulk_quote_h
#include "quote.h"

class Bulk_quote: public Disc_quote{
	public:
		Bulk_quote()=default;
		Bulk_quote(const std::string&,double,std::size_t,double);
		double net_price(std::size_t) const override;
		void debug() const override;
	
};

Bulk_quote::Bulk_quote(const std::string &b,double p,std::size_t qty,double disc):Disc_quote(b,p,qty,disc) { }

double Bulk_quote::net_price(std::size_t n) const
{
	if(n>=quantity) return n*(1-discount)*price;
	else return n*price;
}

void Bulk_quote::debug() const 
{
	Quote::debug();
	std::cout<<" min_qty "<<quantity<<" discount "<<discount<<std::endl;
}

#endif
