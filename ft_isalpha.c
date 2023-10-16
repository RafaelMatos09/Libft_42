/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafmorei <djmaelreborn@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:59:44 by rafmorei          #+#    #+#             */
/*   Updated: 2023/10/16 20:42:48 by rafmorei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_islower(int c)
{
    if (c >= 97 && c <= 122)
    {
        return (1);
    }
    return (0);
}

int ft_isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    return (0);
}

int ft_isalpha(int c)
{
    if (ft_islower(c) || ft_isupper(c))
    {
        return (1);
    }
    return (0);
}
