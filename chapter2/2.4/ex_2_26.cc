#include <iostream>

int main()
{
//	const int buf;   ex_2_26.cc:5:12: error: uninitialized const ‘buf’ [-fpermissive]
	int cnt=0;
	const int sz=cnt;
	++cnt;
//	++sz;   ex_2_26.cc:9:4: error: increment of read-only variable ‘sz’

	return 0;
}
