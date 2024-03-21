/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:52:24 by yobourai          #+#    #+#             */
/*   Updated: 2023/11/01 20:24:06 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_recursive_power(int nb, int power)
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
		return nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (0);
}
/*
int main()
{
	int a = ft_recursive_power(10 ,2); 
	printf("%d", a);
}*/
