// Exercise 16.38:
// // When we call make_shared (§ 12.1.1, p. 451), we have to provide an
// // explicit template argument. Explain why that argument is needed and
// // how it is used.
// //
// //  without specified type given, make_shared has no possibility to
// //  to determine how big the size it should allocate, which is the reason.
// //
// //  Depending on the type specified, make_shared allocates proper size of memory
// //  space and returns a proper type of shared_ptr pointing to it.
