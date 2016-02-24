// Exercise 16.36:
// // What happens in the following calls:
// //         template <typename T> f1(T, T);
// //         template <typename T1, typename T2) f2(T1, T2);
// //         int i = 0, j = 42, *p1 = &i, *p2 = &j;
// //         const int *cp1 = &i, *cp2 = &j;
// //             (a) f1(p1, p2);     // f1<int*>(int*, int*)
// //             (b) f2(p1, p2);     // f2<int*, int*>(int*, int*)
// //             (c) f1(cp1, cp2);   // f1<int const*>(int const*, int const*)
// //             (d) f2(cp1, cp2);   // f2<int const*, int const*>(int const*, int const*)
// //             (e) f1(p1, cp1);    // deduced conflicting types for parameter 'T'
// //             (f) f2(p1, cp1);    // f2<int*, int const*>(int*, int const*)
// //
