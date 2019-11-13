/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:05:07 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 15:43:22 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;
	t_list	*tab;

	if (!lst || !f)
		return ;
	tab = lst;
	while (tab)
	{
		tmp = tab->next;
		f(tab->content);
		tab = tmp;
	}
}
