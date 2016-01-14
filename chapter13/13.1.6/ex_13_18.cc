#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Employee{
	public:
		static int data;
		Employee() { unique=++data; }
		Employee(const string s):name(s){ unique=++data; }
		Employee(const Employee& e)=delete;//cause there really is no sensible meaning. employee can't copy in real world.
		Employee& operator=(const Employee &e)=delete;
	private:
		string name;
		int unique;
};

int Employee::data=0;

