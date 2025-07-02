/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:59:54 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/02 15:34:39 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"
#include "libft_str.h"

/**
 * Outputs string `s` to the specified file descriptor.
 *
 * @param s Source string.
 * @param fd File descriptor.
 * @return Number of characters written, -1 on error or only partial write.
 */
ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	bytes;
	size_t	len;

	if (!s)
		return (ERROR);
	len = ft_strlen(s);
	bytes = write (fd, s, len);
	if (bytes < (ssize_t)len)
		return (ERROR);
	return (bytes);
}
