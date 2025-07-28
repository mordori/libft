/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:14:46 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/25 20:15:41 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

float	ft_lerp(float a, float b, float t)
{
	return ((1.0f - t) * a + t * b);
}

int	ft_imax(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ft_imin(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

float	ft_normalize(float value, float min, float max)
{
	return (ft_clamp01((value - min) / (max - min)));
}

float	ft_clamp01(float value)
{
	return (ft_clamp(value, 0.0f, 1.0f));
}

float	ft_clamp(float value, float min, float max)
{
	if (value <= min)
		value = min;
	else if (value >= max)
		value = max;
	return (value);
}
