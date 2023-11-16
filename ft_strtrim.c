/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:54:53 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/15 04:19:19 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*outstr_start;
	char		*outstr_end;
	char		*outstr;
	int			i;
	int			outstr_size;

	i = 0;
	while (s1[i] && ft_check_set(s1[i], set))
		i++;
	outstr_start = (char *)&s1[i];
	i = (ft_strlen((char *)s1) - 1);
	if (i != -1)
		while (i >= 0 && ft_check_set(s1[i], set))
			i--;
	outstr_end = (char *)&s1[i];
	if (!*s1 || outstr_end < outstr_start)
		outstr_size = 1; 
	else
		outstr_size = outstr_end - outstr_start + 1;
	outstr = malloc(sizeof(char) * (outstr_size + 1));
	if (!outstr)
		return (NULL);
	ft_strlcpy(outstr, outstr_start, outstr_size + 1);
	return (outstr);
}
