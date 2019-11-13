/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:08:07 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:22:12 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*ump;

	i = 0;
	tmp = (unsigned char *)dst;
	ump = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = ump[i];
		i++;
	}
	return (dst);
}
