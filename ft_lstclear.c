/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 18:23:23 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/05 15:23:03 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tab;

	tab = *alst;
	while (tab)
	{
		tmp = (*tab).next;
		del((*tab).content);
		free(tab);
		tab = tmp;
	}
	*alst = NULL;
}
