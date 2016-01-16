#ifndef ex_13_27_h
#define ex_13_27_h
#include <string>

using std::string;

class HasPtr
{
	public:
		HasPtr(const string &s=string()) :ps(new string(s)),i(0),use(new int(1)) { }
		HasPtr(const HasPtr &h):i(h.i),ps(h.ps),use(h.use) { *use++;}
		HasPtr& operator=(const HasPtr &h)
		{
			(*h.use)++;
			(*use)--;
			if(*use==0)
			{
				delete ps;
				delete use;
			}
			use=h.use;
			ps=h.ps;
			i=h.i;
			return *this;
		}
		~HasPtr()
		{
			(*use)--;
			if(*use==0)
			{
				delete ps;
				delete use;
			}
		}
	private:
		string *ps;
		int i;
		int *use;
};

#endif
