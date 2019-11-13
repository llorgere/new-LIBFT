/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:06:33 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:21:38 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*ump;

	if (!n)
		return (0);
	i = 0;
	tmp = (unsigned char *)dst;
	ump = (unsigned char *)src;
	while (i < n && ump[i] != (unsigned char)c)
	{
		tmp[i] = ump[i];
		i++;
	}
	if (ump[i] != (unsigned char)c)
		return (NULL);
	else
	{
		tmp[i] = ump[i];
		return (&(tmp[i + 1]));
	}
}
