C++ guarantees short and int is at least 16 bits, long at least 32 bits, long long at least 64 bits.

The signed can represent positive numbers, negative numbers and zero, while unsigned can only represent numbers no less than zero.

The C and C++ standards do not specify the representation of float, double and long double. It is possible that all three implemented as IEEE double-precision. Nevertheless, for most architectures (gcc, MSVC; x86, x64, ARM) float is indeed a IEEE single-precision floating point number (binary32), and double is a IEEE double-precision floating point number (binary64).

Usage:

    Use int for integer arithmetic. short is usually too small and, in practice, long often has the same size as int. If your data values are larger than the minimum guaranteed size of an int, then use long long. (In a word: short < int < long < long long)

    Use an unsigned type when you know that the values cannot be negative. (In a word: no negative, unsigned.)

    Use double for floating-point computations; float usually does not have enough precision, and the cost of double-precision calculations versus single-precision is negligible. In fact, on some machines, double-precision operations are faster than single. The precision offered by long double usually is unnecessary and often entails considerable run-time cost. (In a word: float < double < long double)


