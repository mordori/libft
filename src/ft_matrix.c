/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:44:24 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/16 22:55:11 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_matrix.h"

t_mat4	mat4_identity(void)
{
	t_mat4	matrix;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matrix.m[i][j] = 0.0f;
			++j;
		}
		++i;
	}
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

	result = mat4_identity();
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

t_vec3	mat4_transform_vec3(t_mat4 m, t_vec3 v)
{
	t_vec3	result;

	result.x = v.x * m.m[0][0] + v.y * m.m[0][1] + v.z * m.m[0][2] + m.m[0][3];
	result.y = v.x * m.m[1][0] + v.y * m.m[1][1] + v.z * m.m[1][2] + m.m[1][3];
	result.z = v.x * m.m[2][0] + v.y * m.m[2][1] + v.z * m.m[2][2] + m.m[2][3];
	return (result);
}
