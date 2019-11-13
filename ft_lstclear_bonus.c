/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:04:35 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 15:37:50 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tab;

	tab = *lst;
	while (tab)
	{
		tmp = tab->next;
		del(tab->content);
		free(tab);
		tab = tmp;
	}
	*lst = NULL;
}
