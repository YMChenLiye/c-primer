#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string str1,str2;
	char i;
	do{

		cin>>str1>>str2;
		cout<<((str1 < str2) ? "str1" : "str2") <<" is less "<<endl;
		cout<<"do you enter more? y or n"<<endl;
		cin>>i;
	}
	while(i=='y');

	return 0;

}
