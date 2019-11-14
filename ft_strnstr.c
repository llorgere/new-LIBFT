/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:13:30 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/14 16:51:29 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tstr;
	char	*tto_find;

	i = 0;
	tstr = (char *)haystack;
	tto_find = (char *)needle;
	if (tto_find[i] == '\0')
		return (tstr);
	while (i < len && tstr[i] != '\0')
	{
		j = 0;
		while (tstr[i + j] == tto_find[j] && (i + j) < len)
		{
			j++;
			if (tto_find[j] == '\0')
				return (tstr + i);
		}
		i++;
	}
	return (0);
}
