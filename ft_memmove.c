/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:52:31 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 17:58:56 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*temp_dest;
	const char			*temp_src;
	size_t				i;

	i = 0;
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	if (!temp_dest && !temp_src)
		return (NULL);
	if (temp_dest > temp_src)
	{
		while (n-- > 0)
		{
			temp_dest[n] = temp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (temp_dest);
}
