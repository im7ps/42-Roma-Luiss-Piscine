/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:29:35 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/13 17:29:39 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int    nb)
{
    if (nb == -2147483648)
    {
        putchar('-');
        putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        putchar('-');
        nb *= -1;
    }
    if (nb < 9 && nb >= 0)
    {
        putchar(nb + 48);
        return ;
    }
    else
    {
        ft_putnbr(nb / 10);
        putchar(nb%10 + 48);
    }
}
