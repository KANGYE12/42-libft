/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:36:41 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:27:55 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
		{
			return ((unsigned char)s1p[i] - (unsigned char)s2p[i]);
		}
		i++;
	}
	return (0);
}

/*
int	main(void) {
	char block1[] = {1, 2, 3, 4, 6};
	char block2[] = {1, 2, 3, 4, 5};
	int result = ft_memcmp(block1, block2, 5);

	if (result == 0) {
		printf("Yes.\n");
	} else {
		printf("No.\n");
	}

	return (0);
}
*/