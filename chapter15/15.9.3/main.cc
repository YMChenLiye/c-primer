#include "QQQ.h"
#include "Query_base.h"
#include "WordQuery.h"
#include "AndQuery.h"
#include "OrQuery.h"
#include "NotQuery.h"
#include <string>
std::ostream& operator<<(std::ostream &os,const Query &query)
{
    return os<<query.rep();
}
int main()
{
	std::ifstream file("storyDataFile");

	TextQuery tQuery(file);

	Query q = Query("fieryzzz")  | Query("wind");

	//std::cout << q.eval(tQuery);
	print(std::cout,q.eval(tQuery));

	return 0;
}
