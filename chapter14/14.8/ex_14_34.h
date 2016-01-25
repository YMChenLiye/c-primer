class IfElse{
public:
	int operator()(bool first,int second,int third)
	{
		if(first)
		{
			return second;
		}
		else return third;
	}

};


