#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::istream;

class ReadString{
public:
	ReadString(istream &i=cin):is(i) { }
	string& operator()(string &s)
	{
		if(getline(is,s))
		{
			return s;
		}
		else
		{
			s=string();
			return s;
		}
	}


private:
	istream& is;
	string curr;
};
