#include "ex_7_11.h"

int main()
{
	Sales_data item1;
	print(cout,item1)<<endl;
	Sales_data item2("0-201-70353-X");
	print(cout,item2)<<endl;
	Sales_data item3("0-201-70353-X",3,25);
	print(cout,item3)<<endl;
	Sales_data item4(std::cin);
	print(cout,item4)<<endl;

	return 0;
}

	
