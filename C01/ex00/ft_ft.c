#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	a;
	int	*nbr;
	a = 0;
	nbr = &a;
	ft_ft(nbr);
	printf("%d\n", *nbr);
}
