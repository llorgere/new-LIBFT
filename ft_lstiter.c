/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:12:29 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/14 19:12:30 by llorgere         ###   ########.fr       */
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
