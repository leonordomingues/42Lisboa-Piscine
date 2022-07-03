#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	int numb;

	char str[] = "SJg5";
	numb = ft_str_is_uppercase(str);
	printf("%d\n", numb);
}*/
