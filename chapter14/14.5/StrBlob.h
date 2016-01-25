#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <initializer_list>
#include <exception>
using std::vector;
using std::string;

class StrBlob{
	friend bool operator==(const StrBlob&,const StrBlob&);
	friend bool operator!=(const StrBlob&,const StrBlob&);
	public:
		typedef std::vector<std::string>::size_type size_type;
		StrBlob();
		StrBlob(std::initializer_list<std::string> il);
		size_type size() const { return data->size();}
		bool empty() const { return data->empty(); }
		//add and remove elements;
		void push_back(const std::string &s) { data->push_back(s); }
		void pop_back();
		string& operator[](size_t n) { return (*data)[n]; }
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

bool operator==(const StrBlob&lhs,const StrBlob &rhs)
{
	return *lhs.data==*rhs.data;
}
bool operator!=(const StrBlob &lhs,const StrBlob &rhs)
{
	return !(lhs==rhs);
}

