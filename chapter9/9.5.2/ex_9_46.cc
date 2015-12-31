#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string together_name(const string &name,const string &pre,const string &suff)
{
	string result_name(name);
	result_name.insert(0,pre);
	result_name.insert(result_name.size(),suff);
	
	return result_name;
}

int main()
{
	cout<<together_name("chen","Mr.","Jr.")<<endl;
	return 0;
}
