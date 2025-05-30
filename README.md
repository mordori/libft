# libft
> A library of commonly used standard and additional utility functions from libc recreated in C.
> - Some of the functions have been modified from the subject, e.g. to handle errors.
> - Includes functions from subsequently completed projects and expanded utility implementations.

> [!NOTE]
> This project was developed and compiled using clang on Ubuntu. It will likely work on other Linux distributions and with compatible C/C++ compilers, but clang on Ubuntu is the environment it was originally built and tested in.

> [!TIP]
> ## How to use
> Working example can be seen in my [ft_printf](https://github.com/mordori/ft_printf) project. 
- Clone the repository at the root level of your project.
- Run the following command to create `libft.a`.
``` Makefile
make
```
- Include `"libft.h"` to your .c files or headers where used.
- Compile your program together with `-I.libft`, `-L.`, and `-lft` flags to use the library in your own project, e.g.
``` bash
cc -Wall -Wextra -Werror -I.libft -L. -lft main.c
```
- You can modify the Makefile in the root directory to compile and copy `libft.a` into your own library by modifying `NAME` and `SRCS`.
- To delete all of the compiled files, use:
``` Makefile
make fclean
```
