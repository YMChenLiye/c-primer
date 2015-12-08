#include <iostream>
using std::cout;
using std::endl;
int main()
{
	int arr[5]={1,2,3,4,5};
	int *p1=arr;
	int *p2=arr+3;
	cout<< *p1<< " " <<*p2<<endl;
	p1 += p2-p1;
	cout<< *p1<<" " <<*p2<<endl;

	return 0;
}
