(a) Illegal declaration : string::iterator iter != s.end()

	//corrrected as:
	//std::string::iterator iter = s.begin();
	//while (iter != s.end()) { /* . . . */ }
	//
	//(b) Variable status is only declared inside scope of while condition.
	//
	////corrrected as:
	//while (bool status = find(word)) { 
	//    /* ... */ 
	//        if (!status) { /* ... */ }
	//        }
