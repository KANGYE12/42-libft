/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:46:03 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:35:48 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string;
	unsigned int	i;
	unsigned int	size;

	size = ft_strlen(s);
	new_string = (char *)malloc(sizeof(char) * (size + 1));
	if (!new_string)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_string[i] = (*f)(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/*
char	example_function(unsigned int index, char c) {
	return (c + index);
}

int	main(void) {
	char *original = "abc";
	char *result = ft_strmapi(original, example_function);

	if (result) {
		printf("Original string: %s\n", original);
		printf("Result: %s\n", result);
		free(result);
	} else {
		printf("Error when create a new string.\n");
	}

	return (0);
}
*/
