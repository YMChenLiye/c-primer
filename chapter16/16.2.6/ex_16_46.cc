//
//// In each iteration, the dereference operator * returns a lvalue which is changed to rvalue by
//// std::move , becasue the member function construct takes rvalue reference rather than lvalue
//// reference.
