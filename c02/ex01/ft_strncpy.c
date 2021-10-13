/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 19:09:02 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/10 20:47:11 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned	int n)
{
	int	i;

	i = 0;
	while (*src != '\0' && n != 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}