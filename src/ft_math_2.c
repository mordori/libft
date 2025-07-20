/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:12:47 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/20 18:51:33 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_defs.h"

float	wrapf(float a)
{
	const float	limit = M_PI * 2.0f;

	if (a > limit)
		return (a - limit);
	else if (a < -limit)
		return (a + limit);
	return (a);
}
