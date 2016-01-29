

Which of the following declarations, if any, are incorrect? Explain why.

class Base { ... };

(a) class Derived : public Derived { ... };

(b) class Derived : private Base { ... };

(c) class Derived : public Base;

(a): incorrect, deirve from itself.
	 (b): incorrect, this is a definition not a declaration.
		  (c): incorrect, A derived class is declared like any other class. The declaration contains the class name but does not include its derivation list.

