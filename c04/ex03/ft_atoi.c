/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgerace <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:04:23 by sgerace           #+#    #+#             */
/*   Updated: 2021/10/13 17:00:08 by sgerace          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int calc_pow(int  apex)
{
  int powered;
  
  powered = 1;
  while (apex > 0)
  {
    powered = powered * 10;
    apex--;
  }
  return powered;
}  

int    store_result(char    *str, int    sign)
{
    int i;
    int tot;
    int apex;
    
    i = 0;
    tot = 0;
    apex = 0;
    
    while (str[apex + 1] >= 48 && str[apex + 1] <= 57)
    {
      apex++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
      tot = tot + (((str[i] - 48) * calc_pow(apex)));
      apex--;
      i++;
    }
    return (tot);
}

int    ft_atoi(char    *str)
{
    int    i;
    int    sign;
    int tot;

    i = 0;
    sign = 0;
    tot = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 45)
            sign++;
        else if (str[i] >= 48 && str[i] <= 57)
        {
            tot = store_result(&str[i], sign);
            break;
        }
        i++;
    }
    if (sign % 2 == 0)
      return (tot);
    else
      return ((tot) * (-1));
}
