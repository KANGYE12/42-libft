/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:36:22 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:25:54 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void) {
	char buffer[10];

	for (int i = 0; i < 10; i++) {
		buffer[i] = 'A' + i;
	}
	for (int i = 0; i < 10; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");
	ft_bzero(buffer, 10);
	for (int i = 0; i < 10; i++) {
		printf("%c ", buffer[i]);
	}
	printf("\n");

	return (0);
}
*/