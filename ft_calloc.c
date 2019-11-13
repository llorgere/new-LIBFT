/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:01:26 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:42:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = NULL;
	if (count == 0)
		return (0);
	else if (size == 0)
		return (tab);
	if (!(tab = malloc(count * size)))
		return (0);
	while (i < count * size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
