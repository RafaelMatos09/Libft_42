/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:35:00 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/24 07:22:12 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)str);
	if (size == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while (str[i + j] != '\0' && i + j < size && str[i + j] == find[j])
		{
			if (find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char *str = "palheiro";
    char *find = "ei";
    printf("%s\n", ft_strnstr(str, find, 8));
}
*/
