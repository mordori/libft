/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:13:06 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/01 23:28:39 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs integer `n` to the specified file descriptor.
 *
 * @param n Integer to output.
 * @param fd File descriptor.
 */
int	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return (TRUE);
	}
	if (n < 0)
	{
		if (write (fd, "-", 1) == -1)
			return (FALSE);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	if (write (fd, &c, 1) == -1)
		return (FALSE);
	return (TRUE);
}
