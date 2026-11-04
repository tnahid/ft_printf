*This project has been created as part of the 42 curriculum by tnahid.*

# ft_printf

## Description

`ft_printf` is a reimplementation of the standard C `printf()` function.

The goal of this project is to understand how formatted output works in
C, especially how a variadic function receives and retrieves arguments
of different types.

The library provides `ft_printf()`, which reads a format string,
identifies conversion specifiers, retrieves the corresponding arguments,
converts them into printable representations when necessary, and writes
the result to standard output.

## Instructions

Compile the project:

```bash
make
```

This creates the `libftprintf.a` static library.

To use it, include `ft_printf.h` in your C file and compile:

```bash
cc main.c libftprintf.a -o program
```

Run the program:

```bash
./program
```

## Algorithm

`ft_printf` walks through the format string once, with an index `i`.

- If the current character is `%` **and** the next character is one of
  the supported specifiers (`cspdiuxX%`, checked by `check_format`), the
  specifier is consumed and `what_format` handles it.
- Otherwise the character is printed as it is.

### Data structures

There are none beyond a few local variables: the format string index, the
character counter, and the `va_list`. No arrays, lists or heap memory are
needed, which keeps the code small and free of memory management.

# Supported Conversions

- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d` and `%i` — signed integer
- `%u` — unsigned integer
- `%x` and `%X` — hexadecimal
- `%%` — percent sign

## Resources

- printf manual page.
- stdarg manual page.
- youtube videos about variadic functions.

# AI Usage

AI was used to understand concepts and learn about variadic functions in C.
