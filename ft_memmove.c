/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:08:25 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/14 18:58:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	norme(void *dst, const void *src)
{
	if (!dst && !src)
		return (1);
	else
		return (0);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tsrc;
	unsigned char	*tdest;
	size_t			i;

	if ((i = norme(dst, src)) == 1)
		return (NULL);
	tdest = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (src < dst)
	{
		while (0 < len)
		{
			tdest[len - 1] = tsrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (tdest);
}
