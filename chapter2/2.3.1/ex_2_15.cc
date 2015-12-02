#include <iostream>

int main()
{
	int ival=1.01;// this is right ,but when int ival={1.01} will cause a warning!!!
//	int &rval1=1.01; error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘double’
	int &rval2=ival;
//	int &rval3;      error: ‘rval3’ declared as reference but not initialized
	 std::cout << ival << "  "  << rval2<< std::endl;// print '1  1'
	return 0;
}
