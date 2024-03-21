/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:17:33 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/31 19:20:30 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	rslt;

	f = 1;
	rslt = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (f != nb)
	{
		rslt *= (f + 1);
		f++;
	}
	return (rslt);
}
/*
int	main(void)
{
	int a = ft_iterative_factorial(0);
	printf("%d", a);
}*/
