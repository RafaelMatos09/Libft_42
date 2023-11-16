/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:57:21 by rafmorei          #+#    #+#             */
/*   Updated: 2023/10/27 18:57:32 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcl;
	size_t	len;

	srcl = ft_strlen((char *)src);
	if (size)
	{
		if (srcl >= size)
		{
			len = size - 1;
		}
		else
		{
			len = srcl;
		}
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (srcl);
}
