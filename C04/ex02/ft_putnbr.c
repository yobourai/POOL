/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:46:44 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/25 16:12:44 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr( int nb)
{
	long int	k;

	k = nb;
	if (k < 0)
	{
		write(1, "-", 1);
		k *= -1;
	}
	if (k > 9)
	{
		ft_putnbr(k / 10);
	}
	ft_putchar(k % 10 + '0');
}
/*
int	main(void)
{
	ft_putnbr(-4147483649);
}*/
