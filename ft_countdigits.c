/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:21:49 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/14 18:32:32 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of digits in `n` with a specified base.
 *
 * @param n Signed integer number.
 * @param len Number of characters in the base used.
 * @return Number of digits in an integer number.
 */
size_t	ft_countdigits(long long n, const size_t len)
{
	size_t	count;

	if (!len)
		return (-1);
	count = 1;
	n /= (long long)len;
	while (n)
	{
		++count;
		n /= (long long)len;
	}
	return (count);
}

/**
 * Counts the number of digits in `n` with a specified base.
 *
 * @param n Unsigned integer number.
 * @param len Number of characters in the base used.
 * @return Number of digits in an integer number.
 */
size_t	ft_ucountdigits(uintptr_t n, const size_t len)
{
	size_t	count;

	if (!len)
		return (-1);
	count = 1;
	n /= len;
	while (n)
	{
		++count;
		n /= len;
	}
	return (count);
}
