#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> grades={"F","D","C","B","A","A++"};
	int grade;
	string result;
	while(cin>>grade)
	{
		if(grade<60)
		{
			result="F";
		}
		else
		{
			int index=(grade-50)/10;
			result=grades[index];
			if(grade!=100)
			{
				result+= grade%10 <3 ? "-":grade%10 >7 ? "+" : "";
			}

		}
		cout<<result<<endl;
	}

	return 0;
}

