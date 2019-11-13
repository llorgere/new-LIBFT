/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:11:47 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:33:18 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	i = 0;
	lend = 0;
	lens = 0;
	while (dst[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	if (lend >= dstsize)
		return (dstsize + lens);
	while (i < (dstsize - 1 - lend) && src[i] != '\0')
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	if (dstsize == 0)
		return (lens);
	return (lend + lens);
}
