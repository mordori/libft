/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:13:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/06/26 19:02:48 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int vec_resize(t_vec *vec, int size)
{
	void	**items;
	int		i;

	items = malloc(sizeof (void *) * size);
	if (!items)
		return (FALSE);
	i = -1;
	while (++i < vec->size)
		items[i] = vec->items[i];
	free(vec->items);
	vec->items = items;
	vec->size = size;
	return (TRUE);
}

int	vec_add(t_vec *vec, void *item)
{
	if (vec->size == vec->total)
	{
		if (vec_resize(vec, vec->size * 2))
		{
			vec->items[vec->total++] = item;
			return (TRUE);
		}
		return (FALSE);
	}
	vec->items[vec->total++] = item;
	return (TRUE);
}

int	vec_del(t_vec *vec, int index)
{
	int	i;

	if (index < 0 || index >= vec->total)
		return (FALSE);
	i = index;
	vec->items[i] = NULL;
	while (i < vec->total - 1)
	{
		vec->items[i] = vec->items[i + 1];
		vec->items[i + 1] = NULL;
		i++;
	}
	vec->total--;
	if (vec->total > 0 && vec->total == vec->size / 4)
	{
		if (vec_resize(vec, vec->size / 2))
			return (TRUE);
		return (FALSE);
	}
	return (TRUE);
}
