#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cout;
using std::endl;
using std::vector;
using std::string;

	template<typename T>
int count(vector<T>const & v,T val)
{
	int count=0;
	for(auto i:v)
	{
		if(val==i)
		{
			++count;
		}
	}
	return count;
}
template<>
int count(vector<const char *> const &v,const char *val)
{
	int count=0;
	for(auto i:v)
		if(0==strcmp(val,i)) ++count;
	return count;
}
	
int main()
{
	std::vector<double> vd = { 1.1, 1.1, 2.3, 4 };
	std::cout << count(vd, 1.1) << std::endl;


	// for ex16.64
	std::vector<const char*> vcc = { "alan", "alan", "alan", "alan", "moophy" };
	std::cout << count(vcc, "alan") << std::endl;
	return  0;
}
