#ifndef BinaryQuery_h
#define BinaryQuery_h
#include "QQQ.h"
#include "Query_base.h"
#include <string>

class BinaryQuery:public Query_base{
	protected:
	BinaryQuery(const Query &lhs,const Query &rhs,const std::string &o):left(lhs),right(rhs),opt(o) { }
	std::string rep()const { return "(" + left.rep()+opt+right.rep()+ ")"; }

	Query left,right;
	std::string opt;
};



#endif
