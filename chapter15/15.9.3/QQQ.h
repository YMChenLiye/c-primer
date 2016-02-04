#ifndef ex_12_30_h
#define ex_12_30_h

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
		QueryResult query(const std::string&) const;
	private:
		std::shared_ptr<std::vector<std::string>> file;
		std::map<std::string,std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream &in) : file(new std::vector<std::string>)
{
	string text;
	while(getline(in,text))
	{
		file->push_back(text);
		int curr=file->size()-1;//begin from 0
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
	friend std::ostream& print(std::ostream &,const QueryResult&);
	public:
	using line_no=std::vector<std::string>::size_type;
	QueryResult(const std::string&s,
			
			std::shared_ptr<std::set<line_no>> p,
std::shared_ptr<std::vector<std::string>> f):
		sought(s),file(f),lines(p) {}
	std::shared_ptr<std::vector<std::string>> get_file() const{ return file; }
	std::set<TextQuery::line_no>::iterator
		begin() { return lines->begin(); }

	std::set<TextQuery::line_no>::iterator
		end()   { return lines->end();   }	
	private:
	std::string sought;
	std::shared_ptr<std::vector<std::string>> file;
	std::shared_ptr<std::set<line_no>> lines;
};

QueryResult TextQuery::query(const string &s )const
{
	using line_no=std::vector<std::string>::size_type;
	static shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
	auto loc=wm.find(s);
	if(loc==wm.end())
	{
		return QueryResult(s,nodata,file);
	}
	else
		return QueryResult(s,loc->second,file);
}

std::ostream & print(std::ostream &os,const QueryResult &qr)
{
	os<<qr.sought<<" occurs "<<qr.lines->size()<<" times "<<endl;
	for(auto num:*qr.lines)
	{
		os<<"\t (line "<<num+1<<") "<<*(qr.file->begin()+num)<<endl;
	}
	return os;
}

#endif
