*This project has been created as part of the 42 curriculum by hecalder.*

# ft_printf

## Description

**ft_printf** is a reimplementation of the standard C `printf` function, developed as part of the 42 curriculum.  
The goal of this project is to gain a deep understanding of variadic functions, formatted output, memory management, and low-level I/O in C.

The function reproduces the core behavior of `printf`, handling a subset of format specifiers while strictly respecting the constraints imposed by the project (no use of the original `printf`, limited standard library functions, and strict coding rules).

Supported conversions include:
- `%c` – character
- `%s` – string
- `%d` / `%i` – signed decimal integer
- `%u` – unsigned decimal integer
- `%x` / `%X` – hexadecimal (lowercase / uppercase)
- `%p` – pointer address
- `%%` – percent sign

---

## Instructions

### Compilation

The project is compiled as a static library named `libftprintf.a`.

To build the library, simply run:

```bash
make
```
This will:

Compile all .c files into .o object files

Archive them into `libftprintf.a`

### Available Makefile rules
```bash
make
make all
```
Compiles the library.
```bash
make clean
```
Removes all object files (.o).
```bash
make fclean
```
Removes object files and the library (ft_printf.a).
```bash
make re
```
Rebuilds the project from scratch (fclean + all).

### Usage

To use `ft_printf` in your own program:

1. Include the header:
```C
#include "ft_printf.h"
````
2. Compile your program linking against the library:
```bash
cc main.c -L. -lftprintf
````
3. Example:
```C
ft_printf("Value: %d, Hex: %x\n", 42, 42);
````
---

## Technical Choices
### Variadic Arguments
The core of `ft_printf` relies on variadic functions using:

`va_list`

`va_start`

`va_arg`

`va_end`

Each format specifier determines the exact type passed to `va_arg`, which is critical to avoid undefined behavior.

### Design and Structure

The project is split into multiple source files to:

Respect the Norminette

Keep responsibilities clearly separated

Improve readability and maintainability

### Main components:

Selector logic: determines which conversion function to call

Character & string handling

Integer and base conversion utilities

Hexadecimal and pointer formatting

Number Conversion

Signed integers are handled with a custom `ft_itoa`

Unsigned integers use `ft_utoa`

Hexadecimal and pointer values are converted using a generic base conversion function `ft_utoa_base`

This approach avoids duplicated logic and ensures consistency across formats.
Resources

---
## Documentation & References

`man printf`

`man stdarg`

`The C Programming Language – Kernighan & Ritchie`

`GNU C Library Documentation`

`Artificial Intelligence Usage`

AI tools were used strictly as a learning assistant, not as a code generator.
They were used for:

Conceptual explanations (variadic functions, memory management)

### Debugging guidance

Code review and refactoring suggestions

Structuring the project and README

All code was written, tested, and understood by the author.

---
## Final Notes

This project was designed to prioritize:

Correctness

Memory safety

Readability

Compliance with 42 Norminette rules

It serves as a strong foundation for future projects involving formatted output, parsing, and low-level systems programming.