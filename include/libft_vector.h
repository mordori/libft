/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_vector.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:30:08 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/10 23:55:47 by myli-pen         ###   ########.fr       */
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

bool	vector_add(t_vec *vec, void *new);
bool	vector_free(t_vec *vec);
bool	vector_del(t_vec *vec, size_t index);
void	*vector_get(t_vec *vec, size_t index);
bool	vector_init(t_vec *vec, bool is_heap);
bool	vector_set(t_vec *vec, size_t index, void *new);
int		vector_size(t_vec *vec);
int		vector_total(t_vec *vec);

#endif
