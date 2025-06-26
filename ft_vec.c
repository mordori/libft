/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:00:40 by myli-pen          #+#    #+#             */
/*   Updated: 2025/06/26 19:09:12 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	vec_init(t_vec *vec)
{
	vec->size = VEC_SIZE;
	vec->total = 0;
	vec->items = malloc(sizeof (void *) * vec->size);
	if (!vec->items)
		return (FALSE);
	return (TRUE);
}

void	vec_set(t_vec *vec, int index, void *item)
{
	if (index >= 0 && index < vec->total)
		vec->items[index] = item;
}

void	*vec_get(t_vec *vec, int index)
{
	if (index >= 0 && index < vec->total)
		return vec->items[index];
	return (NULL);
}

int	vec_total(t_vec	*vec)
{
	return vec->total;
}

void	vec_free(t_vec *vec)
{
	int	i;

	i = -1;
	while (++i < vec->total - 1)
		free(vec->items[i]);
	free(vec->items);
}
