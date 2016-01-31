#ifndef Quote_h
#define Quote_h
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Quote{
	public:
		Quote()=default;
		Quote(const string &s,double p=0.0):bookNo(s),price(p) { }
		Quote& operator=(const Quote &rhs)
		{
			cout<<"Quote& operator=(const Quote&)"<<endl;
			bookNo=rhs.bookNo;
			price=rhs.price;
			return *this;
		}
		Quote(const Quote &rhs):bookNo(rhs.bookNo),price(rhs.price) {cout<<"Quote(const Quote &)"<<endl; }
		Quote(Quote &&rhs):bookNo(std::move(rhs.bookNo)),price(std::move(rhs.price)) { cout<<"Quote(Quote &&)"<<endl; }
		Quote& operator=(Quote &&rhs) noexcept
		{
			bookNo=std::move(rhs.bookNo);
			price=std::move(rhs.price);
			cout<<"Quote& operator=(Quote&&)"<<endl;
			return *this;
		}
		virtual ~Quote() { cout<<"virtual ~Quote()"<<endl; }
		virtual double net_price(size_t n) const { cout<<"virtual Quote::double net_price(size_t)"<<endl; return n*price; }

	private:
		string bookNo;
	protected:
		double price=0.0;
};




#endif
