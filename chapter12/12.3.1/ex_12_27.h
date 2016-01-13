#ifndef ex_12_27_h
#define ex_12_27_h

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <map>
#include <set>
#include <sstream>
using std::istringstream;
using std::map;
using std::set;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;

class QueryResult{
	using line_no=vector<string>::size_type;
	friend std::ostream& print(std::ostream& out, QueryResult result)
	{
		out<<result.word<<" occurs "<<result.Rlines.size()<<" "<<endl;
		for(auto i:result.Rlines)
		{
			out<<result.Rfile[i]<<endl;
		}
	}

	public:
		QueryResult(const string &s,vector<string> file,set<line_no> lines):word(s),Rfile(file),Rlines(lines){}

	private:
		string word;
		vector<string> Rfile;
		set<line_no> Rlines;
};

class TextQuery{
	public:
		using line_no=vector<string>::size_type;
		TextQuery(ifstream &);
		QueryResult query(const string &) ;

//	private:
		vector<string> file;
		map<string,set<line_no>> wm;
};

TextQuery::TextQuery(ifstream &in)
{
	string line;
	while(getline(in,line))
	{
		file.push_back(line);
		int curr=file.size();
		istringstream ss(line);
		string word;
		while(ss>>word)
		{
			wm[word].insert(curr);
		}
	}
}

QueryResult TextQuery::query(const string &word) 
{
	QueryResult result(word,file,wm[word]);
	return result;
}





#endif 
