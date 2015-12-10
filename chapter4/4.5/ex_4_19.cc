ptr != 0 && *ptr++  // check ptr is not a nullptr, and then check the pointer value.
ival++ && ival // check ival, and then check ival+1 whether equal zero.
vec[ival++] <= vec[ival] // incorrect. It is an **undefined behavior.**
// correct:
// vec[ival] <= vec[ival+1]
