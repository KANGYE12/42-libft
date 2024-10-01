/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:52 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:40:50 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*temporal;
	t_list		*next_node;

	temporal = *lst;
	while (temporal != NULL)
	{
		next_node = temporal->next;
		(*del)(temporal->content);
		free(temporal);
		temporal = next_node;
	}
	*lst = NULL;
}
