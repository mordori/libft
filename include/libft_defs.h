/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_defs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:23:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/09 13:20:55 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DEFS_H
# define LIBFT_DEFS_H

# include <stdbool.h>

# define BASE_10 "0123456789"
# define BASE_16 "0123456789ABCDEF"
# define ERROR -1
# define VEC_SIZE 4

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 4
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

#endif
