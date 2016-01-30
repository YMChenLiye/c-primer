#include "quote.h"
#include "Disc_quote.h"
#include "Bulk_quote.h"
#include "limit_quote.h"

void print(Quote &q,size_t n)
{	
	std::cout<<q.net_price(n)<<std::endl;
}



int main1()
{
	Quote q("aa",13.1);
	Bulk_quote bq("bb",13.1,5,0.3);
	limit_quote lq("cc",13.1,15,0.2);
	print(q,10);
	print(bq,10);
	print(lq,10);
	return 0;
}


int main()
{
//	Disc_quote q("aa",13.1,5,0.3);
// error: cannot declare variable ‘q’ to be of abstract type ‘Disc_quote’

	return 0;
}
