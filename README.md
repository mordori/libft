# libft
## ✨ Features
Library of commonly used standard and additional utility functions from libc recreated in C.
- Some of the functions have been modified from the subject, e.g. to handle errors.
- Includes functions from subsequently completed projects and expanded utility implementations.
- Modularized into categories.

> [!NOTE]
> This project was developed and tested using clang on Ubuntu. It will likely work on other Linux distributions and with compatible C/C++ compilers.

> [!TIP]
> ## 🚀 How to use
> Working example can be seen in my [fdf](https://github.com/mordori/fdf) project where another Makefile compiles this library.
- Clone the repository at the root level of your project.
``` git
git clone https://github.com/mordori/libft.git libft && cd libft
```
- Run the following command to create `libft.a`.
``` Makefile
make
```
- Add `#include "libft.h"` to your files where used:
``` C
#include "libft.h"
```
> [!TIP]
> For more granular inclusion, only add `#include "libft_[CATEGORY].h"` to your files where used. The header categories are found in the inc/ directory. For example:
> ``` C
> #include "libft_io.h"
> ...
> ft_printf("Hello! There are %d %s in my fridge.\n", 4, "puddings");
> ...
> ```
- Compile your program together with `libft/libft.a` and `-I libft/inc/` flag, e.g.
``` bash
cc -Wall -Wextra -Werror [YOUR_PROGRAM] libft/libft.a -I libft/inc/
```
- To delete all of the compiled files, use:
``` Makefile
make fclean
```
