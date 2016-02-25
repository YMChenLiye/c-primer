#include <iostream>
#include <string>
#include <memory>
#include <unordered_set>

using std::string;

//template<class T>class std::hash;

class Sales_data{
	friend class std::hash<Sales_data>;
	friend bool operator==(const Sales_data &lhs,const Sales_data &rhs)
	{
		return lhs.bookNo==rhs.bookNo;
	}
	public:
	Sales_data()=default;
	Sales_data(const string &s,unsigned u,double d):bookNo(s),units_sold(u),revenue(d) { }

	string bookNo;
	unsigned units_sold;
	double revenue;
};

namespace std{
	template<>
		class hash<Sales_data>
		{
			public:
				typedef size_t result_type;
				typedef Sales_data arguement_type;
				size_t operator()(const Sales_data& s) const;
		};

	size_t hash<Sales_data>::operator()(const Sales_data& s) const
	{
		return hash<string>()(s.bookNo) ^
			hash<unsigned>()(s.units_sold) ^
			hash<double>()(s.revenue);
	}
}


int main()
{
	
	std::unordered_multiset<Sales_data> mset;
	Sales_data sd("Bible", 10, 0.98);

	mset.emplace(sd);
	mset.emplace("C++ Primer", 5, 9.99);

	for(const auto &item : mset)
		std::cout << "the hash code of " << item.bookNo
			<<":\n0x" << std::hex << std::hash<Sales_data>()(item)
			<< "\n";

	return 0;
}
