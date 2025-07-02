/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:13:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 16:10:12 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

static int	vec_resize(t_vec *vec, size_t size)
{
	void	**items;
	size_t	i;

	items = malloc(sizeof (void *) * size);
	if (!items)
		return (FALSE);
	i = 0;
	while (i < vec->total)
	{
		items[i] = vec->items[i];
		++i;
	}
	free(vec->items);
	vec->items = items;
	vec->size = size;
	return (TRUE);
}

int	vec_add(t_vec *vec, void *item)
{
	if (!vec)
		return (FALSE);
	if (vec->total == vec->size)
		if (!vec_resize(vec, vec->size * 2))
			return (FALSE);
	vec->items[vec->total++] = item;
	return (TRUE);
}

int	vec_del(t_vec *vec, size_t index)
{
	if (!vec || index >= vec->total)
		return (FALSE);
	if (vec->is_heap)
	{
		free(vec->items[index]);
		vec->items[index] = NULL;
	}
	while (index < vec->total - 1)
	{
		vec->items[index] = vec->items[index + 1];
		++index;
	}
	vec->total--;
	if (vec->size > VEC_SIZE && vec->total > 0 && vec->total == vec->size / 4)
		if (!vec_resize(vec, vec->size / 2))
			return (FALSE);
	return (TRUE);
}

void	vec_free(t_vec *vec)
{
	size_t	i;

	if (!vec)
		return ;
	i = 0;
	if (vec->is_heap)
	{
		while (i < vec->total)
		{
			free(vec->items[i]);
			vec->items[i++] = NULL;
		}
	}
	free(vec->items);
	vec->total = 0;
	vec->size = 0;
	vec->items = NULL;
}
