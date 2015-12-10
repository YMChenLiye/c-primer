#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	cout<<"size of int "<<sizeof(int)<<endl;
	cout<<"size of short "<<sizeof(short)<<endl;
	cout<<"size of char "<<sizeof(char)<<endl;
	cout<<"size of string "<<sizeof(string)<<endl;
	cout<<"size of float "<<sizeof(float)<<endl;
	cout<<"size of long "<<sizeof(long)<<endl;
	cout<<"size of double "<<sizeof(double)<<endl;
	cout<<"size of point "<<sizeof(void *)<<endl;

	return 0;
}
