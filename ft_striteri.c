/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:49:29 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:31:12 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	to_uppercase(unsigned int index, char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
	{
		*ch = *ch - 32;
	}
}

int	main(void)
{
	char	str[] = "hello, world!";

	printf("Result before: %s\n", str);
	ft_striteri(str, to_uppercase);
	printf("Result after: %s\n", str);
	return (0);
}
*/