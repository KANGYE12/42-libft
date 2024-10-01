/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:25:46 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:41:04 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sp;
	size_t	i;
	size_t	s_size;

	i = 0;
	s_size = ft_strlen(s);
	sp = (char *)malloc((s_size + 1) * sizeof(*s));
	if (!sp)
		return (NULL);
	while (i < s_size && s[i] != '\0')
	{
		sp[i] = s[i];
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
