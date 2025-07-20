/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec4_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:32:25 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/19 23:33:22 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math.h"

t_vec4	vec4_3(t_vec3 v)
{
	t_vec4	result;

	result.x = v.x;
	result.y = v.y;
	result.z = v.z;
	result.w = 0.0f;
	return (result);
}
