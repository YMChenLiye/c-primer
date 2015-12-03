#include <iostream>
#include <string>


struct Sales_data
{
	std::string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};

int main()
{
	Sales_data currData,data;
	double price;

	if(std::cin>>currData.bookNo>>currData.units_sold>>price)
	{
		currData.revenue=currData.units_sold * price;

		while(std::cin>>data.bookNo>>data.units_sold>>price)
		{
			data.revenue=data.units_sold * price;

			if(currData.bookNo==data.bookNo)
			{
				currData.units_sold += data.units_sold;
				currData.revenue += data.revenue;
			}
			else
			{
				std::cout<<currData.bookNo<<" "<<currData.units_sold<<" "<<currData.revenue<<" ";
				if(currData.units_sold != 0)
				{
					std::cout << currData.revenue/currData.units_sold<<std::endl;
				}
				else
				{
					std::cout <<"no sales"<<std::endl;
				}
				currData=data;
			}
		}

	
	std::cout<<currData.bookNo<<" "<<currData.units_sold<<" "<<currData.revenue<<" ";
		if(currData.units_sold != 0)
		{
			std::cout << currData.revenue/currData.units_sold<<std::endl;
		}
		else
		{
			std::cout <<"no sales"<<std::endl;
		}
		
	}
	else
	{
		std::cout<<"no data"<<std::endl;
	}
	return 0;
}

