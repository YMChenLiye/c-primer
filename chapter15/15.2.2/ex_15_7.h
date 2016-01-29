#include "quote.h"

class limit_quote: public Quote{
	public:
		limit_quote()=default;
		limit_quote(const std::string&,double,std::size_t,double);
		double net_price(std::size_t) const override;
	private:
	std::size_t max_qty=0;
	double discount=0.0;
};

limit_quote::limit_quote(const std::string &b,double p,std::size_t qty,double disc):Quote(b,p),max_qty(qty),discount(disc) { }

double Bulk_quote::net_price(std::size_t n) const
{
	if(n<=max_qty) return n*(1-discount)*price;
	else return max_qty*(1-discount)*price+(n-max_qty)*price;
}

