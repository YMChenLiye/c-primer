#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string goal{"aceimnorsuvwxz"};
	string curr;
	int longest=0;
	while(cin>>curr)
	{
		if(curr.find_first_not_of(goal)==string::npos)
		{
			if(longest<curr.size())
			{
				longest=curr.size();
			}
		}
	}
	cout<<longest<<endl;
	return 0;
}
