/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:11:10 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:43:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*moc;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	moc = (char*)malloc(sizeof(*moc) * (i + 1));
	if (!moc)
		return (0);
	while (j < i)
	{
		moc[j] = s1[j];
		j++;
	}
	moc[j] = '\0';
	return (moc);
}
