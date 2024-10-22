/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:51 by yobourai          #+#    #+#             */
/*   Updated: 2023/11/01 18:33:17 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index > 0)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}
/*
int	main(void)
{
	int b = ft_fibonacci(4);
	printf("%d", b);
}*/
