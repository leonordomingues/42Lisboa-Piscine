#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main()
{
	int	c;
	int	d;
	int*	a;
	int*	b;

	c = 1;
	d = 0;
	a = &c;
	b = &d;
	printf("valor antes do swap %d %d\n", *a, *b);
	ft_swap(a, b);
	printf("valor do swap %d %d\n", *a, *b);
}*/
