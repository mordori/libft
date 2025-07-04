/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 16:00:40 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 18:17:42 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_vec.h"

/**
 * Initializes vector `vec` with default values.
 *
 * @param vec Vector to be initialized.
 * @param is_heap Flag, if the items are to be allocated in heap.
 * @return True if successful, else false.
 */
bool	vec_init(t_vec *vec, bool is_heap)
{
	if (!vec)
		return (false);
	vec->items = malloc(sizeof (void *) * VEC_SIZE);
	if (!vec->items)
		return (false);
	vec->size = VEC_SIZE;
	vec->total = 0;
	vec->is_heap = is_heap;
	return (true);
}

/**
 * Replaces an item with the `index` in `vec` with `new`.
 *
 * Frees the old item, if it belongs to heap.
 *
 * @param vec Vector to be operated.
 * @param index Index of the old item.
 * @param new New item that will replace the old one.
 * @return True if successful, else false.
 */
bool	vec_set(t_vec *vec, size_t index, void *new)
{
	if (!vec || !new)
		return (false);
	if (index < vec->total)
	{
		if (vec->is_heap)
			free(vec->items[index]);
		vec->items[index] = new;
	}
	return (true);
}

/**
 * Returns an item with the `index` in `vec`.
 *
 * @param vec Vector to be operated.
 * @param index Index of the item.
 * @return Item if successful, else NULL.
 */
void	*vec_get(t_vec *vec, size_t index)
{
	if (!vec)
		return (NULL);
	if (index < vec->total)
		return (vec->items[index]);
	return (NULL);
}

/**
 * Returns the amount of items in `vec`.
 *
 * @param vec Vector to be operated.
 * @return Amount of items added in the vector.
 */
int	vec_total(t_vec	*vec)
{
	if (!vec)
		return (false);
	return (vec->total);
}

/**
 * Returns the current capacity of items array in `vec`.
 *
 * @param vec Vector to be operated.
 * @return Capacity of items array in the vector.
 */
int	vec_size(t_vec *vec)
{
	if (!vec)
		return (false);
	return (vec->size);
}
