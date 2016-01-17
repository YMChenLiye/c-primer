#ifndef ex_13_22_h
#define ex_13_22_h

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr{
	friend void swap(HasPtr&lhs,HasPtr&rhs)
	{
		using std::swap;
		swap(lhs.ps,rhs.ps);
		swap(lhs.i,rhs.i);
		cout<<"call swap(HasPtr&,HasPtr&)"<<endl;
	}
	friend bool operator<(const HasPtr &lhs,const HasPtr &rhs)
	{
		return lhs.i<rhs.i;
	}
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

//	private:
		string *ps;
		int i;
};

#endif
