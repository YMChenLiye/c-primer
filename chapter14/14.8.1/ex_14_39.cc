#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

class Between{
	public:
		Between(int a,int b):min(a),max(b) { }
		bool operator()(string &s)
		{
			return s.size()>=min && s.size()<=max;
		}

	private:
		int min=0;
		int max=0;
};


int main()
{
	string word;
	Between between(1,10);
	int cnt1=0;
	int cnt2=0;
	while(cin>>word)
	{
		if(between(word)) ++cnt1;
		else ++cnt2;
	}
	cout<<cnt1<<" "<<cnt2<<endl;

	return 0;
}
