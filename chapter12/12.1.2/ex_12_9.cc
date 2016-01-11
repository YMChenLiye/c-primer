
to q and r:

Memory leakage happens. Because after r = q was executed, no pointer points to the int r had pointed to. It implies that no chance to free the memory for it.

to q2 and r2:

It's safe. Because after 'r2 = q2', the reference count belongs to r2 reduce to 0 and the reference count belongs to q2 increase to 2, then the memory allocated by r2 will be released automatically.
