/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:31:58 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 16:48:25 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_dup(const char *s1, const char *s2)
{
	if (!s1 && !s2)
	{
		if (s1)
		{
			return (ft_strdup((char *)s1));
		}
		else if (s2)
		{
			return (ft_strdup((char *)s2));
		}
		else
		{
			return (ft_strdup(""));
		}
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		index;
	int		all_size;

	check_dup(s1, s2);
	all_size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	result = (char *)malloc((all_size + 1) * sizeof(char));
	if (!result)
		return (result);
	index = 0;
	while (*s1)
	{
		result[index++] = *s1;
		s1++;
	}
	while (*s2)
	{
		result[index++] = *s2;
		s2++;
	}
	result[index] = '\0';
	return (result);
}
