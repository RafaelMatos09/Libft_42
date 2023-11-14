/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:57:26 by rafmorei          #+#    #+#             */
/*   Updated: 2023/10/27 17:57:28 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t size)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < size)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
