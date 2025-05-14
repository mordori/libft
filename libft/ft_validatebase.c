/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validatebase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:24:02 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/14 17:24:24 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Validates `base` with the following rules:
 *
 * - String is not empty or NULL.
 *
 * - Has no duplicate characters.
 *
 * @param base Source string.
 * @return `1` if `base` is valid, `0` if not.
 */
int	ft_validatebase(const char *base)
{
	int	i;
	int	j;

	if (!base || !*base)
		return (0);
	i = 0;
	while (base[i])
	{
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
