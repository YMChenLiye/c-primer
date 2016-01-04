#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

struct Sales_data
{
	Sales_data(string s){isbn=s;}
	string isbn;
	unsigned units_sold=0;
	double revenue=0.0;
};

bool compareIsbn(const Sales_data &item1,const Sales_data &item2)
{
	return item1.isbn < item2.isbn;
}

int main()
{
	Sales_data d1("aa"), d2("aaaa"), d3("aaa"), d4("z"), d5("aaaaz");
	std::vector<Sales_data> v{ d1, d2, d3, d4, d5 };
	sort(v.begin(),v.end(),compareIsbn);
	for(auto i:v) cout<<i.isbn<<" ";
	cout<<endl;

	return 0;
}
