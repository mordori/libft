/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:37:10 by myli-pen          #+#    #+#             */
/*   Updated: 2025/06/26 19:06:14 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_vec vec;
	vec_init(&vec);

	char *str = ft_strdup("KEK");

	vec_add(&vec, "Hello");
	vec_add(&vec, "Hive");
	vec_add(&vec, "Helsinki");
	vec_add(&vec, "!");
	vec_add(&vec, str);

	for (int i = 0; i < vec_total(&vec); i++)
		ft_printf("%s ", vec_get(&vec, i));

	ft_printf("\n");

	vec_del(&vec, 2);
	vec_del(&vec, 2);

	ft_printf("%d \n", vec_total(&vec));

	for (int i = 0; i < vec_total(&vec); i++)
		ft_printf("%s ", vec_get(&vec, i));

	vec_free(&vec);
	return (0);
}
