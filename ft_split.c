/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:41:50 by kanye             #+#    #+#             */
/*   Updated: 2024/10/05 12:45:58 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substring(char const *substring, char c)
{
	size_t	i;
	int		size;

	size = 0;
	i = 0;
	while (substring[i] != '\0')
	{
		if (substring[i] != c)
		{
			while (substring[i] != '\0' && substring[i] != c)
				i++;
			size++;
		}
		else
			i++;
	}
	return (size);
}

static char	**ft_free_all(char **lst, int i)
{
	while (i > 0)
		free(lst[--i]);
	free(lst);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**substring;
	size_t	i;
	size_t	substring_len;

	substring = (char **)malloc((count_substring(s, c) + 1) * sizeof(char *));
	if (!substring)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			substring_len = 0;
			while (s[substring_len] != '\0' && s[substring_len] != c)
				substring_len++;
			substring[i++] = ft_substr(s, 0, substring_len);
			if (!substring[i - 1])
				return (ft_free_all(substring, i));
			s = s + substring_len;
		}
		else
			s++;
	}
	substring[i] = NULL;
	return (substring);
}

/*
int	main(void)
{
	char	**result;
	char	*string;
	char	delimiter;
	int		i;

	string = "Hello World, this is a test";
	delimiter = ' ';
	i = 0;
	result = ft_split(string, delimiter);
	if (result)
	{
		while (result[i])
		{
			printf("Substring %d: %s\n", i, result[i]);
			i++;
		}
	}
	return (0);
}
*/
