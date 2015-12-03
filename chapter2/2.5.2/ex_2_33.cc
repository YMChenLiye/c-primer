#include <iostream>

int main()
{
	int i=0,&r=i;
	auto a =r;
	
	const int ci=i,&cr=ci;
	auto b=ci;
	auto c=cr;
	auto d=&i;
	auto e=&ci;
	const auto f=ci;

	auto &g=ci;
//	auto &h=42;   ex_2_33.cc:16:10: error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘int’
	const auto &j=42;


	a=42;
	b=42;
	c=42;
//	d=42;    ex_2_33.cc:23:3: error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
//	e=42;    ex_2_33.cc:24:3: error: invalid conversion from ‘int’ to ‘const int*’ [-fpermissive]
//	g=42;    ex_2_33.cc:25:3: error: assignment of read-only reference ‘g’

	return 0;
}
