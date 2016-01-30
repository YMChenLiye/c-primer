#include "quote.h"
#include "Bulk_quote.h"
#include "limit_quote.h"

void print_debug(Quote& q)
{
	q.debug();
}

int main()
{
	Quote q("aaa", 10.60);
	Bulk_quote bq("bbb", 111, 10, 0.3);
	limit_quote lq("ccc", 222, 10, 0.3);
	q.debug();
	bq.debug();
	lq.debug();
	std::cout<<"++++++++++++++++++++++++++++++++++++++++"<<std::endl;
	print_debug(q);
	print_debug(bq);
	print_debug(lq);


	return 0;
}
