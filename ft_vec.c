/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:00:40 by myli-pen          #+#    #+#             */
/*   Updated: 2025/06/28 20:41:07 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	vec_init(t_vec *vec, int is_heap)
{
	if (!vec)
		return (FALSE);
	vec->items = malloc(sizeof (void *) * VEC_SIZE);
	if (!vec->items)
		return (FALSE);
	vec->size = VEC_SIZE;
	vec->total = 0;
	vec->is_heap = is_heap;
	return (TRUE);
}

void	vec_set(t_vec *vec, size_t index, void *item)
{
	if (!vec || !item)
		return ;
	if (index < vec->total)
	{
		if (vec->is_heap)
			free(vec->items[index]);
		vec->items[index] = item;
	}
}

void	*vec_get(t_vec *vec, size_t index)
{
	if (!vec)
		return (NULL);
	if (index < vec->total)
		return vec->items[index];
	return (NULL);
}

int	vec_total(t_vec	*vec)
{
	if (!vec)
		return (0);
	return vec->total;
}

int	vec_size(t_vec *vec)
{
	if (!vec)
		return (0);
	return (vec->size);
}
