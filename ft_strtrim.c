/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanye <kanye@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:17:37 by kanye             #+#    #+#             */
/*   Updated: 2024/09/29 15:37:25 by kanye            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_word(char word_find, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == word_find)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	s1_end;
	size_t	new_word_len;
	size_t	i;
	char	*new_char;

	start = 0;
	s1_end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && find_word(s1[start], set))
		start++;
	while (s1_end > start && find_word(s1[s1_end], set))
		s1_end--;
	new_word_len = s1_end - start + 1;
	new_char = (char *)malloc(sizeof(char) * (new_word_len + 1));
	if (!new_char)
		return (NULL);
	i = 0;
	while (i < new_word_len)
	{
		new_char[i] = s1[start + i];
		i++;
	}
	new_char[i] = '\0';
	return (new_char);
}
/*
int	main(void) {
	char const *string = "ababaaaMy name is Simonabbababaa";
	char const *set = "ab";
	char *trimmed_string = ft_strtrim(string, set);

	if (trimmed_string) {
		printf("Shortened string: '%s'\n", trimmed_string);
		free(trimmed_string);
	} else {
		printf("Memory allocation error.\n");
	}

	return (0);
}
*/