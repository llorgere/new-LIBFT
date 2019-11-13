/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:12:51 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 14:12:53 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		val;

	i = 0;
	val = -1;
	if ((s1[i] == '\0' && s2[i] == '\0') || n == 0)
		return (0);
	while (s1[i] == s2[i] && s2[i] != '\0' && s1[i] != '\0' && i < n - 1)
		i++;
	val = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (val);
}
