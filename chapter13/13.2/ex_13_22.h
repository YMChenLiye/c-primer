#ifndef ex_13_22_h
#define ex_13_22_h

#include <iostream>
#include <string>

using std::string;

class HasPtr{
	public:
		HasPtr(const string &s,int val=0) : ps(new string(s)),i(val) {}
		HasPtr(const HasPtr &h):ps(new string(*h.ps)),i(h.i) {}
		HasPtr& operator=(const HasPtr &h){
			i=h.i;
			string *p=new string(*h.ps);
			delete ps;
			ps=p;
			return *this;
		}
		~HasPtr(){
			delete ps;
		}

	private:
		string *ps;
		int i;
};

#endif
