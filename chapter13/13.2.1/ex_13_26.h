#ifndef ex_13_26_h
#define ex_13_26_h
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>

using std::vector;
using std::shared_ptr;
using std::string;
using std::make_shared;

class StrBlob{
	public:
		StrBlob():data(make_shared<vector<string>>()){}
		StrBlob(std::initializer_list<string> il) :data(make_shared<vector<string>>(il)) { }
		//copy control
		StrBlob(const StrBlob& str) : data(make_shared<vector<string>>(*str.data)) { }
		StrBlob& operator=(const StrBlob& str)
		{
			auto p=make_shared<vector<string>>(*str.data);
			data=p;
			return *this;
		}
		

	private:
		shared_ptr<vector<string>> data;
};




#endif 
