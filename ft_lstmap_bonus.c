/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 14:05:52 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/13 16:10:04 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;
	t_list	*fresh;

	fresh = NULL;
	if (!lst || !f || !del)
		return (0);
	if (!(fresh = ft_lstnew(f(lst->content))))
		return (0);
	start = fresh;
	lst = lst->next;
	while (lst)
	{
		tmp = lst->next;
		if (!(fresh->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		fresh = fresh->next;
		lst = tmp;
	}
	return (start);
}
