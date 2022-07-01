#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while(i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size -1]; //para não correr o caracter nulo
		tab[size -1] = tmp;
		size--;
		i++;
	}
}

int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
