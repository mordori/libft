/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 01:11:20 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/18 16:02:52 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

# include <stdint.h>
# include <math.h>

# include "libft_defs.h"

float	ft_lerp(float a, float b, float t);
int	ft_imax(int a, int b);
t_vec2	vec2(float x, float y);
t_vec2	vec2_f(float n);
t_vec2	vec2_add(t_vec2 a, t_vec2 b);
t_vec2	vec2_sub(t_vec2 a, t_vec2 b);
t_vec2	vec2_scale(t_vec2 v, float s);
t_vec3	vec3(float x, float y, float z);
t_vec3	vec3_f(float n);
t_vec3	vec3_add(t_vec3 a, t_vec3 b);
t_vec3	vec3_sub(t_vec3 a, t_vec3 b);
t_vec3	vec3_scale(t_vec3 v, float s);
t_vec3	vec3_cross(t_vec3 a, t_vec3 b);
float	vec3_dot(t_vec3 a, t_vec3 b);
t_vec3	vec3_normalize(t_vec3 v);
t_vec4	vec4(float x, float y, float z, float w);
t_vec4	vec4_f(float n);
t_vec4	vec4_add(t_vec4 a, t_vec4 b);
t_vec4	vec4_sub(t_vec4 a, t_vec4 b);
t_vec4	vec4_scale(t_vec4 v, float s);

#endif
