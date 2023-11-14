/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:31:32 by rafmorei          #+#    #+#             */
/*   Updated: 2023/11/13 17:33:10 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str)
{
    int neg;
    int num;
    int i;

    i = 0;
    neg = 1;
    num = 0;
    
    while (str[i] && (str[i] == ' ' || str[i] == '\v' || str[i] == '\t' 
            || str[i] == '\f' || str[i] == '\n' || str[i] == '\b' || str[i] == '\r'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            neg *= -1;
        }
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + (str[i] - 48);
        i++;
    }
    return (num * neg);
}
/*
int main(int argc, char **argv)
{
    int j;

    j = atoi(argv[1]);
    ft_putnbr(j);
    return (0);
}
*/