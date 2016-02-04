#ifndef AndQuery_h
#define AndQuery_h
#include "Query.h"
#include "BinaryQuery.h"
#include <memory>
#include <set>
#include <algorithm>

using std::set;
using std::make_shared;

class AndQuery:public BinaryQuery {
	friend Query operator&(const Query &lhs,const Query &rhs);
	AndQuery(const Query &lhs,const Query &rhs):BinaryQuery(lhs,rhs,"&") { }
	
	QueryResult eval(const TextQuery &t) const ;
};
inline
Query operator&(const Query &lhs,const Query &rhs)
{
	return std::shared_ptr<Query_base>(new AndQuery(lhs,rhs));
}

QueryResult AndQuery::eval(const TextQuery &t) const 
{
	QueryResult lret=left.eval(t),rret=right.eval(t);
	auto ret_line=make_shared<set<line_no>>();
	set_intersection(lret.begin(),lret.end(),rret.begin(),rret.end(),inserter(*ret_line,ret_line->begin()));
	return QueryResult(rep(),ret_line,lret.get_file());
}

#endif
