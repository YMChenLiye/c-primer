#include <iostream>
#include <stdexcept>
using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
int main()
{
	for(int first,second;cout<<"please enter two number "<<endl,cin>>first>>second;)
	{
		try{
			if(second==0)
			{
				throw runtime_error("second number can't be zero");
			}
			else
			{
				cout<<first/second<<endl;
			}
		}catch(runtime_error err)
		{
			cout<<err.what()<<endl;
			cout<<"please enter angin"<<endl;
		}
	}
	return 0;
}
