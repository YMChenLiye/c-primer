#ifndef ex_7_9_h
#define ex_7_9_h

#include <string>
using std::string;
struct Person;
std::istream read(std::istream &is,Person people);
struct Person 
{	
	Person()=default;
	Person(const string &sname,const string &saddress):name(sname),address(saddress) {}
	Person(std::istream &is){read(is,*this);}
	std::string name;
	std::string address;
	string & get_name() const
	{
		return name;
	}
	string &get_add() const
	{
		return address;
	}
};

std::istream read(std::istream &is,Person people)
{
	is>>people.name>>people.address;
	return is;
}

std::ostream print(std::ostream &os,Person people)
{
	os<<people.name<<people.address;
	return os;
}
#endif

