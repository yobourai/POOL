#include <unistd.h>
#include <string.h>
int ft_strcmp(char *s1 , char *s2)
{
	int i ;
	
	i=0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
	i++;
	}
	return s1[i] - s2[i] ;
}
void ft_swap(char **a , char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
char ft_putstr(char *str)
{
	int i;

	i=0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n",1);
	return 0;
}
int main (int ac , char **av)
{
	int j ;
	int i ;
	i=1;

	while (i < ac -1)
	{
		j=1;
		while (j < ac -1)
		{
			if (ft_strcmp(av[j] , av[j+1]) > 0)
			{
				(ft_swap(&av[j],&av[j+1]));
			}
			j++;
		}
		i++;
	}
	j=1;
	while (j < ac)
	{

		ft_putstr(av[j]);
		j++;
	}
	return 0;
}
