/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_defs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 14:23:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/16 23:22:27 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DEFS_H
# define LIBFT_DEFS_H

# include <stdbool.h>
# include <stddef.h>
# include <stdint.h>

# define BASE_10 "0123456789"
# define BASE_16 "0123456789ABCDEF"
# define ERROR -1
# define WHITE 0xFFFFFFFF
# define BLACK 0x000000FF

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
	int	x;
	int	y;
	int	z;
}				t_vec3;

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
	int	topLeft;
	int topRight;
	int	bottomLeft;
	int	bottomRight;
}				t_quad;

typedef struct	s_vertex
{
	t_vec3		pos;
	uint32_t	color;
}				t_vertex;

#endif
