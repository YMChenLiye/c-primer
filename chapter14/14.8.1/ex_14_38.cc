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
	int cnt=0;
	while(cin>>word)
	{
		if(between(word)) ++cnt;
	}
	cout<<cnt<<endl;

	return 0;
}
