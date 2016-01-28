struct Integral {
	operator const int();   // meaningless, it will be ignored by compiler.
	operator int() const;   // promising that this operator will not change the state of the obj
};
