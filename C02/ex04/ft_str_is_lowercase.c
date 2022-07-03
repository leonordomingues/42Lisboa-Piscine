#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	int numb;

	char str[] = "jSuiiw";
	numb = ft_str_is_lowercase(str);
	printf("%d\n", numb);
}*/
