/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:50:21 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:31:28 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new_char;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	new_char = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (!new_char)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_char[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] != '\0')
	{
		new_char[i + j] = s2[i];
		i++;
	}
	new_char[i + j] = '\0';
	return (new_char);
}

/*
int	main(void) {
	const char* str1 = "Hello ";
	const char* str2 = "World";

	char* result = ft_strjoin(str1, str2);
	if (result != NULL) {
		printf("%s", result);
		free(result);
	} else {
		printf("Error");
	}

	return (0);
}

*/
