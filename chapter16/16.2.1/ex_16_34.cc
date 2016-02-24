// Exercise 16.34:
// // Given only the following code, explain whether each of these calls is legal.
// // If so, what is the type of T? If not, why not?
// //     template <class T> int compare(const T&, const T&);
// //          compare("hi", "world");
// //  It didn't complie, as two types are different, the first type being char[3] , second char[6]
// //          compare("bye", "dad");
// //   the type should be pointer to char i.e. char*
// //
//


#include <iostream>
#include <string>
using std::string;

	template<typename T>
int compare(const T& t1,const T& t2)
{
	if(t1<t2) return -1;
	else if(t1>t2) return 1;
	else return 0;
}

int main()
{

	std::cout<<compare("hi","wo")<<std::endl;
	std::cout<<compare("hi","world")<<std::endl;

	return 0;
}
