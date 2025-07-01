/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:44:40 by myli-pen          #+#    #+#             */
/*   Updated: 2025/07/01 23:29:03 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>	// INT_MAX, INT_MIN
# include <stdarg.h>	// va_list, va_start, va_arg, va_end
# include <stdint.h>	// SIZE_MAX
# include <stdlib.h>	// malloc(), free(), NULL, size_t
# include <unistd.h>	// write(), ssize_t, STDOUT_FILENO, read

# define BASE_10 "0123456789"
# define BASE_16 "0123456789ABCDEF"
# define FALSE 0
# define TRUE 1
# define VEC_SIZE 4

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_MAX
#  define FD_MAX 8
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_vec
{
	void	**items;
	size_t	size;
	size_t	total;
	int		is_heap;
}				t_vec;

int		vec_init(t_vec *vec, int is_heap);
int		vec_total(t_vec *vec);
int		vec_size(t_vec *vec);
int		vec_add(t_vec *vec, void *item);
void	vec_set(t_vec *vec, size_t index, void *item);
void	*vec_get(t_vec *vec, size_t index);
int		vec_del(t_vec *vec, size_t index);
void	vec_free(t_vec *vec);
char	*ft_strjoin_free(char *s1, char *s2);
char	*get_next_line(int fd);
int		ft_strchrdup(const char *base);
size_t	ft_countdigits(long long n, const size_t len);
size_t	ft_ucountdigits(uintptr_t n, const size_t len);
char	*ft_uitoa(uintptr_t n, const char *base);
int		ft_printf(const char *str, ...);
ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putendl_fd(char *s, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
int		ft_toupper(char *c);
int		ft_tolower(char *c);
int		ft_atoi(const char *nptr);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n, const char *base);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, int (*f)(char*));
int		ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
