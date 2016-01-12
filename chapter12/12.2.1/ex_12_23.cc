#include <iostream>
#include <string>
#include <memory>
#include <cstring>

using std::cout;
using std::endl;
using std::string;

int main()
{
	char *concatenate_string = new char[strlen("hello " "world") + 1]();
	strcat(concatenate_string, "hello ");
	strcat(concatenate_string, "world");
	std::cout << concatenate_string << std::endl;
	delete [] concatenate_string;


	string str1="hello ",str2="world";
	cout<<str1+str2<<endl;

	return 0;
}
