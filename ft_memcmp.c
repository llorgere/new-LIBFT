/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:06:59 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:07:03 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				val;
	unsigned char	*ts1;
	unsigned char	*ts2;

	i = 0;
	val = -1;
	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	if (!n)
		return (0);
	if ((ts1[i] == '\0' && ts2[i] == '\0') || n == 0)
		return (0);
	while (ts1[i] == ts2[i] && i < n - 1)
		i++;
	val = ts1[i] - ts2[i];
	return (val);
}
