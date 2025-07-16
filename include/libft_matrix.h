/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_matrix.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:44:48 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/16 22:56:44 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATRIX_H
# define LIBFT_MATRIX_H

# include <stdint.h>
# include <math.h>

# include "libft_defs.h"

t_mat4	mat4_identity(void);
t_mat4	mat4_mul(t_mat4 a, t_mat4 b);
t_vec3	mat4_transform_vec3(t_mat4 m, t_vec3 v);
t_mat4	mat4_translate(float tx, float ty, float tz);
t_mat4	mat4_scale(float sx, float sy, float sz);
t_mat4	mat4_rot_x(float angle);
t_mat4	mat4_rot_y(float angle);
t_mat4	mat4_rot_z(float angle);

#endif
