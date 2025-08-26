# libft
## ✨ Features
Static library of fundamental and additional utility functions from libc recreated in C.
- Some of the functions have been modified from the subject, e.g. to handle errors.
- Includes functions from subsequently completed projects and expanded utility implementations.
- Modularized into categories.

> [!TIP]
> ## 🚀 How to use
> Working example can be seen in my [fdf](https://github.com/mordori/fdf) project where another Makefile compiles this library.

Run the following commands to clone the repository and create `libft.a`.
``` bash
git clone https://github.com/mordori/libft.git libft
make -C libft/
```

Add `#include "libft.h"` to your files where used:
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
Compile your program together with `libft/libft.a` and `-I libft/inc/` flag, e.g.
``` bash
cc -Wall -Wextra -Werror [YOUR_PROGRAM] libft/libft.a -I libft/inc/
```
To delete all of the compiled files, use:
``` Makefile
make fclean
```
