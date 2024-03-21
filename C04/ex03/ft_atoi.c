/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobourai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:20:21 by yobourai          #+#    #+#             */
/*   Updated: 2023/10/27 22:47:29 by yobourai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	m;
	int	rsl;

	m = 0;
	rsl = 0;
	while ((*str != '\0' && *str == ' ') || (*str != '\0' && *str >= 9
			&& *str <= 13))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
		{
			m++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		rsl = rsl * 10 + *str - '0';
		str++;
	}
	if (!(m % 2 == 0))
		return (-rsl);
	return (rsl);
}
/*
int	main(void)
{

	char str[]=" --+--+-1234ab567";
	int m = ft_atoi(str);
		printf("%d", m);



}*/
