#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sz;
	cout<<"enter your string's length"<<endl;
	cin>>sz;
	cin.ignore();
	char *p=new char[sz+1];
	cin.get(p,sz+1);
	cout<<p;

	return 0;
}
