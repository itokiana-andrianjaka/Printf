*The very first line must be italicized and read: This project has been created as part of the 42 curriculum by tiana-an*

# **ft_printf**
`Because ft_putnbr() and ft_putstr() aren’t enough`
## Description
**`ft_printf:`**  
Recreation of the printf function of the C standard library. This project implemented 
basic conversions (%c, %s, %d, %i, %u, %x, %X, %p, %%) using 
variable functions and output buffer management.

---
### Conversions implemented
-   `'%c':` character
-   `'%s':` character string
-   `'%p':` pointer address (hexadecimal)
-   `'%d' /'%i':` signed integer (base 10)
-   `'%u':` unsigned integer (base 10)
-   `'%x':` tiny hexadecimal
-   `'%X':` uppercase hexadecimal
-   `'%%':` percentage symbol


## Instructions
The compilation is done using a **`Makefile`** with the `cc` compiler followed by the following flags:  
- `-Wall`: main warnings;  
- `-Wextra`: additional warnings;  
- `-Werror`: turns warnings into errors.  
But to compile the ****ft_printf.a library****, I added **`ar`** followed by **`rcs`** to the **Makefile** for exception (The most important).

This Makefile contains the rules **$(NAME), all, clean, fclean, and re.**  
when we run the command, we:
```bash
    make
     #or
    make all
    #compile the ft_printf.a library
```
---
```bash
    make clean
    #delete the object files (.o)
```  
---
```bash
    make fclean
    #delete all files (.o) and libft.a
```  
---
```bash
    make re
    #completely recompiles the project
```
---
---
***And since I need some functions from the libft, I included the contents of the libft.a in the ft_printf.a. This functionality is already managed by the Makefile (-C libft)***   
The ft_printf.h header includes #include "libft/libft.h" to access basic functions.

---
---
## Resources
I used Google traduction and Google's AI mode for some simple definitions and test ideas in each function; and also the Linux man page.

To get started in `<stdarg.h>`, I asked Claude.ai for some basic exercise before starting the project.

## algorithm and data structure
The implementation of ft_printf is based on a linear analysis algorithm with sequential processing of variadic arguments. No complex data structure is required - the solution uses simple and efficient procedural reasoning:

-   **principle:**  

    `1` Browse and putchar the format string character by character.  
    `2` Detect conversions (% followed by a specifier).  
    `3` Retrieve the corresponding argument via va_arg().  
    `4` Show converted result.  
    `5` Continue until the end of the chain.  
    `6` For every letter written, I count.  

-   **Why is it advantageous?**  
Direct writing with write() for each element; simple, no complex memory management; and also the format string is read only once, from left to right.

-   **`Native Variadic functions`** are used because they are C standards to handle a variable number of arguments.

---
## As summary
The chosen algorithm favors clarity and efficiency for a simple parsing problem. No complex data structure is present - procedural reasoning is more than sufficient.

---

## Usage examples:
-   `I/` **Include de header file in your source code**
```c
#include "ft_printf.h"

int	main(void)
{
	int	len;

	len = ft_printf("Hello %s, bienvenue chez %d.\n", "world", 42);
	ft_printf("len = %i\nIn hexadecimal: len = %x", len, len);
	return (0);
}
```
-   `II/` **Make sure that `make` has already been executed and compile your program with the library:**
```bash
    cc your_main_file.c libftprintf.a -I.
```