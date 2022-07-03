#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	int numb;

	char str[] = "947483";
	numb = ft_str_is_numeric(str);
	printf("%d\n", numb);
}*/
