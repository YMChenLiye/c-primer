#ifndef ex_7_22_h
#define ex_7_22_h

#include <string>
using std::string;
class Person 
{	
friend std::istream &read(std::istream &is,Person &people);
friend std::ostream &print(std::ostream &os,Person &people);
public:
	Person()=default;
	Person(const string &sname,const string &saddress):name(sname),address(saddress) {}
	Person(std::istream &is){read(is,*this);}
	string get_name() const
	{
		return name;
	}
	string get_add() const
	{
		return address;
	}
private:
	std::string name;
	std::string address;
};

std::istream &read(std::istream &is,Person &people)
{
	is>>people.name>>people.address;
	return is;
}

std::ostream &print(std::ostream &os,Person &people)
{
	os<<people.name<<people.address;
	return os;
}
#endif

