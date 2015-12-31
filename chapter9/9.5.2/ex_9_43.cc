#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void foo(string &s,const string &oldVal,const string &newVal)
{
	for(auto iter=s.begin();iter<=s.end()-oldVal.size();)
	{
		if(oldVal==string(iter,iter+oldVal.size()))
		{
			iter=s.erase(iter,iter+oldVal.size());
			iter=s.insert(iter,newVal.begin(),newVal.end());
			iter+=newVal.size();
		}
	}
}

int main()
{
	string s{ "To drive straight thru is a foolish, tho courageous act." };
	foo(s, "tho", "though");
	foo(s, "thru", "through");
	cout << s << endl;

	return 0;
}
