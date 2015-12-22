#include "class_Screen.bak.h"
#include <iostream>
using std::cout;
int main()
{
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);

	cout<<"ok"<<std::endl;
	cout<<"\n";
	myScreen.display(cout);
	cout<<"\n";
	cout<<"ok"<<std::endl;

	return 0;
}
