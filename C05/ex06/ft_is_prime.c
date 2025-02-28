/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:24:58 by yobourai          #+#    #+#             */
/*   Updated: 2023/11/01 23:01:46 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i ;
	i = 2 ;
	if(nb <= 1)
	  {
	  	return 0;
  	  }
	while(i < nb)
	{
		if((nb % i) == 0)
			return 0;
		i++;
	}
	return 1;
}	
