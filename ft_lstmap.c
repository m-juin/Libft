/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:18:08 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/01 13:32:51 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*prev;
	t_list	*start;

	prev = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new = ft_lstnew(lst->content);
		if (prev != NULL)
			prev->next = new;
		else
			start = new;
		new->content = (*f)(new->content);
		prev = new;
		lst = lst->next;
	}
	return (start);
}
