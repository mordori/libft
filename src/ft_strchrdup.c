/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:24:02 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 15:43:10 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_str.h"

/**
 * Checks if the string `str` has no duplicate characters.
 *
 * @param str Source string.
 * @return `1` if no duplicates are found, `0` otherwise.
 */
int	ft_strchrdup(const char *str)
{
	int	i;
	int	j;

	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < i)
		{
			if (str[j] == str[i])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
