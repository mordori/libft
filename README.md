# libft
> A library of commonly used standard and additional utility functions from libc recreated in C.
> - Some of the functions have been modified from the subject, e.g. to handle errors.
> - Includes functions from subsequently completed projects and expanded utility implementations.

> [!NOTE]
> This project was developed and compiled using GCC on Ubuntu. It will likely work on other Linux distributions and with compatible C/C++ compilers, but GCC on Ubuntu is the environment it was originally built and tested in.

> [!TIP]
> ## How to use
> Working example can be seen in my [ft_printf](https://github.com/mordori/ft_printf) project. 
- Clone the repository on the root level of your project.
- Run the following command in `libft/` directory to create `libft.a` at root.
``` Makefile
make
```
- Include `"libft/libft.h"` with appropriate path where used, or add `-I.libft` flag to the following step.
- Compile `libft.a` together with your program to use it in your own project.
- To delete all of the compiled files, use in `libft/` directory:
``` Makefile
make fclean
```
