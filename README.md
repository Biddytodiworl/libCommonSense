# libCommonSense

libCommonSense is a C library that provides uniform functionality
for simple procedures often repeated over and over in C. It helps
to prevent people from reinventing the wheel and helps them to
focus on what really matters. It is also very portable with its
strict C89 conformance.

## Building
To build libCommonSense, you will need the GCC compiler,
any one will do, and make. If you are on Linux, the GCC compiler
should be installed already, though that is no guarantee. Check
your distribution for information.
If you're on Windows, use the MinGW compiler.

Now, with compiler in hand, execute:

```
make all
```

or:

```
mingw32-make all
```

That's it. Nothing complicated needs to be done, besides probably changing compiler flags.
Replace all instances of `make` for `mingw32-make` if you use MinGW. If you want
a shared library, execute:

```
make shared
```

To get a static library, type:

```
make static
```

To compile tests seperately (done automatically by the all target), execute:
```
make test
```

## Documentation
Coming soon in PDF form!

## Contributing
This library is very young. If you like the library and wish to contribute
to it, feel free to contact me by [email](mailto:biddytodiworl@outlook.com).

## Licence
This library is licensed under the awesome MIT Licence and a copy is found
with the software. If the library doesn't have a LICENCE
file, you can find a copy [here][licence].

[licence]: https://opensource.org/licenses/MIT
