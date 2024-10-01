/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:11:50 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:26:57 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_int_len(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*itoa_number;

	size = get_int_len(n);
	itoa_number = (char *)malloc(sizeof(char) * (size + 1));
	if (!itoa_number)
		return (NULL);
	if (n == 0)
		itoa_number[0] = '0';
	itoa_number[size] = '\0';
	if (n < 0)
		itoa_number[0] = '-';
	while (n != 0)
	{
		if (n < 0)
			itoa_number[--size] = (-(n % 10) + '0');
		else
			itoa_number[--size] = ((n % 10) + '0');
		n = n / 10;
	}
	return (itoa_number);
}

/*
int	main(void)
{
	int		number;
	char	*result;

	number = -150;
	result = ft_itoa(number);
	if (result)
	{
		printf("The number is: %s\n", number, result);
		free(result);
	}
	return (0);
}
*/
