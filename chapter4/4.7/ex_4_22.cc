#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;
	cin>>grade;
	string finalgrade;
	finalgrade=(grade>90)	 ? "high pass"
						 	 :(grade <60) 	? "fail"
							 				:(grade < 75)	? "low pass"
															:"pass";
	cout<<finalgrade<<endl;
	
	if(grade > 90)
	{
		finalgrade="high pass";
	}
	else if(grade < 60)
	{
		finalgrade ="fail";
	}
	else if(grade < 75)
	{
		finalgrade="low pass";
	}
	else
	{
		finalgrade="pass";
	}
	

	return 0;
}
