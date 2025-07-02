/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:52:08 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 15:11:15 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_utils.h"

/**
 * Checks if `c` is an alphabetic or a numeric character.
 *
 * @param c Character to be checked for.
 * @return `1` if the check is true, `0` if false.
 */
int	ft_isalnum(int c)
{
	c = (unsigned char)c;
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
