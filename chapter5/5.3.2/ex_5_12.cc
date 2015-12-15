#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	char i;
	int ffCnt=0,flCnt=0,fiCnt=0;

	while(cin>>i)
	{
		if(i=='f')
		{
			char j;
			cin>>j;
			switch(j)
			{
				case 'f':
					++ffCnt;
					break;
				case 'l':
					++flCnt;
					break;
				case 'i':
					++fiCnt;
					break;
			}
		}
	}

	cout<<ffCnt<<" "<<flCnt<<" " <<fiCnt<<endl;

	return 0;
}
