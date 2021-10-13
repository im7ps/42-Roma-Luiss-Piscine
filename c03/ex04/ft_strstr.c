/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:27:12 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/12 16:51:36 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	j;
	int	k;

	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		if (str[j] == to_find[0])
		{
			k = 0;
			while (to_find[k] != '\0')
			{
				if (str[k + j] == to_find[k] && to_find[k] != '\0')
					if (to_find[k + 1] == '\0')
						return (&str[j]);
				k++;
			}
		}
		j++;
	}
	return (0);
}
