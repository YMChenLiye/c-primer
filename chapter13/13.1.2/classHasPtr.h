#include <string>
using std::string;

class HasPtr{
	public:
		HasPtr(const std::string &s=std::string()):ps(new std::string(s)),i(0){}
		HasPtr(const HasPtr &);
		HasPtr& operator=(const HasPtr &h) {
			i=h.i;
			string *p=new string(*h.ps);
			ps=p;
		}
	private:
		std::string *ps;
		int i;
};

HasPtr::HasPtr(const HasPtr &h)
{
	i=h.i;
	string *p=new string;
	*p=*h.ps;
	ps=p;
}

