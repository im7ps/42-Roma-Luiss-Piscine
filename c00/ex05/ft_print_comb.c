/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:57:54 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/05 18:57:59 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(char a, char b, char c)
{
	char	comma;
	char	space;
	char	newline;

	newline = '\n';
	comma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
	else
	{
		write(1, &newline, 1);
	}
}

void	ft_print_comb(void)
	{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_comb2(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
