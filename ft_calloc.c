/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 23:13:54 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/15 23:13:58 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*dest;
	size_t	i;

	dest = malloc(nitems * size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < (nitems * size))
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
