/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:56:14 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 15:11:37 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_utils.h"

/**
 * Checks if `c` is an alphabetic character.
 *
 * @param c Character to be checked for.
 * @return `1` if the check is true, `0` if false.
 */
int	ft_isalpha(int c)
{
	c = (unsigned char)c;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
