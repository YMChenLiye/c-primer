#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	unsigned scores[11]{};//if we did not initialize the scores array , element in scores are undefined;
	unsigned grade;
	while(cin>>grade)
	{
		if(grade<=100)
		{
			++scores[grade/10];
		}
	}
	for(auto i:scores)
	{
		cout<<i<<" ";
	}
	return 0;
}
