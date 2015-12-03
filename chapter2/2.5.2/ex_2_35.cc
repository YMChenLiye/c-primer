#include <iostream>

int main()
{
	const int i=42;//i is cosnt int
	auto j=i;//j is int
	const auto &k=i;//k is const int &
	auto *p=&i;//p is const int *
	const auto j2=i,&k2=i;//j2 is const int ;   k2 is const int &


	return 0;

}
