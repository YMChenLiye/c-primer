#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string str,currStr;
	int cnt=1;
	string maxStr;
	int maxCnt=0;
	cin>>str;
	while(cin>>currStr)
	{
		if(currStr==str)
		{
			++cnt;
		}
		else
		{
			if(cnt>maxCnt)
			{
				maxCnt=cnt;
				maxStr=str;
			}
			str=currStr;
			cnt=1;
		}
	}

	cout<<maxStr<<" occurs "<<maxCnt<<" times"<<endl;

	return 0;
}
