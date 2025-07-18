/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:44:24 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/18 03:50:43 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_matrix.h"

t_mat4	mat4_identity(void)
{
	t_mat4	matrix;
	size_t	i;

	matrix = mat4_zero();
	i = 0;
	while (i < 4)
	{
		matrix.m[i][i] = 1.0f;
		++i;
	}
	return (matrix);
}

t_mat4	mat4_mul(t_mat4 a, t_mat4 b)
{
	t_mat4	result;
	int		row;
	int		col;
	int		k;

	result = mat4_zero();
	row = 0;
	while(row < 4)
	{
		col = 0;
		while (col < 4)
		{
			k = 0;
			while (k < 4)
			{
				result.m[row][col] += a.m[row][k] * b.m[k][col];
				++k;
			}
			++col;
		}
		++row;
	}
	return (result);
}

t_vec4	mat4_mul_vec4(t_mat4 m, t_vec4 v)
{
	t_vec4	result;

	result.x = v.x*m.m[0][0] + v.y*m.m[0][1] + v.z*m.m[0][2] + v.w*m.m[0][3];
	result.y = v.x*m.m[1][0] + v.y*m.m[1][1] + v.z*m.m[1][2] + v.w*m.m[1][3];
	result.z = v.x*m.m[2][0] + v.y*m.m[2][1] + v.z*m.m[2][2] + v.w*m.m[2][3];
	result.w = v.x*m.m[3][0] + v.y*m.m[3][1] + v.z*m.m[3][2] + v.w*m.m[3][3];
	return (result);
}

t_vec3	mat4_apply_model(t_mat4 model, t_vec3 v)
{
	t_vec4	vec;

	vec.x = v.x;
	vec.y = v.y;
	vec.z = v.z;
	vec.w = 1.0f;
	vec = mat4_mul_vec4(model, vec);
	v.x = vec.x;
	v.y = vec.y;
	v.z = vec.z;
	return (v);
}

t_mat4	mat4_zero()
{
	t_mat4	matrix;
	size_t	i;

	i = 0;
	while (i < 16)
	{
		matrix.m[i / 4][i % 4] = 0.0f;
		++i;
	}

	return (matrix);
}
