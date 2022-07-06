#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main()
{
	int c;
	int d;
	int *a;
	int *b;

	c = 1;
	d = 0;
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("%d\n%d\n", c, d);
}
