#include <iostream>
#include <vector>
using std::vector;
class NoDefault
{
public:
	NoDefault(int number){}
};

class C
{
public:
	C():obj(0){}
private:
	NoDefault obj;
};

int main()
{
	C c;
	vector<C> vec(10);
	return 0;
}

