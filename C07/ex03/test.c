#include <stdio.h>
int ft_db(int n)
{	
	if(n > 0 )
	{
		ft_db(n-1);
		printf("%d\n", n);
		ft_db(n-1);
	}
	return 0;
}
int main ()
{
	ft_db(8);
}
