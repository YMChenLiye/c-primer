#ifndef ex_12_19_h
#define ex_12_19_h

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <exception>
using std::vector;
using std::string;
using std::shared_ptr;

class StrBlobPtr;
class StrBlob{
	
	public:
		typedef std::vector<std::string>::size_type size_type;
		friend class StrBlobPtr;
		StrBlobPtr begin();
		StrBlobPtr end();

		StrBlob();
		StrBlob(std::initializer_list<std::string> il);
		size_type size() const { return data->size();}
		bool empty() const { return data->empty(); }
		//add and remove elements;
		void push_back(const std::string &s) { data->push_back(s); }
		void pop_back();
		// element access
		std::string& front();
		std::string& back();
		const std::string& front() const;
		const std::string& back() const;
	private:
		std::shared_ptr<std::vector<std::string>> data;
		void check(size_type i,const std::string &msg) const;
};

StrBlob::StrBlob():data(std::make_shared<vector<string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<vector<string>>(il)) {}

void StrBlob::check(size_type i,const std::string &msg) const
{
	if(i>=data->size())
		throw std::out_of_range(msg);
}

void StrBlob::pop_back()
{
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}

std::string& StrBlob::front()
{
	check(0,"front on empty StrBlob");
	return data->front();
}

std::string& StrBlob::back()
{
	check(0,"back on empty StrBlob");
	return data->back();
}

const std::string& StrBlob::front() const
{
	check(0,"front on empty StrBlob");
	return data->front();
}

const std::string& StrBlob::back() const
{
	check(0,"back on empty StrBlob");
	return data->back();
}




class StrBlobPtr{
	friend bool operator==(const StrBlobPtr&,const StrBlobPtr&);
	friend bool operator!=(const StrBlobPtr&,const StrBlobPtr&);
	public:
		StrBlobPtr():curr(0){}
		StrBlobPtr(StrBlob &a,size_t sz=0):wptr(a.data),curr(sz){}
		string& deref() const;
		StrBlobPtr& incr();
		size_t pointer() { return curr;}
	private:
		shared_ptr<vector<string>> check(size_t,const string&) const;
		std::weak_ptr<vector<string>> wptr;
		std::size_t curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t sz,const string &msg) const
{
	auto ret=wptr.lock();
	if(!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if(sz>=ret->size())
		throw std::out_of_range(msg);
	return ret;
}

string& StrBlobPtr::deref() const
{
	auto p=check(curr,"dereference past end");
	return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
	auto p=check(curr++,"increament past end of StrBlobPtr");
	return *this;
}


StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this,data->size());
}

bool operator==(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
	return lhs.curr==rhs.curr;
}
bool operator!=(const StrBlobPtr &lhs,const StrBlobPtr &rhs)
{
	return !(lhs==rhs);
}
#endif
