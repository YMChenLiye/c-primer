#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include "DebugDelete.h"
#include "Shared_ptr.h"
#include "Unique_ptr.h"
#include "Blob.h"

int main()
{
	Blob<std::string> b;
	b.push_back("sss");


	b[0] = "zzzz";
	std::cout << b[0] << "\n";
}
