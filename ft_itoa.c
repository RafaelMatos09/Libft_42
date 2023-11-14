/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:34:41 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 20:27:24 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    my_count(int n)
{
    int            count;
    long int    aux;

    count = 0;
    aux = n;
    if (aux < 0)
    {
        aux *= -1;
        count++;
    }
    while (aux > 9)
    {
        aux = (aux / 10);
        count++;
    }
    count++;
    return (count);
}

char    *ft_itoa(int n)
{
    char        *res;
    int            count;
    int            i;
    long int    aux;

    aux = n;
    count = my_count(n);
    i = count;
    res = malloc(sizeof(char) * count + 1);
    if (!res)
        return (NULL);
    if (n < 0)
        aux *= -1;
    res[i] = '\0';
    while (i != 0)
    {
        res[--i] = aux % 10 + '0';
        aux /= 10;
    }
    if (n < 0)
        res[0] = '-';
    return (res);
}
