If HasPtr didn't define a destructor, memory leak will happened. If HasPtr didn't define the copy constructor, when assignment happened, just points copied, the string which ps points haven't been copied.

