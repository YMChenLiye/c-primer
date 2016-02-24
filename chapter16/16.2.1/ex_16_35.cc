
// Exercise 16.35:
// // Which, if any, of the following calls are errors? If the call is legal, what
// // is the type of T? If the call is not legal, what is the problem?
// //      template <typename T> T calc(T, int);
// //      template <typename T> T fcn(T, T);
// //         double d;    float f;    char c;
// //         (a) calc(c, 'c');   -- legal, T is a char
// //         (b) calc(d, f);     -- legal, T is a double
// //         (c) fcn(c, 'c');    -- legal, T is a char
// //         (d) fcn(d, f);      -- illegal, arguments d and f are double and float repectively
