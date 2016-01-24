Differ 

	1. We can call an overloaded operator function directly. 2. An overloaded operator function must either be a member of a class or have at least one parameter of class type. 3. A few operators guarantee the order in which operands are evaluated. These overloaded versions of these operators do not preserve order of evaluation and/or short-circuit evaluation, it is usually a bad idea to overload them.
Same

    An overloaded operator has the same precedence and associativity as the corresponding built-in operator.

