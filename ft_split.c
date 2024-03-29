/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:10:17 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:10:26 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_number(const char *str, char c)
{
	int		i;
	int		nb;
	int		len;

	if (!str || !c)
		return (0);
	i = 0;
	nb = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0')
	{
		len = 0;
		while (str[i] == c)
			i++;
		while (str[len + i] != c && str[i + len] != '\0')
			len++;
		if (len == 0)
			break ;
		else if (str[len + i] == c || str[len + i] == '\0')
			nb++;
		i = i + len;
	}
	return (nb);
}

static int		ft_strlensplit(const char *str, int i, int *len, char c)
{
	while (str[i] == c)
		i++;
	while (str[*len + i] != c && str[*len + i] != '\0')
		(*len)++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int		len;
	int		j;
	int		i;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_number(s, c) + 1))))
		return (0);
	while (j < ft_number(s, c) && s[i])
	{
		len = 0;
		i = ft_strlensplit(s, i, &len, c);
		if (!(tab[j] = (char*)malloc(sizeof(char) * (len + 1))))
			return (0);
		k = 0;
		while (k < len)
			tab[j][k++] = s[i++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = 0;
	return (tab);
}
