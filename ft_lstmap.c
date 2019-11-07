/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/05 15:56:31 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/05 19:58:01 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*tmp;
	t_list	*fresh;

	if (!lst || !f)
		return (0);
	if (!(fresh->content = (void *)malloc(sizeof(f(lst->content)))))
		return (0);
	fresh->content = f(lst->content);
	start = fresh;
	lst = lst->next;
	while (lst)
	{
		tmp = lst->next;
		if (!(fresh->next->content = (void *)malloc(sizeof(f(lst->content)))))
			return (0);
		fresh->next->content = f(lst->content);
		fresh = fresh->next;
		lst = tmp;
	}
	return (start);
}
