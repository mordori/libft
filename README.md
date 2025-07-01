# libft
> Library of commonly used standard and additional utility functions from libc recreated in C.
> - Some of the functions have been modified from the subject, e.g. to handle errors.
> - Includes functions from subsequently completed projects and expanded utility implementations.

> [!NOTE]
> This project was developed and tested using clang on Ubuntu. It will likely work on other Linux distributions and with compatible C/C++ compilers.

> [!TIP]
> ## How to use
> Working example can be seen in my [ft_printf](https://github.com/mordori/ft_printf) project where another Makefile compiles this library. 
- Clone the repository at the root level of your project.
- Run the following command to create `libft.a`.
``` Makefile
make
```
- Add `#include "libft.h"` to your files where used and `-I ./libft/include/` flag to your compilation.
- Compile your program together with `./libft/libft.a`, e.g.
``` bash
cc -Wall -Wextra -Werror main.c ./libft/libft.a -I ./libft/include/
```
- To delete all of the compiled files, use:
``` Makefile
make fclean
```
