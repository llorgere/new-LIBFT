/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:08:25 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:22:35 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*tsrc;
	unsigned char	*tdest;
	size_t			i;

	i = 0;
	tdest = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (src < dst)
	{
		while (0 < n)
		{
			tdest[n - 1] = tsrc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tdest[i] = tsrc[i];
			i++;
		}
	}
	return (tdest);
}
