/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:11:59 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/14 19:12:03 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tab;

	if (!(*lst) || !(*del))
		return ;
	tab = *lst;
	while (tab)
	{
		tmp = tab->next;
		del(tab->content);
		free(tab);
		tab = NULL;
		tab = tmp;
	}
	*lst = NULL;
}
