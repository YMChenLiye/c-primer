#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem,item;
	if(std::cin>> currItem)
	{
		while(std::cin>> item)
		{
			if(item.isbn()==currItem.isbn())
			{
				currItem+=item;
			}
			else
			{
				std::cout<<currItem<<std::endl;
				currItem=item;
			}
		}
		std::cout<<currItem<<std::endl;
		
	}

	return 0;
}

