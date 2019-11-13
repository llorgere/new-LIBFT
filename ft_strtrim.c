/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:14:22 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:14:41 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_malloc(int len, int i, char const *s)
{
	int		j;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	j = 0;
	while (j < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

static int	ft_end(char const *s1, char const *set, int len, int i)
{
	int		j;

	while (len > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i + len - 1])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		len--;
	}
	return (len);
}

static int	ft_start(char const *s1, char const *set, int i)
{
	int		j;

	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	len;

	i = 0;
	i = ft_start(s1, set, i);
	len = ft_strlen(s1 + i);
	len = ft_end(s1, set, len, i);
	return (ft_strtrim_malloc(len, i, s1));
}
