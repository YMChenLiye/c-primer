#include <iostream>



int main()
{
	int i=7;
	//auto check_and_decrement = [&i](){ return --i ? false : true; };
	auto check_and_decrement = [&i]()->bool {if(i>0) --i;return i==0;};
	std::cout << "ex10.21: ";
	while(!check_and_decrement())
		std::cout << i << " ";
	std::cout << i << std::endl;
	return 0;
}
