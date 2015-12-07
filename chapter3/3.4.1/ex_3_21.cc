#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::endl;
using std::cout;
int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10,"hi"};
	
	
	
	
	
	
	
	cout<<"v1 has "<<v1.size()<<" objects  value:["<<endl;
	for(auto item=v1.cbegin();item !=v1.cend();item++)
	{
		cout<<*item<<(item==v1.cend()-1?"]\n" :",");
	}
	cout<<"v2 has "<<v2.size()<<" objects  value:[";
	for(auto item=v2.cbegin();item !=v2.cend();item++)
	{
		cout<<*item<<(item==v2.cend()-1? "]\n" :",");
	}
	cout<<"v3 has "<<v3.size()<<" objects  value:[";
	for(auto item=v3.cbegin();item !=v3.cend();item++)
	{
		cout<<*item<<(item==v3.cend()-1? "]\n" :",");
	}
	cout<<"v4 has "<<v4.size()<<" objects  value:[";
	for(auto item=v4.cbegin();item !=v4.cend();item++)
	{
		cout<<*item<<(item==v4.cend()-1? "]\n" :",");
	}
	cout<<"v5 has "<<v5.size()<<" objects  value:[";
	for(auto item=v5.cbegin();item !=v5.cend();item++)
	{
		cout<<*item<<(item==v5.cend()-1? "]\n" :",");
	}
	cout<<"v6 has "<<v6.size()<<" objects  value:[";
	for(auto item=v6.cbegin();item !=v6.cend();item++)
	{
		cout<<*item<<(item==v6.cend()-1? "]\n" :",");
	}
	cout<<"v7 has "<<v7.size()<<" objects  value:[";
	for(auto item=v7.cbegin();item !=v7.cend();item++)
	{
		cout<<*item<<(item==v7.cend()-1? "]\n" :",");
	}


	return 0;
}
