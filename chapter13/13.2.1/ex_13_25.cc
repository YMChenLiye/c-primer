Copy constructor and copy-assignment operator should dynamically allocate memory for its own , rather than share the object with the right hand operand.

StrBlob is using smart pointers which can be managed with synthesized destructor, If an object of StrBlob is out of scope, the destructor for std::shared_ptr will be called automatically to free the memory dynamically allocated when the use_count goes to 0.
