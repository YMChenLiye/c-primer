#include <iostream>
#include <memory>
using std::endl;
int main()
{
	int i,*pi1=&i,*pi2=nullptr;
	double *pd=new double(33),*pd2=pd;
//	delete i;
//	delete pi1;
//	std::cout<<"ok"<<endl;
	delete pd;
	std::cout<<"ok"<<endl;
//	delete pd2;
	delete pi2;

	std::cout<<"ok"<<endl;

	return 0;
}
