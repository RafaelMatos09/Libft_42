/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:09:59 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 21:26:42 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (j != i)
			k++;
	}
	return (k);
}

static void	*clear_word(char **temp_s)
{
	int	i;

	i = 0;
	while (temp_s[i] != NULL)
	{
		free(temp_s[i]);
		i++;
	}
	free(temp_s);
	return (temp_s = NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**temp_s;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	temp_s = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!temp_s)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (j != i)
			temp_s[k++] = ft_substr(s, j, i - j);
		if (temp_s[k - 1] == NULL && count_word(s, c) > 0)
			return (clear_word(temp_s));
	}
	return (temp_s);
}
