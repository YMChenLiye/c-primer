#ifndef Query_h
#define Query_h
#include <string>
#include <iostream>


class Query{
	friend Query operator~(const Query &);
	friend Query operator&(const Query &,const Query &);
	friend Query operator|(const Query &,const Query &);

	public:
		Query(const std::string &s):q(new WordQuery(s)) { }
		QueryResult eval(const TextQuery &t)const { return q->eval(t); }
		std::string rep() const { return q->rep(); }
	private:
		Query(std::shared_ptr<Query_base> query) :q(query) { }
		std::shared_ptr<Query_base> q;
};

#endif
