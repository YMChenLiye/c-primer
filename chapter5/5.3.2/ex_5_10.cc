#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0,blankCnt=0,tabCnt=0,newlineCnt=0;
	char i;
	while(cin>>std::noskipws>>i)
	{
		switch(i)
		{
			case 'a':
			case 'A':
				++aCnt;
				break;
			case 'e':case 'E':
				++eCnt;
				break;
			case 'i':case 'I':
				++iCnt;
				break;
			case 'o':case 'O':
				++oCnt;
				break;
			case 'u':case 'U':
				++uCnt;
				break;
			case ' ':
				++blankCnt;
				break;
			case '\t':
				++tabCnt;
				break;
			case '\n':
				++newlineCnt;
				break;
		}
	}

	cout<<aCnt<<" "<<eCnt<<" "<<iCnt<<" "<<oCnt<<" "<<uCnt<<endl;
	cout<<blankCnt<<" "<<tabCnt<<" "<<newlineCnt<<endl;


	return 0;
}
