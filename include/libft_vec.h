/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vec.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:30:08 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 16:10:25 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_VEC_H
# define LIBFT_VEC_H

# include <stddef.h>
# include <stdlib.h>

# include "libft_defs.h"

typedef struct s_vec
{
	void	**items;
	size_t	size;
	size_t	total;
	int		is_heap;
}				t_vec;

int		vec_init(t_vec *vec, int is_heap);
int		vec_total(t_vec *vec);
int		vec_size(t_vec *vec);
int		vec_add(t_vec *vec, void *item);
void	vec_set(t_vec *vec, size_t index, void *item);
void	*vec_get(t_vec *vec, size_t index);
int		vec_del(t_vec *vec, size_t index);
void	vec_free(t_vec *vec);

#endif
