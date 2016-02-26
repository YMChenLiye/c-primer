#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "Sales_data.cc"

using namespace std;

//for 17.4
typedef tuple<vector<Sales_data>::size_type,
			  vector<Sales_data>::const_iterator,
			  vector<Sales_data>::const_iterator> matches;

//for 17.5
typedef pair<vector<Sales_data>::size_type,
			 pair<vector<Sales_data>::const_iterator,
			 	  vector<Sales_data>::const_iterator>> matches_pair;

//for 17.6
struct matches_struct
{
	vector<Sales_data>::size_type st;
	vector<Sales_data>::const_iterator first;
	vector<Sales_data>::const_iterator last;
	matches_struct(vector<Sales_data>::size_type s,
				   vector<Sales_data>::const_iterator f,
				   vector<Sales_data>::const_iterator l):st(s),first(f),last(l) { }
}

//for 17.4
vector<matches>
findBook(const vector<vector<Sales_data>> &files,const string &book)
{
	vector<matches> ret;
	for(auto it=files.cbegin();it != files.cend();++it)
	{
		auto found=equal_range(it->cbegin(),it->cend(),book,compareIsbn);
		if(found.first != found.second)
		{
			ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));//it-files.cbegin() means the store's number
		}
	}
	return ret;
}

//for 17.5
vector<matches_pair>
findBook(const vector<vector<Sales_data>> &files,const string &book)
{
	vector<matches_pair> ret;
	for(auto it=files.cbegin();it != files.cend(); ++it)
	{
		auto found=equal_range(it->cbegin(),it->cend(),book,compareIsbn);
		if(found.first != found.second)
		{
			ret.push_back(make_pair(it-files.cbegin(),
									make_pair(found.first,found,second)));
		}
	}
	return ret;
}

//for 17.6
vector<matches_struct>
findBook(const vector<vector<Sales_data>> &files,const string &book)
{
	vector<matches_struct> ret;
	for(auto it=files.cbegin();it != files.cend(); ++it)
	{
		auto found=equal_range(it->cbegin(),it->cend(),book,compareIsbn);
		if(found.first != found.second)
		{
			ret.push_back(it-files.cbegin(),found.first,found.second);
		}
	}
	return ret;
}
