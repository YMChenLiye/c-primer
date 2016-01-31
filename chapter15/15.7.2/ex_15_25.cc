Without it, when building the statement below, the compiler would complain that:

note: 'Bulk_quote::Bulk_quote()' is implicitly deleted because the default definition would be ill-formed.

The reason is that a constructor taking 4 parameters has been defined, which prevented the compiler generate synthesized version default constructor.

As a result, the default constructor of any class derived from it has been defined as deleted. Thus the default constructor must be defined explicitly so that the derived classes can call it when executing its default constructor.
