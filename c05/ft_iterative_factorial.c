# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_iterative_factorial                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgerace <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 17:00:35 by sgerace           #+#    #+#              #
/*   Updated: 2021/10/13 17:32:26 by sgerace          ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

int	ft_iterative_factorial(int	nb)
{
	int	i;
	int	tot;

	i = nb;
	tot = 1;
	while (i > 0)
	{
		ft_iterative_factorial(nb - 1);
	}
	tot = tot * nb;
}
