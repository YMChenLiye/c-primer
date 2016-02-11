#include <iostream>

using namespace std;

	template<typename T,unsigned N>
void print(const T (&a)[N])
{
	for(size_t i=0;i!=N;++i)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	std::string s[] = { "ssss", "aaa", "ssssss" };
	char c[] = { 'a', 'b', 'c', 'd' };
	int  i[] = { 1 };
	print(i);
	print(c);
	print(s);

	return 0;
}
