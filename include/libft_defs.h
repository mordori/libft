/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_defs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:23:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/18 15:22:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DEFS_H
# define LIBFT_DEFS_H

# include <stdbool.h>
# include <float.h>
# include <stddef.h>
# include <stdint.h>

# define BASE_10 "0123456789"
# define BASE_16 "0123456789ABCDEF"
# define ERROR -1
# define WHITE 0xFFFFFFFF
# define BLACK 0x000000FF
# define BLUE 0x0000FFFF
# define GREEN 0x00FF00FF
# define BROWN 0x7C4700FF
# define ERROR_COLOR 0xFF00FFFF

# ifndef VECTOR_SIZE
#  define VECTOR_SIZE 4
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 4
# endif

# ifndef M_PI
#  define M_PI 3.14159265358979323846
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_vec2
{
	int	x;
	int	y;
}				t_vec2;

typedef struct	s_vec3
{
	float	x;
	float	y;
	float	z;
}				t_vec3;

typedef struct	s_vec4
{
	float	x;
	float	y;
	float	z;
	float	w;
}				t_vec4;

typedef struct	s_mat4
{
	float	m[4][4];
}				t_mat4;

typedef struct	s_color
{
	uint8_t	r;
	uint8_t	g;
	uint8_t	b;
	uint8_t	a;
}				t_color;

typedef struct	s_quad
{
	float	topLeft;
	float	topRight;
	float	bottomLeft;
	float	bottomRight;
}				t_quad;

typedef struct	s_vertex
{
	t_vec4		pos;
	t_vec2		screen;
	uint32_t	color;
}				t_vertex;

typedef struct	s_transform
{
	t_vec3	pos;
	t_vec3	rot;
	t_vec3	scale;
}				t_transform;

#endif
