#include <iostream>
#include <random>

unsigned random_gen();

unsigned random_gen(unsigned seed);

unsigned random_gen(unsigned seed,unsigned min,unsigned max);

int main()
{
	std::string temp;
	while(std::cin>> temp)
	{
		std::cout<<std::hex<<random_gen()<<std::endl;
	}

	return 0;
}

unsigned random_gen()
{
	static std::default_random_engine e;
	static std::uniform_int_distribution<unsigned> ud;
	return ud(e);
}

unsigned random_gen(unsigned seed)
{
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> ud;
	return ud(e);
}

unsigned random_gen(unsigned seed, unsigned min,unsigned max)
{
	static std::default_random_engine e(seed);
	static std::uniform_int_distribution<unsigned> ud(min,max);
	return ud(e);
}
