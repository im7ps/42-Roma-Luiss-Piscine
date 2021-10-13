/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:53:30 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/12 17:54:40 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcat(char	*dest, char	*src, unsigned	int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && size > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		size--;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i + 1);
}
