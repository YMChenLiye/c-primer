// Exercise 16.37:
// // The library max function has two function parameters and returns the
// // larger of its arguments. This function has one template type parameter.
// // Could you call max passing it an int and a double? If so, how? If not,
// // why not?
// //  Yes, just offer an explicit template argument, like:
// //  int a = 1;
// //  double b = 2;
// //  std::max<double>(a, b);
