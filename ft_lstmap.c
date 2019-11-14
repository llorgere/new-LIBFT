/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:13:12 by llorgere          #+#    #+#             */
/*   Updated: 2019/11/14 19:13:14 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;
	t_list	*fresh;

	fresh = NULL;
	if (!lst || !f)
		return (0);
	if (!(fresh = ft_lstnew(f(lst->content))))
		return (0);
	start = fresh;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, (*del));
			return (0);
		}
		fresh->next = tmp;
		fresh = fresh->next;
		lst = lst->next;
	}
	return (start);
}
