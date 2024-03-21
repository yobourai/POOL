/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:36:32 by yobourai          #+#    #+#             */
/*   Updated: 2023/11/01 16:51:54 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_power(int nb, int power)
{
	int	rslt;
	rslt = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return 1;
	}

	while (power > 0)
	{
		rslt *= nb; 
		power--;
	}
	return (rslt);
}
/*
int	main()
{
	printf("%d",ft_iterative_power(3, 0));
	return 0;
}*/
