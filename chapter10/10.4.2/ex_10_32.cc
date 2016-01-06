#include <string>
#include <iostream>
#include <vector>
#include "Sales_item.h"
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
/*
   bool compareIsbn(const Sales_item &s1,const Sales_item &s2)
   {
   return s1.isbn()<s2.isbn();
   }
   */
int main()
{
	vector<Sales_item> vec;
	Sales_item item;
	while(cin>>item) vec.push_back(item);
	sort(vec.begin(),vec.end(),compareIsbn);

	vector<Sales_item>::iterator pos1=vec.begin();
	while(pos1!=vec.end())
	{
		string tmp=pos1->isbn();

		auto pos2=find_if(pos1,vec.end(),[tmp](Sales_item i){return i.isbn()!=tmp;});
		cout<<accumulate(pos1,pos2,Sales_item(pos1->isbn()))<<endl;
		pos1=pos2;
	}


	return 0;
}
