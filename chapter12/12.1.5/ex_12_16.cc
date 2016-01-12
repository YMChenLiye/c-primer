#include <iostream>
#include <memory>
using std::unique_ptr;

int main()
{
	unique_ptr<int> p(new int(41));
	unique_ptr<int> p1=p;
//error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = int; _Dp = std::default_delete<int>]’
	return 0 ;
}
