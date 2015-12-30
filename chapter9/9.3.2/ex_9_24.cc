#include <iostream>
#include <vector>
using std::endl;using std::cout;using std::vector;

int main()
{
	vector<int> vi/*={1,2}*/;
//	cout<<vi[0]<<endl;
//	cout<<vi.front()<<endl;
//	cout<<*(vi.begin())<<endl;
	cout<<vi.at(0)<<endl;
	/*terminate called after throwing an instance of 'std::out_of_range'
	 *   what():  vector::_M_range_check
	 *   [1]    5332 abort (core dumped)  ./a.out
	 *   
	 */
	return 0;
}
