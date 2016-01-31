#include "Disc_quote.h"

class Bulk_quote:public Disc_quote {
	public:
		Bulk_quote() { cout<<"Bulk_quote()"<<endl; }
		using Disc_quote::Disc_quote;

		Bulk_quote(const Bulk_quote &rhs):Disc_quote(rhs) { cout<<"Bulk_quote(const Bulk_quote &)"<<endl; }
		Bulk_quote(Bulk_quote &&rhs):Disc_quote(std::move(rhs)) { cout<<"Bulk_quote(Bulk_quote &&)"<<endl; }
		Bulk_quote& operator=(const Bulk_quote &rhs)
		{
			Disc_quote::operator=(rhs);
			cout<<"Bulk_quote& operator=(const Bulk_quote&)"<<endl;
			return *this;
		}
		Bulk_quote& operator=(Bulk_quote &&rhs) noexcept
		{
			Disc_quote::operator=(std::move(rhs));
			cout<<"Bulk_quote& operator=(Bulk_quote &&)"<<endl;
			return *this;
		}

		double net_price(size_t n) const override 
		{
			cout<<"Bulk_quote::net_price"<<endl;
			if(n>=quantity)
			{
				return n*(1-discount)*price;
			}
			else return n*price;
		}
		~Bulk_quote() { cout<<"~Bulk_quote()"<<endl; }

};
