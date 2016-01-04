@Mooophy: The aim of this design is to separate the algorithms and the operation provided by member function.

@pezy: Cause the library algorithms operate on iterators, not containers. Thus, an algorithm cannot (directly) add or remove elements.
