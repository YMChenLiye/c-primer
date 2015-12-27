In my opinion , the aim of the problem is Aggregate Class. Test-makers think that Sales_data is Aggregate Class, so Sales_data should have no in-class initializers if we want to initialize the data members of an aggregate class by providing a braced list of member initializers:

	FIXED:

	struct Sales_data {
		std::string bookNo;
		unsigned units_sold;
		double revenue;
	};
