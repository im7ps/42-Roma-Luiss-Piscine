/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:26:30 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/11 15:40:05 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capitalize(char	*str, int i)
{
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) \
				|| (str[i] >= 91 && str[i] <= 96) \
				|| (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	capitalize(str, 1);
	return (str);
}
