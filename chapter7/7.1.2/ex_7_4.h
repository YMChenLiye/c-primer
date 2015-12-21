#ifndef ex_7_4_h
#define ex_7_4_h

#include <string>
using std::string;

struct Person 
{
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

#endif

