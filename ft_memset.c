/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:36:51 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:28:30 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	pc;

	i = 0;
	p = (unsigned char *)s;
	pc = (unsigned char)c;
	while (i < n)
	{
		p[i] = pc;
		i++;
	}
	return (s);
}
/*
int	main(void) {
	char buffer[10];

	for (int i = 0; i < 10; i++) {
		buffer[i] = 'A' + i;
	}

	printf("Before ft_memset: ");
	for (int i = 0; i < 10; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	ft_memset(buffer, 'c', 5);

	printf("After ft_memset: ");
	for (int i = 0; i < 10; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	return (0);
}*/
