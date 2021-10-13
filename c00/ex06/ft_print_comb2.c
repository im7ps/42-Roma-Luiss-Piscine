/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:58:06 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/05 19:14:06 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(char c)
{
	write(1, &c, 1);
}

void	calc_number(int a, int b)
{
	print_number(48 + a / 10);
	print_number(48 + a % 10);
	print_number(' ');
	print_number(48 + b / 10);
	print_number(48 + b % 10);
	if (a != 98 || b != 99)
	{
		print_number(',');
		print_number(' ');
	}
	else
	{
		print_number('\n');
	}
}

void	ft_print_comb2(void)
	{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			calc_number(a, b);
			b++;
		}
		a++;
	}
}
