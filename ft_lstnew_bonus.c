/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:06:06 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 15:22:20 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = NULL;
	if (!(tab = (t_list *)malloc(sizeof(*tab) * 1)))
		return (0);
	(*tab).content = content;
	(*tab).next = NULL;
	return (tab);
}
