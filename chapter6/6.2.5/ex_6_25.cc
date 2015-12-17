#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main(int argc,char **argv)
{
	string arg1=argv[1];
	string arg2=argv[2];
	arg1+=arg2;
	cout<<arg1<<endl;

	return 0;
}
