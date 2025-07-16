/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_transforms.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:54:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/16 22:54:43 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft_matrix.h"

t_mat4	mat4_translate(float tx, float ty, float tz)
{
	t_mat4	matrix;

	matrix = mat4_identity();
	matrix.m[0][3] = tx;
	matrix.m[1][3] = ty;
	matrix.m[2][3] = tz;
	return (matrix);
}

t_mat4	mat4_scale(float sx, float sy, float sz)
{
	t_mat4	matrix;

	matrix = mat4_identity();
	matrix.m[0][0] = sx;
	matrix.m[1][1] = sy;
	matrix.m[2][2] = sz;
	return (matrix);
}

t_mat4	mat4_rot_x(float angle)
{
	t_mat4	matrix;
	float	cos;
	float	sin;

	matrix = mat4_identity();
	cos = cosf(angle);
	sin = sinf(angle);
	matrix.m[1][1] = cos;
	matrix.m[1][2] = -sin;
	matrix.m[2][1] = sin;
	matrix.m[2][2] = cos;
	return (matrix);
}

t_mat4	mat4_rot_y(float angle)
{
	t_mat4	matrix;
	float	cos;
	float	sin;

	matrix = mat4_identity();
	cos = cosf(angle);
	sin = sinf(angle);
	matrix.m[0][0] = cos;
	matrix.m[0][2] = sin;
	matrix.m[2][0] = -sin;
	matrix.m[2][2] = cos;
	return (matrix);
}

t_mat4	mat4_rot_z(float angle)
{
	t_mat4	matrix;
	float	cos;
	float	sin;

	matrix = mat4_identity();
	cos = cosf(angle);
	sin = sinf(angle);
	matrix.m[0][0] = cos;
	matrix.m[0][1] = -sin;
	matrix.m[1][0] = sin;
	matrix.m[1][1] = cos;
	return (matrix);
}
