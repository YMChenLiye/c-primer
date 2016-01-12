#include "ex_12_19.h"
#include <fstream>

using std::ifstream;

int main(int argc,char **argv)
{
	StrBlob blob;
	ifstream input(argv[1]);
	string line;
	while(getline(input,line))
	{
		blob.push_back(line);
	}
	StrBlobPtr beg=blob.begin();
	while(beg.pointer()!=blob.end().pointer())
	{
		std::cout<<beg.deref()<<std::endl;
		beg.incr();
	}

	return 0;
}

