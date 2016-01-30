#include "Disc_quote.h"

class limit_quote:public Disc_quote{
	public:
		limit_quote()=default;
		limit_quote(const std::string &book,double price,std::size_t qty,double disc): Disc_quote(book,price,qty,disc) { }

		double net_price(std::size_t n) const override;

};

double limit_quote::net_price(std::size_t n) const 
{
	if(n<=quantity) return n*(1-discount)*price;
	else return quantity*(1-discount)*price+(n-quantity)*price;
}
