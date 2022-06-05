# dlb_basic_flags

A simple library for doing bitwise with threadsafe.

## Information

*Single header, no external dependencies.
*Must compile on any compiler that has at least c++14
*Threadsafe class, no risk of accidental deathlocks in other classes.

In your class that uses bitwise, the nicest way to use it is to make your class inherit from dlb_basic_flags.

class basic_obj : public dlb_basic_flags
{
};

It contains a unique shared_mutex for bitwise operations. useful in
situations where you have multiple threads checking states, or waiting
signaling for a given task.


