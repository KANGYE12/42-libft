/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:02:32 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:39:45 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*list;
	t_list		*element;
	t_list		*element_content;

	list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		element_content = (*f)(lst->content);
		element = ft_lstnew(element_content);
		if (!element)
		{
			(*del)(element_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, element);
		lst = lst->next;
	}
	return (list);
}
