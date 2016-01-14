#ifndef ex_12_32_h
#define ex_12_32_h
#include "ex_12_19.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>
#include <fstream>
#include <sstream>
using std::string;
using std::shared_ptr;
using std::endl;

class QueryResult;
class TextQuery{
	public:
		using line_no=std::vector<std::string>::size_type;
		TextQuery(std::ifstream&);
		QueryResult query(const std::string&) ;
	private:
	//	std::shared_ptr<std::vector<std::string>> file;
		StrBlob file;
		std::map<std::string,std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream &in) : file(StrBlob())
{
	string text;
	while(getline(in,text))
	{
		file.push_back(text);
		int curr=file.size()-1;//begin from 0
		std::istringstream line(text);
		string word;
		while(line>>word)
		{
			auto & lines=wm[word];
			if(!lines)
			{
				lines.reset(new std::set<line_no>);
			}
			lines->insert(curr);
		}
	}
}

class QueryResult{
	friend std::ostream& print(std::ostream &,const QueryResult &);
	public:
		using line_no=std::vector<std::string>::size_type;
		QueryResult(const std::string&s,
					StrBlob f,
					std::shared_ptr<std::set<line_no>> p):
			sought(s),file(f),lines(p) {}
	private:
		 std::string sought;
	//	std::shared_ptr<std::vector<std::string>> file;
		StrBlob file;
		std::shared_ptr<std::set<line_no>> lines;
};

QueryResult TextQuery::query(const string &s ) 
{
	using line_no=std::vector<std::string>::size_type;
	static shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
	auto loc=wm.find(s);
	if(loc==wm.end())
	{
		return QueryResult(s,file,nodata);
	}
	else
		return QueryResult(s,file,loc->second);
}

std::ostream & print(std::ostream &os,const QueryResult &qr)
{
	os<<qr.sought<<" occurs "<<qr.lines->size()<<" times "<<endl;
	for(auto num:*qr.lines)
	{
		StrBlobPtr p(qr.file,num);
		os<<"\t (line "<<num+1<<") "<<p.deref()<<endl;
	}
	return os;
}

#endif
