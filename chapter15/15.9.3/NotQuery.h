#ifndef NotQuery_h
#define NotQuery_h

#include "QQQ.h"
#include "Query_base.h"

class NotQuery:public Query_base{
	friend Query operator~(const Query &q);
	NotQuery(const Query &q):query(q) { }
	std::string rep() const { return "~("+query.rep()+")"; }
	QueryResult eval(const TextQuery &) const;
	Query query;
};

QueryResult NotQuery::eval(const TextQuery &t) const 
{
	QueryResult ret=query.eval(t);
	auto ret_line=shared_ptr<set<line_no>>();
	auto beg=ret.begin(),end=ret.end();
	auto sz=ret.get_file()->size();

	for(size_t n=0;n!=sz;++n)
	{
		if(beg==end || *beg !=n)
		{
			ret_line->insert(n);
		}
		else if(beg !=end)
		{
			++beg;
		}
	}
	return QueryResult(rep(),ret_line,ret.get_file());
}

#endif
