/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:33:14 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 19:52:06 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (start >= (size_t)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len >= (size_t)ft_strlen((char *)s))
		len = (size_t)ft_strlen((char *)s);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0')
		dest[i++] = s[start++];		
	dest[i] = '\0';
	return (dest);
}
