#include <iostream>
using std::cout;
using std::endl;

struct X{
	X() { cout<<" X() "<<endl;}
	X(const X&) { cout<<"  X(const X&)"<<endl;}
	X& operator=(const X&) { cout<<" operator=(cosnt X&)"<<endl;}
	~X() { cout<<" ~X()"<<endl;}
};
