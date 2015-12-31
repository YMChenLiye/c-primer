#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string together_name(const string &name,const string &pre,const string &suff)
{
	string result_name(pre);
	result_name.append(name);
	result_name.append(suff);
	return result_name;
}

int main()
{
	cout<<together_name("chen","Mr.","Jr.")<<endl;
	return 0;
}
