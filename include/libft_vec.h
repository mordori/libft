/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vec.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:30:08 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 18:17:06 by myli-pen         ###   ########.fr       */
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
	bool	is_heap;
}				t_vec;

bool	vec_add(t_vec *vec, void *new);
bool	vec_free(t_vec *vec);
bool	vec_del(t_vec *vec, size_t index);
void	*vec_get(t_vec *vec, size_t index);
bool	vec_init(t_vec *vec, bool is_heap);
bool	vec_set(t_vec *vec, size_t index, void *new);
int		vec_size(t_vec *vec);
int		vec_total(t_vec *vec);

#endif
