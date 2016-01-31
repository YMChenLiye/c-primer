#include <iostream>
#include <string>

#include "Quote.h"
#include "Bulk_quote.h"
#include "Disc_quote.h"


int main()
{
	Bulk_quote bq1;
	cout<<"=========================="<<endl;
	Bulk_quote bq2("ss", 2.05, 12, 0.3);
	cout<<"=========================="<<endl;
	bq2 = std::move(bq2);
	cout<<"=========================="<<endl;


	return 0;
}
