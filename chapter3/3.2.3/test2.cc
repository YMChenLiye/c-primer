#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main()
{
	const string hexdigits="0123456789abcdef";
	cout<<"Enter a series of numbers between 0 and 15"
		<<" separated by space. Hit ENTER when finished; "
		<<endl;

	string result;
	string::size_type n;
	while(cin>>n)
	{
		if(n<hexdigits.size())
		{
			result+=hexdigits[n];
		}
	}
	cout<<" Your hex number is : " <<result<<endl;
//	hexdigits[2]='a';  26:14: error: assignment of read-only location ‘hexdigits.std::basic_string<_CharT, _Traits, _Alloc>::operator[]<char, std::char_traits<char>, std::allocator<char> >(2ul)’
	return 0;
}
