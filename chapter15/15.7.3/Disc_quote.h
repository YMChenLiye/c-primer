#ifndef Disc_quote_h
#define Disc_quote_h
#include "Quote.h"

class Disc_quote:public Quote{
	public:
		Disc_quote()=default;
		Disc_quote(const string &s,double p,size_t qty,double disc):Quote(s,p),quantity(qty),discount(disc) { cout<<"Disc_quote(const string,double,size_t,double)"<<endl; }
		Disc_quote(const Disc_quote &rhs):Quote(rhs),quantity(rhs.quantity),discount(rhs.discount) { cout<<"Disc_quote(const Disc_quote &)"<<endl; }
		Disc_quote(Disc_quote &&rhs):Quote(std::move(rhs)),quantity(std::move(rhs.quantity)),discount(std::move(rhs.discount)) { cout<<"Disc_quote(Disc_quote &&)"<<endl; }

		Disc_quote& operator=(const Disc_quote &rhs)
		{
			Quote::operator=(rhs);
			quantity=rhs.quantity;
			discount=rhs.discount;
			cout<<"Disc_quote& operator=(const Disc_quote &)"<<endl;
			return *this;
		}
		Disc_quote& operator=(Disc_quote &&rhs) noexcept
		{
			if(this !=&rhs)
			{

				Quote::operator=(std::move(rhs));
				quantity=std::move(rhs.quantity);
				discount=std::move(rhs.discount);
			}
			cout<<"Disc_quote& operator=(Disc_quote &&)"<<endl;
			return *this;
		}
		virtual double net_price(size_t)const override =0;
		~Disc_quote() { cout<<"~Disc_quote()"<<endl; }

	protected:
		size_t quantity;
		double discount;
};



#endif
