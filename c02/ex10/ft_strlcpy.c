/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:50:37 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/12 15:08:14 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned	int size)
{
	unsigned	int	i;
	int	temp;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	temp = i;
	while (size > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (temp);
}
