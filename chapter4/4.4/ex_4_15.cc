#include <iostream>

int main()
{
	double dval;
	int ival;
	int *p;

//	dval=ival=p=0;ex_4_15.cc:9:11: error: invalid conversion from ‘int*’ to ‘int’ [-fpermissive]
	dval=ival=*p=0;  //[1]    8497 segmentation fault (core dumped)  ./a.outa
	
	dval=ival=0;
//	p=0;
	
	std::cout<<p<<" "<<std::endl;

	
	return 0;

}


