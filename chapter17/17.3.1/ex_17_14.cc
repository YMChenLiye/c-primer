#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::regex_error;

int main()
{
	//for ex17_14
	//err_brack
	try{
		regex r("[[:alnum:]+\\.(cpp|cxx|cc)$", regex::icase);
	}
	catch(regex_error e)
	{
		cout<<e.what()<<" code: "<<e.code()<<endl;
	}

	// for ex17.15
	regex r("[[:alpha:]]*[^c]ei[[:alpha:]]*", regex::icase);
	string s;
	std::smatch result;
	cout << "Please input a word! Input 'q' to quit!" << endl;
	while(cin >> s && s != "q")
	{
		if(std::regex_search(s,result,r))
			cout << "Input word " << s << " is okay!" << endl;
		else
			cout << "Input word " << s << " is not okay!" <<endl;

		cout << "Please input a word! Input 'q' to quit!" << endl;
	}

	cout << endl;


	//for ex17.16
	r.assign("[^c]ei", regex::icase);
	cout << "Please input a word! Input 'q' to quit!" << endl;
	while(cin >> s && s != "q")
	{
		if(std::regex_match(s, r))
			cout << "Input word " << s << " is okay!" << endl;
		else
			cout << "Input word " << s << " is not okay!" <<endl;

		cout << "Please input a word! Input 'q' to quit!" << endl;
	}

	return 0;
}
