#include <iostream>
using std::cout;

class Base{
	public:
		virtual int fcn() { cout<<"Base::fcn()"<<endl; }
};

class D1:public Base{
	public:
		int fcn() override { cout<<"D1::fcn()"<<endl; }
};
