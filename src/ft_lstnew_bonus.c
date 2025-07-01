/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:27:32 by myli-pen          #+#    #+#             */
/*   Updated: 2025/06/18 03:20:06 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for a new list node, initialized with `content` parameter.
 *
 * `next` is initialized to NULL.
 *
 * @param content The content to store in the new node.
 * @return Pointer to the new node.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof (t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
