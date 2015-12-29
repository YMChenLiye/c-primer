The question example codes have an error in gcc 4.8:

    error: inconsistent deduction for ‘auto’: ‘__gnu_cxx::__normal_iterator >’ and then ‘__gnu_cxx::__normal_iterator >’ auto it1 = v1.begin(), it2 = v2.begin();

	the correct codes should be:

	auto it1 = v1.begin();
	auto it2 = v2.begin(), it3 = v1.cbegin(), it4 = v2.cbegin();

	it1 is vector<int>::iterator

	it2, it3 and it4 are vector<int>::const_iterator
