#ifndef OrQuery_h
#define OrQuery_h
#include "BinaryQuery.h"

class OrQuery:public BinaryQuery {
	friend Query operator|(const Query &lhs,const Query &rhs);
	OrQuery(const Query &lhs,const Query &rhs):BinaryQuery(lhs,rhs,"|") { }
	
	QueryResult eval(const TextQuery &t) const ;
};
inline
Query operator|(const Query &lhs,const Query &rhs)
{
	return std::shared_ptr<Query_base>(new OrQuery(lhs,rhs));
}

QueryResult OrQuery::eval(const TextQuery &t) const 
{
	QueryResult lret=left.eval(t),rret=right.eval(t);
	auto ret_line=make_shared<set<line_no>>(lret.begin(),lret.end());
	ret_line->insert(rret.begin(),rret.end());
	return QueryResult(rep(),ret_line,lret.get_file());
}

#endif
