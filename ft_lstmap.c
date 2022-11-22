/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djanusz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:37:02 by djanusz           #+#    #+#             */
/*   Updated: 2022/11/22 18:53:02 by djanusz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;

	(void)del;
	res = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&res, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (res);
}
